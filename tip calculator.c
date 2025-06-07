#include <stdio.h>
/*This code receives the value of the user's bill (the value of a restaurant bill), asks if he wants to pay the service charge and if he wants to offer a tip.
If he wants to pay the fee, it will be added to the total amount. If he wants to pay only the tip, a text will appear on the screen asking for the amount of the tip, and then adding the amount to the total amount.
If he wanted to pay both, both will happen. If he didn't want to pay anything, the total amount will be the amount of consumption without any additions.
The code is in Portuguese*/

void limpar_input()
{
    int resto;
    for (resto = getchar(); resto != '\n' && resto != EOF; resto = getchar())
    {
    }
    return;
}
float ler_consumo()
{
    int iconsumo = 0;
    float consumo;
    while (!iconsumo)
    {
        printf("Informe o valor de consumo a seguir: ");
        if (scanf(" %f", &consumo) != 1 || consumo < 0) {
            printf("Entrada inválida! Por favor, digite um número valido.\n");
            limpar_input();
        }
        else{
            iconsumo = 1;
        }
    }
    return consumo;
}

char ler_sim_ou_nao()
{
    char entrada;
    while (scanf(" %c", &entrada) != 1 || (entrada != 's' && entrada != 'n'))
    {
        printf("Valor informado é invalido! Por favor, preencha da maneira correta.");
        printf("\nSim[s] ou Não[n]: ");
        limpar_input();
    }
    return entrada;
}

int perguntar_servico()
{
    char opcao1;

    printf("\nGostaria de pagar a taxa de serviço? Sim[s] ou Não[n]: ");
    opcao1 = ler_sim_ou_nao();

    return opcao1;
}

int perguntar_gorjeta()
{
    char opcao2;

    printf("\nGostaria de pagar uma gorjeta? Sim[s] ou Não[n]: ");
    opcao2 = ler_sim_ou_nao();

    return opcao2;
}

float ler_gorjeta()
{
    int gorjeta_finalizada_flag = 0;
    float gorjeta = 0.0f;
    while (!gorjeta_finalizada_flag)
    {
        printf("\nInforme o valor da gorjeta: ");
        if (scanf(" %f", &gorjeta) != 1 && gorjeta <= 0)
        {
            printf("Valor de gorjeta inválido. Tente novamente.\n");
            limpar_input();
        }
        else
        {
            gorjeta_finalizada_flag = 1;
        }
    }

    return gorjeta;
}

int main()
{
    float consumo, taxa, gorjeta, total;
    char opcao_servico, opcao_gorjeta;

    consumo = ler_consumo();
    taxa = consumo * 0.1;

    opcao_servico = perguntar_servico();

    opcao_gorjeta = perguntar_gorjeta();

    if (opcao_gorjeta == 's')
    {
        gorjeta = ler_gorjeta();
    }
    else
    {
        gorjeta = 0;
    }

    switch (opcao_servico)
    {
    case 'n':
        total = consumo + gorjeta;
        printf("\nSua conta ficou no valor de %.2f\n", total);
        break;
    case 's':
        total = consumo + taxa + gorjeta;
        printf("\nSua conta ficou no valor de %.2f\n", total);
        break;
    default:
        printf("Operação invalida! Peço que preencha os dados da forma correta.");
        break;
    }

    return 0;
}
