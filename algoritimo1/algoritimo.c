#include <stdio.h>

int main() {

    int opcao;
    int produto;
    int quantidade;

    float total = 0;
    float valorVenda = 0;

    char entrada;

    /* CONTADORES */
    int chocolate = 0;
    int morango = 0;
    int baunilha = 0;
    int milkChocolate = 0;
    int milkMorango = 0;
    int picoleUva = 0;
    int picoleLimao = 0;
    int agua = 0;

    do {

        printf("\n=================================\n");
        printf("      SORVETERIA GELADAO\n");
        printf("=================================\n");

        printf("1 - Ver Cardapio\n");
        printf("2 - Realizar Venda\n");
        printf("3 - Relatorio de Vendas\n");
        printf("4 - Produto Mais Vendido\n");
        printf("0 - Sair\n");

        printf("\nEscolha: ");

        if(scanf("%i", &opcao) != 1) {

        printf("\nOpcao invalida!\n");

        scanf("%c", &entrada);

            opcao = -1;

        } else {

            switch(opcao) {

                case 1:

        printf("\n========= CARDAPIO =========\n");

        printf("1 - Sorvete Chocolate ..... R$ 8.00\n");
        printf("2 - Sorvete Morango ....... R$ 8.00\n");
        printf("3 - Sorvete Baunilha ...... R$ 7.00\n");
        printf("4 - Milk Shake Chocolate .. R$ 15.00\n");
        printf("5 - Milk Shake Morango .... R$ 15.00\n");
        printf("6 - Picole de Uva ......... R$ 4.00\n");
        printf("7 - Picole de Limao ....... R$ 4.00\n");
        printf("8 - Agua .................. R$ 3.00\n");

       break;

       case 2:

        printf("\n========= VENDAS =========\n");

        printf("1 - Sorvete Chocolate\n");
        printf("2 - Sorvete Morango\n");
        printf("3 - Sorvete Baunilha\n");
        printf("4 - Milk Shake Chocolate\n");
        printf("5 - Milk Shake Morango\n");
        printf("6 - Picole de Uva\n");
        printf("7 - Picole de Limao\n");
        printf("8 - Agua\n");

        printf("\nEscolha o produto: ");

        if(scanf("%d", &produto) != 1) {

          printf("\nProduto invalido!\n");

          scanf("%c", &entrada);

          } else {

        if(produto < 1 || produto > 8) {

            printf("\nProduto invalido!\n");

        } else {

        printf("Quantidade: ");

        if(scanf("%d", &quantidade) != 1) {

        printf("\nQuantidade invalida!\n");

        scanf("%c", &entrada);

        } else {

        valorVenda = 0;

        switch(produto) {

        case 1:
          valorVenda = quantidade * 8;
          chocolate = chocolate + quantidade;
        break;

        case 2:
           valorVenda = quantidade * 8;
           morango = morango + quantidade;
        break;

        case 3:
            valorVenda = quantidade * 7;
            baunilha = baunilha + quantidade;
        break;

        case 4:
            valorVenda = quantidade * 15;
            milkChocolate = milkChocolate + quantidade;
        break;

        case 5:
            valorVenda = quantidade * 15;
            milkMorango = milkMorango + quantidade;
        break;

        case 6:
            valorVenda = quantidade * 4;
            picoleUva = picoleUva + quantidade;
        break;

        case 7:
            valorVenda = quantidade * 4;
            picoleLimao = picoleLimao + quantidade;
        break;

        case 8:
            valorVenda = quantidade * 3;
            agua = agua + quantidade;
        break;

    }

        total = total + valorVenda;

          printf("\nVenda realizada com sucesso!\n");
          printf("Valor da venda: R$ %.2f\n", valorVenda);

        }
        }
        }

        break;

        case 3:

        printf("\n========= RELATORIO =========\n");

printf("Sorvete Chocolate: %d\n", chocolate);                 
printf("Sorvete Morango: %d\n", morango);
       
printf("Sorvete Baunilha: %d\n", baunilha);

printf("Milk Shake Chocolate: %d\n", milkChocolate);
printf("Milk Shake Morango: %d\n", milkMorango);

 printf("Picole de Uva: %d\n", picoleUva);
printf("Picole de Limao: %d\n", picoleLimao);

printf("Agua: %d\n", agua);

printf("\nTOTAL DO CAIXA: R$ %.2f\n", total);

      break;

      case 4:

         printf("\nProduto mais vendido:\n");

       if(chocolate > morango) {

         printf("Sorvete Chocolate lidera as vendas.\n");

       } else {

          printf("Sorvete Morango lidera as vendas.\n");

       }

         break;

          case 0:

            printf("\nEncerrando sistema...\n");

         break;

         default:

             printf("\nOpcao invalida!\n");

            }

        }

    } while(opcao != 0);

    return 0;
}