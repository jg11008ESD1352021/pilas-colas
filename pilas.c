#include <stdio.h>
#include <stdlib.h>
//#include "pilas.h"
#define tam 9
typedef struct{
	int datos[tam]; //arreglo que almacenara x cantidad de enteros
	int cima;//controlador del elemento que esta en la cima
}Pila;
//funciones
int menu();//funcion encargada de mostrar el menu.
void previa(Pila pila);//imprime la vista previa de la pila...
/*<<Operaciones que se van a hacer dentro de la pila>>*/
void crearpila(Pila *pila){
	pila->cima=-1;
}
int insertar(Pila *pila, int dato){
	if(llena(*pila)==0){
		pila -> cima++;
		pila->datos[pila->cima] = dato;
		return 1;
		return 0;
	}
}

int eliminar(Pila *pila){
	int aux;
	if(vacia(*pila)==0){
			aux=pila->datos[pila->cima];//[LA FORMA CE ACCEDER A LOS DATOS ]
			pila->datos[pila->cima]=0;//[DE UN APUNTADOR ES LA ->]
			pila->cima--;
			return aux;
	}
	return 0;
}
int cima(Pila pila){
	if(vacia(pila)==0)
	return pila.datos[pila.cima];
	return 0;
}
int vacia(Pila pila){
	if (pila.cima==-1)
	return 1;
return 0;
}
int llena(Pila pila){
	if(pila.cima==tam-1){
		return 1;
		return 0;
	}
}

int main() {
  int opc, num, i, j;
	Pila pila;
	pila.cima=-1;
	//crearpila(&pila);
	previa(pila);
	while((opc=menu())!=5){
		switch(opc){
			case 1:
				printf("\t Ingrese un numero a la pila: ");
				scanf("%d",&num);
				if(insertar(&pila,num)==1){
					printf("\n\t Numero Apilado.\n");
				}else{
					printf("la pila esta llena.\n") ;
				}
			break;
			case 2:
				num=eliminar(&pila);
				if(num!=0){
					printf("\n\t Elemento eliminado: %d",num);
				}else{
					printf("\n\t La pila esta vacia. \n");
				}
			break;
			case 3:
				j=pila.cima;
				for(i=0; i<=j;i++){
					num=eliminar(&pila);
					if(num!=0){
						printf("\n\t Elemento eliminado: %d",num);
					}
				}
			break;
			case 4:
			if(vacia(pila)==0){
				printf("\n\tLa Cima es %d ",pila.datos[pila.cima]);
			}else{
				printf("\n\tLa pila esta vacia.");
			}
			break;
			default:
			printf("\n\t>_< Opcion Incorrecta.");
		}
		previa(pila);
	}
  return 0;
}
int menu(){
	int opc;
	printf("\n----------------------------------\n");
	printf("\nMENU PILA ESTATICA\n");
	printf("1-Insertar\n");
	printf("2-Eliminar\n");
	printf("3-Vaciar\n");
	printf("4-Cima\n");
	printf("5-Salir\n");
	printf("Opcion: ");
	scanf("%d",&opc);
	return opc;
}
void previa(Pila pila){
	int i;
	i = pila.cima;
	printf("\n\n**Vista Previa de la Pila**\n\n");
	printf("%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,187);
	printf("%c NULL %c\n",186,186);
	printf("%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,188);
	while(i==NULL){
			printf("%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,187);
			if(pila.datos[i]<=tam){
				printf("%c	%d	%c\n",186,pila.datos[i],186);
			}else{
				printf("%c	%d	%c\n",186,pila.datos[i],186);
			}
			i--;

	printf("%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,187);
				if(pila.datos[i]<=tam){
				printf("%c	%d	%c\n",186,pila.datos[i],186);
			}else{
				printf("%c	%d	%c\n",186,pila.datos[i],186);
			}
			i--;
	}
}
