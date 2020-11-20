#include <stdio.h>
#include <stdlib.h>
#include "AlgoritmoInsert.h"
	
	int main() {
	
		Insert* in = create(6);
		
		add(in, 10, 600.5);
		add(in, 8, 450.0);
		add(in, 2, 390.0);
		add(in, 99, 220.0);
		add(in, 1, 730.0);
		add(in, 9, 800.0);
		
		imprimir(in);
		
		insertionSort(in);
		
		imprimir(in);
		
		return 0;
	}
