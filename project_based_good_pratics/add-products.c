/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <string.h>
#include "lib-drive-thru.h"

registro_produto reg;

void capturaProduto (void)
{
	system ("clear");
	printf ("\n------------ CADASTRO DE PRODUTO -----------------");
	reg.Codprod = quantidadeProdutos() + 1;
	printf ("\nCodigo do produto: %i", reg.Codprod);
	
	printf ("\nDigite o nome do produto: "); 
	fflush (stdin);
	gets(reg.Nomeprod);
	printf ("\nDigite o valor do produto R$: ");
	fflush (stdin);
	scanf("%f", &reg.Custoprod);
}

void gravaProduto (void)
{
    FILE  *  A;
    A  =  fopen(ARQUIVO_DE_PRODUTOS, "a");	
    if ( A == NULL )
    {
    	printf("ERRO AO ABRIR O ARQUIVO PRODUTOS.DAT!");
    	getchar();
    	exit(0);
	}
	fwrite ( &reg,  sizeof(reg), 1, A );
	fclose (A);
}

int main ()
{
	capturaProduto();
	gravaProduto();
	visualizarProdutos();
    return (0);
}
