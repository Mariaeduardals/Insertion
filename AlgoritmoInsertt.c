#include <stdio.h>
#include <stdlib.h>
#include "AlgoritmoInsert.h"
		
			struct produto{
				int codigo;
				float valor;
			};
		
			typedef struct produto Produto;
		
			struct insert{
				Produto** vetor;
				int n;
				int contador;
			};
			
			typedef struct insert Insert;
			
			Produto* novoProduto(int codigo, int valor){
					Produto *p = (Produto*) malloc(sizeof(Produto)); 
				if(p != NULL){
					p->codigo = codigo;
					p->valor = valor;
				}
					return p; 
							
			}
						
			Insert* create(int n){
			 
			Insert *in = (Insert *)malloc(sizeof(Insert));
				 
			if (in != NULL) {
				in->n = n;
				in->contador = 0;
				in->vetor = (Produto**) malloc(n * sizeof(Produto));
			}
			
			return in;
		}			
			
			void insertionSort(Insert *v){
			
			int i, j;
			
			Produto *p;
			
			printf("\nOrdenando com o algoritmo InsertionSort ...\n\n");
			for (i = 1; i < v->n; i++){
				
			    p = v->vetor[i];
			    j = i-1;
			    
			    while(j >= 0 && v->vetor[j]->codigo > p->codigo){
			        v->vetor[j+1] = v->vetor[j];
			        j = j -1;
			    }
			    v->vetor[j+1] = p;
			}
		}


			int add(Insert* v, int codigo, float valor){
				
				Produto *p = novoProduto(codigo, valor);
				
				if(p != NULL && v != NULL && v->contador < v->n){
					v->vetor[v->contador++] = p;
					return 1; 
				}else
					return 0;
				
			}

		 void imprimir(Insert *v){
		 	int i;
		
		 	for(i = 0; i < v->contador; i++){
		 		
				printf("Produto [%i] -> codigo: %i, valor: %.2f \n", i, v->vetor[i]->codigo,v->vetor[i]->valor);
			}
		 }



