#include <stdio.h>

struct filmes {
char nome[50], estilo[50], protagonista[50], lancamento[12];
float rating; 
};

typedef struct filmes f;

int main(){


	f filmes[10];
	
	int i=0, opcoes;

	for (i; i < 10; i++){
		printf ("\n\n######### DADOS DO %d FILME ##########\n\n", i+1);
		printf ("Digite o nome do %d filme:", i+1);
		fgets (filmes[i].nome, 50, stdin);
		printf ("Digite o estilo do %d filme:", i+1);
		fgets (filmes[i].estilo, 50, stdin);
		printf ("Digite o protagonista do %d filme:", i+1);
		fgets (filmes[i].protagonista, 50, stdin);
		printf ("Digite o ano de lancamento do %d filme:", i+1);
		fgets (filmes[i].lancamento, 50, stdin);
		printf ("Digite o rating do %d filme : ", i + 1);
		scanf ("%f", &filmes[i].rating);
		getchar();
		printf ("\n\n");
	}


		printf (" Liste seus filmes ?\n ");	
		printf ("1 - Todos\n");
		printf ("2 - Rating\n");
		printf ("3 - Estilo\n");
		printf ("4 - Mais Recentes\n");
		printf ("Escolha uma das opcoes : ");
		scanf ("%d", &opcoes);

		
	if (opcoes == 1){
		for (i; i < 10; i++){
			  printf ("\n\n####### FILMES %d #######\n\n", i+1);
			  printf ("Nome: %s", filmes[i].nome);
			  printf ("Estilo: %s", filmes[i].estilo);
			  printf ("Protagonista: %s", filmes[i].protagonista);
			  printf ("Lancamento: %s", filmes[i].lancamento);
			  printf ("rating: %f", filmes[i].rating);
		}
	}else if (opcoes == 2){
			
	
	}else if (opcoes == 3){

	}else if (opcoes == 4){

	}else {
		printf ("\n\nO numero digitado eh invalido.\n\n");
	}
	
}
