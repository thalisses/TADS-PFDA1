/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib-drive-thru.h"

char   menu (void)
{
	/* Vari�vel local */
	char escolha;
	
	system ("clear");
	printf ("\n============================");
	printf ("\n           M E N U          ");
	printf ("\n============================");
	printf ("\n   1. Cadastrar produtos    ");
	printf ("\n   2. Consultar produtos    ");
	printf ("\n   3. Consultar vendas      ");
	printf ("\n   0. FIM                   ");
	printf ("\n============================");
	printf ("\n   Escolha: "); fflush (stdin); escolha = getchar();
	
    return (escolha);
}

void admin (char tecla)
{
    switch ( tecla )
    {
	   case '1': system("./add-products"); break;
	   case '2': 
	   {
	   		visualizarProdutos();
			printf("\n Aperte qualquer tecla para continuar...");
			getchar();
	   }
		break;
	   case '3': printf("Chama o modulo de vendas"); 		break; 
	}	
}

/* Corpo do Programa */
int main ()
{
	char op;
	while ( op != '0' )
	{
	   op = menu();
	   getchar();
       admin ( op );	
    }
	return (0);
}
