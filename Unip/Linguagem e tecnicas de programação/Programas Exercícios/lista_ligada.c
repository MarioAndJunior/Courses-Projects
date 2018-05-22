#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct no{
 int info;
 struct no * proximo;
}No;
/* Funcao de iniciacao: retorna uma lista vazia */
No* inicia(){
 return NULL;
}
/* Funcao de insercao no inicio: retorna a lista atualizada */
No* insere(No* lista, int num){
 No* novo_no = (No*)malloc(sizeof(No));
 novo_no->info = num;
 novo_no->proximo = lista;
 return novo_no;
}
/* Funcao de busca: busca um elemento (no) da lista */
No* busca(No* lista, int num){
 No* aux; /* variavel auxiliar para percorrer a lista */
 for(aux = lista; aux != NULL; aux = aux->proximo){
 if(aux->info == num)
 return aux;
 }
 return NULL;
}
/* Funcao de remocao: retira um elemento (no) da lista */
No* retira(No* lista, int num){
 No* anterior = NULL; /* ponteiro para o no anterior */
 No* aux = lista; /* ponteiro auxiliar para percorrer
 lista */
 /* procura o no na lista, guardando o no anterior */
 while(aux != NULL && aux->info != num){
 anterior = aux;
 aux = aux->proximo;
 }
 /* Verifica se achou o no */
 if(aux == NULL){
 return lista; /* nao achou, retorna lista original */
 }
 /* achou, retira o no da lista */
 if(anterior == NULL){
 lista = aux->proximo; /* retira no do inicio da lista */
 }else{
 anterior->proximo = aux->proximo; /* retira no do meio da lista */
 }
 free(aux); /* libera espaco na memoria usado para alocar a variavel */
 return lista;
}
/* Funcao para liberar a lista da memoria */
void libera(No* lista){
 No* aux = lista; /* variavel auxiliar para percorrer
 lista */
 while(aux != NULL){
 /* guarda referencia para o proximo no */
 No* proximo_no = aux->proximo;
 free(aux); /* libera memoria apontada por aux */
 aux = proximo_no; /* faz aux apontar para o proximo no */
 }
}
/* Funcao de impressao na tela: imprime os valores dos nos */
void imprime(No* lista){
 No* aux; /* variavel auxiliar para percorrer a lista */
 for(aux = lista; aux != NULL; aux = aux->proximo)
 printf(“Numero: %d\n”, aux->info);
}
int main(void){
 No* lista;
 lista = inicia();
 lista = insere(lista, 23);
 lista = insere(lista, 45);
 lista = insere(lista, 56);
 lista = insere(lista, 95);
 lista = insere(lista, 78);
 printf(“*** Valor original da lista ***\n”);
 imprime(lista);
 lista = retira(lista, 78);
 printf(“*** Lista com a retirada do elemento 78 ***\n”);
 imprime(lista);
 lista = retira(lista, 45);
 printf(“*** Lista com a retirada do elemento 45 ***\n”);
 imprime(lista);
 libera(lista);
 getch();
 system("pause");
 return 0;
}
