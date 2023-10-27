#include <stdio.h>
#include <stdlib.h>
#define texto ("Seja Bem Vindo!\n")
#define texto2 ("Aqui temos o nosso cardapio!\n")

int lanches()
{
    int oplanches;
    float precos;
    do
    {
        printf("1 - x_salada - 5.50 R$ \n");
        printf("2 - x_bacon - 7.25 R$ \n");
        printf("3 - x_tudo - 10.30 R$ \n");
        printf("4 - x_egg - 7.00 R$ \n");
        printf("5 - Sair \n");
        printf("Digite a opcao desejada: \n");
        scanf("%d", &oplanches);
        switch (oplanches)
        {
        case 1:
            printf("Voce adicionou o x_salada!\n");
            precos += 5.50;
            break;
        case 2:
            printf("Voce adicionou x_bacon!\n");
            precos += 7.25;
            break;
        case 3:
            printf("Voce adicionou x_tudo!\n");
            precos += 10.30;
            break;
        case 4:
            printf("Voce adicionou x_egg!\n");
            precos += 7.00;
            break;
        case 5:
            printf("Saindo do menu de lanches.\n");
            break;
        default:
            printf("Valor incorreto, tente novamente\n");
        }
    } while (oplanches != 5);
    return oplanches;
}

int bebidas()
{
    int opbebidas;
    float preco = 0.0;
    do
    {
        printf("1 - cerveja - 4.50 R$ \n");
        printf("2 - refrigerante - 6.00 R$ \n");
        printf("3 - Sair \n");
        printf("Digite a opcao desejada: \n");
        scanf("%d", &opbebidas);
        switch (opbebidas)
        {
        case 1:
            printf("Voce adicionou a cerveja!\n");
            preco += 4.50;
            break;
        case 2:
            printf("Voce adicionou refrigerante!\n");
            preco += 6.00;
            break;
        case 3:
            printf("Saindo do menu de bebidas.\n");
            break;
        default:
            printf("Valor incorreto, tente novamente\n");
        }
    } while (opbebidas != 3);
    return opbebidas;
}

float valor_total(float precos, float preco)
{
    float total = precos + preco;
    return total;
}

int main()
{
    int opcoes, oplanches, opbebidas;
    printf(texto);
    printf(texto2);
    do
    {
        printf("1 - Lanches\n");
        printf("2 - Bebidas\n");
        printf("3 - valor total\n");
        printf("Digite a opcao desejada:");
        scanf("%d", &opcoes);

        switch (opcoes)
        {
        case 1:
            oplanches += lanches();
            break;
        case 2:
            opbebidas += bebidas();
            break;
        case 3:
            printf("O valor total e: %.2f\n", valor_total(oplanches, opbebidas));
            break;
        default:
            printf("Valor incorreto, tente novamente");
        }
    } while (opcoes != 3);

    system("pause");
    
    return 0;
}