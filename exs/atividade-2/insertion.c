#include<stdio.h>
#include<stdlib.h>

void insertion_sort(int vetor[], int tam)
{
	int x;
	int j;
	
	for(int i = 1; i < tam; i++)
	{
		x = vetor[i];
		j = i - 1;
		
		while(vetor[j] > x && j >= 0)
		{
			vetor[j+1] = vetor[j];
			j--;
		}
		vetor[j+1] = x;
	}
}

int main()
{
	int *vet, n;
	
	scanf("%d", )
	
	
	return 0;
}
