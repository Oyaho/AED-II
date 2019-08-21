#include <stdio.h>
using namespace std;
void selectSort( int vetor[ ], int tam);
int main(){
	int vetor[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int tamanho = (sizeof vetor / sizeof vetor[0]); 
	printf("%d \n", tamanho);
	printf("Antes: \n");
	
	for (int i = 0; i < tamanho; i++) {
      printf ("%d ",vetor[i]);
    }
    printf("\n");
	selectSort(vetor, tamanho);
	
	return 0;
}

void selectSort( int vetor[ ], int tam){

int lacoExterno, lacoInterno, indiceMenor, aux;
	
	for(lacoExterno=0; lacoExterno < tam-1; lacoExterno++){
		indiceMenor=lacoExterno;
		for(lacoInterno=lacoExterno+1; lacoInterno<tam; lacoInterno++){  //Pesquisar linearmente o índice do menor elemento
			if(vetor[lacoInterno] < vetor[indiceMenor]){
				indiceMenor=lacoInterno; //atualiza o menor elemento
			}
		}//processo de troca
		aux=vetor[lacoExterno];
		vetor[lacoExterno]=vetor[indiceMenor];
		vetor[indiceMenor]=aux; //fim processo de troca
	}
	
	FILE *fptr;
	fptr = fopen("SELECTSORT.txt", "w");
   	for(int i = 0; i < tam;i++){
   		fprintf(fptr, "%d, ", vetor[i]);
   	}
   	fclose(fptr);
}



