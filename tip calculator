#include <stdio.h>
/*This code receives the value of the user's bill (the value of a restaurant bill), asks if he wants to pay the service charge and if he wants to offer a tip.
If he wants to pay the fee, it will be added to the total amount. If he wants to pay only the tip, a text will appear on the screen asking for the amount of the tip, and then adding the amount to the total amount.
If he wanted to pay both, both will happen. If he didn't want to pay anything, the total amount will be the amount of consumption without any additions.
The code is in Portuguese*/

int main() {

int iconsumo, iopcao1, iopcao2, Lconsumo, Lopcao1, Lopcao2, scanf_retorno;
float consumo, taxa, gorjeta, total;
char opcao1, opcao2;

for(iconsumo = 0; !iconsumo;){
    printf("Informe o valor de consumo a seguir: ");
        if (scanf(" %f", &consumo) != 1 || consumo < 0) {
            printf("Entrada inválida! Por favor, digite um número valido.\n");
            for (Lconsumo = getchar(); Lconsumo != '\n' && Lconsumo != EOF; Lconsumo = getchar()) {
        }
        }
        else{
            iconsumo++;
        }
        }
    
    
        taxa = consumo * 0.1;
        
for(iopcao1 = 0; !iopcao1;){    
    printf("\nGostaria de pagar a taxa de serviço? Sim[s] ou Não[n]: ");
        if(scanf(" %c", &opcao1) != 1 || opcao1 != 's' && opcao1 != 'n'){
            printf("Valor informado é invalido! Por favor, preencha da maneira correta.");
            for (Lopcao1 = getchar(); Lopcao1 != '\n' && Lopcao1 != EOF; Lopcao1 = getchar()) {
        }
        }
        else{
            iopcao1++;
        }
        
}
for(iopcao2 = 0; !iopcao2;){
    printf("\nGostaria de pagar uma gorjeta? Sim[s] ou Não[n]: ");
        if(scanf(" %c", &opcao2) != 1 || opcao2 != 's' && opcao2 != 'n'){
            printf("Valor informado é invalido! Por favor, preencha da maneira correta.");
            for(Lopcao2 = getchar(); Lopcao2 != '\n' && Lopcao2 != EOF; Lopcao2 = getchar()){
        }
        }
        else{
            iopcao2++;
        }
    }

    switch(opcao1){
        case 'n':
        {
            int gorjeta_finalizada_flag = 0;
            gorjeta = 0.0f;
            
            for( ; !gorjeta_finalizada_flag;){
            ((opcao2 == 'n') ?
                    (gorjeta_finalizada_flag = 1) 
                    :
                    (printf("\nInforme o valor da gorjeta: "),
                    (scanf(" %f", &gorjeta)) == 1 && gorjeta >= 0 ?
                        (gorjeta_finalizada_flag = 1)
                        :
                        (printf("Valor de gorjeta inválido. Tente novamente.\n"),
                        (scanf_retorno != 1) ? 
                        ({int c; for(c = getchar(); c != '\n' && c != EOF; c = getchar()); 0;}) : 0)));
            }
            total = consumo + gorjeta;
            printf("\nSua conta ficou no valor de %.2f\n", total);
            break;
        }
        case 's':
        {
            int gorjeta_finalizada_flag = 0;
            gorjeta = 0.0f;

            for ( ; !gorjeta_finalizada_flag; ) {
                (void)((opcao2 == 'n') ?
                    (gorjeta_finalizada_flag = 1) 
                    :
                    (printf("\nInforme o valor da gorjeta: "),
                    (scanf_retorno = scanf(" %f", &gorjeta)) == 1 && gorjeta >= 0 ?
                        (gorjeta_finalizada_flag = 1)
                        :
                        (printf("Valor de gorjeta inválido. Tente novamente.\n"),
                        (scanf_retorno != 1) ? 
                        ({int c; for(c = getchar(); c != '\n' && c != EOF; c = getchar()); 0;}) : 0)
                    )
                );
            }

                total = (opcao1 == 's') ? (consumo + taxa + gorjeta) : (consumo + gorjeta);
                printf("\nSua conta ficou no valor de %.2f\n", total);
                break;
        }
        default:
            printf("Operação invalida! Peço que preencha os dados da forma correta.");
            break;
}

return 0;
}
