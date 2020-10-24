/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib-drive-thru.h"

int novoPedido (void);

int main()
{
    char op;
    int valorPedido;

	while( op != 2 )
	{
	   op = novoPedido();
    }
    system("clear");
    valorPedido = exibePedido();

    return 0;
}

int novoPedido (void)
{
    int quantidade, aswer;
    registro_produto reg;

    system("clear");
    welcome();
    visualizarProdutos();
    reg.Codprod = pedeCodProduto();
    pesquisaProduto(&reg);
    quantidade = pedeQuantidade(reg);
    adiconarProdutoNoPedido(reg, quantidade);
    printf("\nDeseja algo mais?");
    printf("\n  1 = SIM");
    printf("\n  2 = NÃO\n");
    scanf("%d", &aswer);
    return(aswer);
}


