#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define  TAMSTR  	50
#define  TAMCARTAO	16
#define  ARQUIVO_DE_PRODUTOS    "PRODUTOS.DAT"
#define  ARQUIVO_DE_PAGAMENTOS 	"PAGAMENTOS.DAT"
#define  ARQUIVO_DE_CARTOES     "CARTOES.DAT"
#define  ARQUIVO_PEDIDO         "PEDIDO.DAT"

typedef struct
{
   	int  	Codprod;
   	char 	Nomeprod[TAMSTR];
   	float	Custoprod;
}
registro_produto;

typedef struct
{
   	registro_produto registro;
    int quantidade;
    float valorTotal;
}
registro_produto_pedido;

typedef struct
{
   	int  	Codpgto;
   	char 	FormaPgto[TAMSTR];
   	float	ValorPgto;
}
registro_pagamentos;


int quantidadeProdutos(void)
{
    FILE * A;
    registro_produto Reg;
    int numRegistros;

    A = fopen(ARQUIVO_DE_PRODUTOS, "r");
    if(A==NULL)
    {
        numRegistros = 0;
    }
    else
    {
        if (fseek (A, 0, SEEK_END))
        {
            printf("\nERRO ao calcular o tamanho de arquivo!\n");
            getchar();
            numRegistros = -1;
        }
        else
        {
            numRegistros =  ftell(A) / sizeof (Reg);
        }
        fclose(A);
    }
    return (numRegistros);
}

void welcome (void)
{
    printf("\n\n\n       BEM VINDE AO DRIVE THRU     \n\n\n");
    printf("Escolha os produtos que deseja: \n\n");
}

int pedeCodProduto (void)
{
    int aswer;
    printf("\n Porfavor, digite o CODPROD: ");
    scanf("%d", &aswer);
    return(aswer);
}

int pedeQuantidade (registro_produto reg)
{
    int quantidade;
    printf("Quantidade de %s você quer? ", reg.Nomeprod);
    scanf("%d", &quantidade);
    return(quantidade);
}

void visualizarProdutos(void)
{
    FILE * A;
    registro_produto Reg;

    A = fopen(ARQUIVO_DE_PRODUTOS, "r");
    if(A==NULL)
    {
        printf("\nERRO ao abrir o arquivo!\n");
        getchar();
    	exit(0);
    }
    else
    {
        printf ("\n================================================");
        printf ("\n                    CARDAPIO                    ");
        printf ("\n================================================");
        printf ("\n   CODPROD      NOME               VALOR (R$)   ");	
        printf ("\n================================================");
    
        while (!feof(A))
        { 
            fread (&Reg,  sizeof(Reg), 1, A);
            if (!feof(A))
            {
                printf ("\n   %i\t\t%-20s\t%.2f" , Reg.Codprod, Reg.Nomeprod, Reg.Custoprod); 
            }
        }
    fclose (A);
    printf ("\n================================================");
    }
}

void pesquisaProduto(registro_produto * R)
{
    FILE *A;
   registro_produto Rler; 
   A = fopen (ARQUIVO_DE_PRODUTOS, "r");
   if (A==NULL)
      printf("Falha ao abrir o arquivo!");	   
   else
   {    
   	    while ( !feof(A) )
   	    { 
		    fread (&Rler, sizeof(Rler), 1, A);
            if ( ferror(A) )
	           printf("Falha ao ler o arquivo!");	
	        if ( !feof(A) )
	           if ( R->Codprod == Rler.Codprod )
	              *R = Rler;
	   }
	   fclose(A);
   }
}

void adiconarProdutoNoPedido(registro_produto R, int quantidade)
{
    FILE * A;
    registro_produto_pedido RegProd;
    RegProd.registro = R;
    RegProd.quantidade = quantidade;
    RegProd.valorTotal = R.Custoprod * quantidade;

    A  =  fopen(ARQUIVO_PEDIDO, "a");	
    if ( A == NULL )
    {
    	printf("ERRO AO ABRIR O ARQUIVO PRODUTOS.DAT!");
    	getchar();
    	exit(0);
	}
	fwrite ( &RegProd,  sizeof(RegProd), 1, A );
	fclose (A);
}

int exibePedido (void)
{
    FILE * A;
    registro_produto_pedido Reg;
    float total_pedido;

    A = fopen(ARQUIVO_PEDIDO, "r");
    if(A==NULL)
    {
        printf("\nERRO ao abrir o arquivo!\n");
        getchar();
    	exit(0);
    }
    else
    {
        printf ("\n===============================================================================");
        printf ("\n                                Pedido                                         ");
        printf ("\n===============================================================================");
        printf ("\n   CODPROD   NOME                VALOR (R$)    QUANTIDADE      VALOR FINAL     ");	
        printf ("\n===============================================================================");
    
        while (!feof(A))
        { 
            fread (&Reg,  sizeof(Reg), 1, A);
            if (!feof(A))
            {
                total_pedido += Reg.valorTotal;
                printf ("\n   %i\t   %-20s  %.2f\t\t%i\t\t%.2f" , Reg.registro.Codprod, Reg.registro.Nomeprod, Reg.registro.Custoprod, Reg.quantidade, Reg.valorTotal); 
            }
        }

        fclose (A);
        printf ("\n==============================================================================");
        printf ("\n\t\t Valor total da compra: %.2f", total_pedido);
        printf ("\n==============================================================================");

        return (total_pedido);
    }
}

int quantidadePagamentos(void)
{
    FILE * A;
    registro_pagamentos Reg;
    int numRegistros;

    A = fopen(ARQUIVO_DE_PAGAMENTOS, "r");
    if(A==NULL)
    {
        numRegistros = 0;
    }
    else
    {
        if (fseek (A, 0, SEEK_END))
        {
            printf("\nERRO ao calcular o tamanho de arquivo!\n");
            getchar();
            numRegistros = -1;
        }
        else
        {
            numRegistros =  ftell(A) / sizeof (Reg);
        }
        fclose(A);
    }
    return (numRegistros);
}


