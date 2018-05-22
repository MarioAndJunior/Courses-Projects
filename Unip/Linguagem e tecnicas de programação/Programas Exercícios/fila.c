#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct no{
int info;
struct no * proximo;
}No;
typedef struct fila{
No* ini;
No* fim;
}Fila;
No* insere(No* lista, int num){
No* novo_no = (No*)malloc(sizeof(No));
novo_no->info = num;
novo_no->proximo = lista;
return novo_no;
}
No* retira(No* lista){
No* aux = lista;
lista = aux->proximo;
free(aux);
return lista;
}
Fila* cria(void){
Fila* f = (Fila*)malloc(sizeof(Fila));
f->ini = f->fim = NULL; /* inicia a fila vazia */
return f;
}
void entra(Fila* f, int v){
 No* novo_no = insere(f->fim, v);
 novo_no->proximo = NULL;
 if(f->fim != NULL){ /* nos casos em que não é o primeiro elemento */
 f->fim->proximo = novo_no;
 }
 f->fim=novo_no;
 if(f->ini == NULL){ /* Fila estava vazia? */
 f->ini = f->fim;
 }
}
int vazia(Fila* f){
return(f->ini == NULL);
}
int sai(Fila* f){
 int v;
 if(vazia(f)){
 printf(“Fila vazia.\n”);
 exit(1); /* aborta programa */
 }
 v = f->ini->info;
 f->ini = retira(f->ini);
 if(f->ini == NULL){ /* Fila ficou vazia? */
 f->fim = NULL;
 }
 return v;
}
void libera(Fila* f){
No* q = f->ini;
while(q != NULL){
 No* t = q->proximo;
 free(q);
 q = t;
}
free(f);
}
void imprime(Fila* f){
No* q;
for(q = f->ini; q != NULL; q = q->proximo){
 printf(“%d\n”, q->info);
}
}

int main(void){
Fila* f = cria();
entra(f, 1);
entra(f, 2);
entra(f, 3);
entra(f, 4);
printf(“Primeiro elemento: %d\n”, sai(f));
printf(“Segundo elemento: %d\n”, sai(f));
printf(“Configuracao da fila:\n”);
imprime(f);
entra(f, 5);
entra(f, 6);
printf(“Configuracao da fila:\n”);
imprime(f);
printf(“terceiro elemento: %d\n”, sai(f));
printf(“Configuracao da fila:\n”);
imprime(f);
libera(f);
getch();
system("pause");
return 0;
}
