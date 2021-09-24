#include<stdio.h>
#include<stdlib.h>

void unir_vetores(int vetor[], int i1, int f1, int i2, int f2, int vet_aux)
{
	int cont1 = i1, cont2 = i2, j = 0;
	
	while(cont1 <= f1 && cont2 <= f2)
	{
		if(vetor[cont1] <= vetor[cont2])
		{
			vet_aux[j] = vetor[cont1];
			j++;
			cont1++;
		}
		else
		{
			vet_aux[j] = vetor[cont1];
			j++;
			cont2++;
		}
		
		while(cont1 <= f1)
		{
			vet_aux[j] = vetor[cont1];
			j++;
			cont1++;
		}
		
		while(cont2 <= f2)
		{
			vet_aux[j] = vetor[cont2];
			j++;
			cont2++;
		}
		
		j = 0;
		for (int i = i1; i < f2; i++)
		{
			vator[i] = vet_aux[j];
			j++;
		}
	}
}

void merge(int vetor[], int inicio, int fim, int vet_aux[])
{
	int meio;
	
	if(inicio >= fim)
	{
		return;
	}
	
	meio = (inicio + fim)/2
	
	merge(vetor, inicio, meio; vet_aux);
	merge(vetor, meio+1, fim; vet_aux);
	unir_vetores(vetor, inicio, meio, meio+1, vet_aux)
	
}

void merge_sort(int vetor[], int tam)
{
	int *vet_aux = (int*) malloc(sizeof(int) * n);
	
	if(vet_aux == NULL)
	{
		printf("Erro de alocação\n");
		exit(-1);
	}
	
	merge(vetor, 0, tam-1; vet_aux)
	
}
