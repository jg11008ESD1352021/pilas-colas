#include <stdio.h>
#include <stdlib.h>
//creando la estructura Nodo
struct nodo{
	int info;
	struct nodo *sig;
};

//iniciando los nodos
struct nodo *raiz = NULL;
struct nodo *fondo = NULL;

void INSERTAR(int x){
	struct nodo *nuevo;
	/*reservacion de memoria*/
	 nuevo = malloc(sizeof(struct nodo));
	 /*asignacion de data*/
	 /* -> es el equivalente de . cuando de punteros se trata de tal forma que -> se usa cuando la variable de su izquierda es un puntero */
	 (*nuevo).info = x;
	 nuevo -> sig = NULL;
	 if(vacia()){
		 raiz = nuevo;
		 fondo = nuevo;
	 }else{
		 fondo -> sig = nuevo;
		 fondo = nuevo;
	 }
}
int EXTRAER(){
	if(!vacia()){
		/*PUNTERO->ATRIBUTO es un método abreviado de hacer (*PUNTERO).ATRIBUTO.*/
		//-> es un operador, y, por lo tanto, se puede encadenar:
		int informacion = (*raiz).info;
		//int informacio = raiz -> info;
		struct nodo *bor = raiz;
		if(raiz==fondo){
			raiz = NULL;
			fondo = NULL;
		}else{ raiz = raiz -> sig;}
		free(bor);
		return informacion;
	}else{return -1;}
}
void IMPRIMIR(){
	struct nodo *reco = raiz;
	printf("Listado de todos los elementos de la cola.\n");
	while(reco !=NULL){
		printf("%i / ",reco->info);
		reco = reco -> sig;
	}
	printf("\n");
}
void LIBERAR(){
	struct nodo *reco = raiz;
	struct nodo *bor;
	while(reco !=NULL){
		bor = reco;
		reco = reco->sig;
		free(bor);
	}
}
int vacia(){
    if (raiz == NULL){return 1;}
    else{return 0;}
}
int main() {
	  INSERTAR(5);
    INSERTAR(10);
    INSERTAR(50);
    IMPRIMIR();
    printf("Extraemos uno de la cola: %i\n", EXTRAER());
    IMPRIMIR();
    LIBERAR();  
  return 0;
}
