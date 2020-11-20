	
	typedef struct produto Produto;
	
	typedef struct insert Insert;
	
	Produto* novoProduto(int codigo, int valor);
	
	Insert* create(int n);
	
	void insertionSort(Insert *v);
	
	int add(Insert* v, int codigo, float valor);
	
	void imprimir(Insert *v);

