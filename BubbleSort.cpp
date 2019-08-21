#include <iostream>
using namespace std;
void bubbleSort(int vetor[], int tamanho);
int main(){
	int vetor[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int tamanho = (sizeof vetor / sizeof vetor[0]); 
	printf("%d \n", tamanho);
	printf("Antes: \n");
	for (int i = 0; i < tamanho; i++) {
      printf ("%d ",vetor[i]);
    }
    printf("\n");
	bubbleSort(vetor, tamanho);
	
	return 0;
}

void bubbleSort(int vetor[], int tamanho) {      
    int flag, i, aux;   
    
    do{
      flag = 0;
      for (i = 0; i < (tamanho - 1); i++) {
		   if (vetor[i] > vetor[i+1]) {
		     aux = vetor[i];
		     vetor[i] = vetor[i+1];
		     vetor[i+1] = aux;
		     flag = 1;
		   	}
   		}
    }while (flag == 1);
    
    FILE *fptr;
	fptr = fopen("ordenado.txt", "w");
   	for(i = 0; i < tamanho;i++){
   		fprintf(fptr, "%d, ", vetor[i]);
   	}
   	
	fclose(fptr);
}
