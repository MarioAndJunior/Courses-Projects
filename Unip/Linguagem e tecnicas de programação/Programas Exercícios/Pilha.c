#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
typedef struct no{
 int info;
 struct no * proximo;
}No;
typedef struct pilha{
 No* topo;
} Pilha;
Pilha* cria(void){
 Pilha* p = (Pilha*)malloc(sizeof(Pilha));
 p->topo = NULL;
 return p;
}
/* Funcao de insercao no inicio: retorna a lista atualizada */
No* insere(No* lista, int num){
 No* novo_no = (No*)malloc(sizeof(No));
 novo_no->info = num;
 novo_no->proximo = lista;
 return novo_no;
}
No* retira(No* lista){
 No* aux = lista;
 lista = aux->proximo; /* retira no do inicio da lista */
 free(aux); /* libera espaco na memoria usado para alocar a variavel */
 return lista;
}
void push(Pilha* p, int v){
 p->topo = insere(p->topo, v);
}
int vazia(Pilha* p){
 return(p->topo == NULL);
}
int pop(Pilha* p){
 int v;
 if(vazia(p)){
 printf(“Pilha vazia.\n”);
 exit(1);
 }
 v = p->topo->info;
 p->topo = retira(p->topo);
 return v;
}
void libera(Pilha* p){
 No* q = p->topo;
 while(q != NULL){
 No* t = q->proximo;
 free(q);
 q = t;
 }
 free(p);
}
void imprime(Pilha* p){
 No* q;
 for(q = p->topo; q != NULL; q = q->proximo){
 printf(“%d\n”, q->info);
 }
}
int main(void){
 Pilha* p = cria();
 push(p, 1);
 push(p, 2);
 push(p, 3);
 push(p, 4);
 push(p, 5);
 printf(“Situacao original da pilha tipo lista:\n”);
 imprime(p);
 pop(p);
 pop(p);
 printf(“\nSituacao atual da pilha tipo lista:\n”);
 imprime(p);
 push(p, 6);
 push(p, 7);
 push(p, 8);
 printf(“\nSituacao atual da pilha tipo lista:\n”);
 imprime(p);
 pop(p);
 pop(p);
 pop(p);
 pop(p);
 printf(“\nSituacao atual da pilha tipo lista:\n”);
 imprime(p);
 libera(p);
 getch();
 system("pause");
 return 0;
}
