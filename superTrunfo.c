#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char pais1[50], pais2[50], atributo1[50], atributo2[50];
    int numeroDePontosTuristicos1, numeroDePontosTuristicos2, atributoEscolhido1, atributoEscolhido2, comparacao1, comparacao2, resultado1;
    float area1, PIB1, densidade1, pibPerCapita1, area2, PIB2, densidade2, pibPerCapita2;
    unsigned long long int populacao1, populacao2;

    //Input dos atributos
    printf("DADOS DA CARTA 1\nDigite o nome do país: \n");
    scanf("%s", &pais1);

    printf("Digite a quantidade da população: \n");
    scanf("%llu", &populacao1);

    printf("Digite a area da Cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &numeroDePontosTuristicos1);

    printf("DADOS DA CARTA 2\nDigite o nome do país: \n");
    scanf("%s", &pais2);

    printf("Digite a quantidade da população: \n");
    scanf("%llu", &populacao2);

    printf("Digite a area da Cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &numeroDePontosTuristicos2);

    //Calculo dos tributos secundários
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    pibPerCapita1 = (float) PIB1 / populacao1;
    pibPerCapita2 = (float) PIB2 / populacao2;


    //Escolha dos atributos que vão ser comparados
    printf(".......PRIMEIRO ATRIBUTO........\n ");
    printf("1. POPULAÇÃO\n ");
    printf("2. ÁREA\n ");
    printf("3. PIB PER CAPITA\n ");
    printf("4. NÚMERO DE PONTOS TURÍSTICOS\n ");
    printf("5. DENSIDADE DEMOGRÁFICA\n");

    printf("Escolha o primeiro atributo a ser comparado: ");
    scanf("%d", &atributoEscolhido1);

    printf(".......SEGUNDO ATRIBUTO........\n ");

    switch(atributoEscolhido1) {
        case 1:
            strcpy(atributo1,"POPULAÇÃO");
            comparacao1 = populacao1 > populacao2 ? 1 : 0 ;

            printf("1. ÁREA\n ");
            printf("2. PIB PER CAPITA\n ");
            printf("3. NÚMERO DE PONTOS TURÍSTICOS\n ");
            printf("4. DENSIDADE DEMOGRÁFICA\n");
            printf("Agora escolha o segundo atributo a ser comparado: \n");
            scanf("%d", &atributoEscolhido2);
            
            switch (atributoEscolhido2){
            case 1:
                strcpy(atributo2, "AREA");
                comparacao2 = area1 > area2 ? 1 : 0 ;
                break;
            case 2:
                strcpy(atributo2,"PIB PER CAPITA");
                comparacao2 = pibPerCapita1 > pibPerCapita2 ? 1 : 0 ;
                break;
            case 3:
                strcpy(atributo2,"NÚMERO DE PONTOS TURÍSTICOS");
                comparacao2 = numeroDePontosTuristicos1 > numeroDePontosTuristicos2 ? 1 : 0 ;
                break;
            case 4:
                strcpy(atributo2,"DENSIDADE DEMOGRÁFICA");
                comparacao2 = densidade1 < densidade2 ? 1 : 0 ;
                break;
            default:
                printf("Opção inválida.");
                break;
            }
            
            break;
        case 2:
            strcpy(atributo1,"ÁREA");
            comparacao1 = area1 > area2 ? 1 : 0 ;

            printf("1. POPULAÇÃO\n ");
            printf("2. PIB PER CAPITA\n ");
            printf("3. NÚMERO DE PONTOS TURÍSTICOS\n ");
            printf("4. DENSIDADE DEMOGRÁFICA\n");
            printf("Agora escolha o segundo atributo a ser comparado: \n");
            scanf("%d", &atributoEscolhido2);
            
            switch (atributoEscolhido2){
            case 1:
                strcpy(atributo2,"POPULAÇÃO");
                comparacao2 = populacao1 > populacao2 ? 1 : 0 ;
                break;
            case 2:
                strcpy(atributo2,"PIB PER CAPITA");
                comparacao2 = pibPerCapita1 > pibPerCapita2 ? 1 : 0 ;
                break;
            case 3:
                strcpy(atributo2,"NÚMERO DE PONTOS TURÍSTICOS");
                comparacao2 = numeroDePontosTuristicos1 > numeroDePontosTuristicos2 ? 1 : 0 ;
                break;
            case 4:
                strcpy(atributo2,"DENSIDADE DEMOGRÁFICA");
                comparacao2 = densidade1 < densidade2 ? 1 : 0 ;
                break;
            default:
                printf("Opção inválida.");
                break;
            }
            
            break;
        case 3:
            strcpy(atributo1,"PIB PER CAPITA");
            comparacao1 = pibPerCapita1 > pibPerCapita2 ? 1 : 0 ;

            printf("1. POPULAÇÃO\n ");
            printf("2. ÁREA\n ");
            printf("3. NÚMERO DE PONTOS TURÍSTICOS\n ");
            printf("4. DENSIDADE DEMOGRÁFICA\n");
            printf("Agora escolha o segundo atributo a ser comparado: \n");
            scanf("%d", &atributoEscolhido2);
            
            switch (atributoEscolhido2){
            case 1:
                strcpy(atributo2,"POPULAÇÃO");
                comparacao2 = populacao1 > populacao2 ? 1 : 0 ;
                break;
            case 2:
                strcpy(atributo2,"ÁREA");
                comparacao2 = area1 > area2 ? 1 : 0 ;
                break;
            case 3:
                strcpy(atributo2,"NÚMERO DE PONTOS TURÍSTICOS");
                comparacao2 = numeroDePontosTuristicos1 > numeroDePontosTuristicos2 ? 1 : 0 ;
                break;
            case 4:
                strcpy(atributo2,"DENSIDADE DEMOGRÁFICA");
                comparacao2 = densidade1 < densidade2 ? 1 : 0 ;
                break;
            default:
                printf("Opção inválida.");
                break;
            }

            break;
        case 4:
            strcpy(atributo1,"NÚMERO DE PONTOS TURÍSTICOS");
            comparacao1 = numeroDePontosTuristicos1 > numeroDePontosTuristicos2 ? 1 : 0 ;

            printf("1. POPULAÇÃO\n ");
            printf("2. ÁREA\n ");
            printf("3. PIB PER CAPITA\n ");
            printf("4. DENSIDADE DEMOGRÁFICA\n");
            printf("Agora escolha o segundo atributo a ser comparado: \n");
            scanf("%d", &atributoEscolhido2);
            
            switch (atributoEscolhido2){
            case 1:
                strcpy(atributo2,"POPULAÇÃO");
                comparacao2 = populacao1 > populacao2 ? 1 : 0 ;
                break;
            case 2:
                strcpy(atributo2,"ÁREA");
                comparacao2 = area1 > area2 ? 1 : 0 ;
                break;
            case 3:
                strcpy(atributo2,"PIB PER CAPITA");
                comparacao2 = pibPerCapita1 > pibPerCapita2 ? 1 : 0 ;
                break;
            case 4:
                strcpy(atributo2,"DENSIDADE DEMOGRÁFICA");
                comparacao2 = densidade1 < densidade2 ? 1 : 0 ;
                break;
            default:
                printf("Opção inválida.");
                break;
            }

            break;
        case 5:
            strcpy(atributo1,"DENSIDADE DEMOGRÁFICA");
            comparacao1 = densidade1 < densidade2 ? 1 : 0 ;

            printf("1. POPULAÇÃO\n ");
            printf("2. ÁREA\n ");
            printf("3. PIB PER CAPITA\n ");
            printf("4. DENSIDADE DEMOGRÁFICA\n");
            printf("Agora escolha o segundo atributo a ser comparado:");
            scanf("%d", &atributoEscolhido2);
            
            switch (atributoEscolhido2){
            case 1:
                strcpy(atributo2,"POPULAÇÃO");
                comparacao2 = populacao1 > populacao2 ? 1 : 0 ;
                break;
            case 2:
                strcpy(atributo2,"ÁREA");
                comparacao2 = area1 > area2 ? 1 : 0 ;
                break;
            case 3:
                strcpy(atributo2 ,"PIB PER CAPITA");
                comparacao2 = pibPerCapita1 > pibPerCapita2 ? 1 : 0 ;
                break;
            case 4:
                strcpy(atributo2,"NÚMERO DE PONTOS TURÍSTICOS");
                comparacao2 = numeroDePontosTuristicos1 < numeroDePontosTuristicos2 ? 1 : 0 ;
                break;
            default:
                printf("Opção inválida.");
                break;
            }

            break;
        default:
            printf("Opção inválida.");
    }


    //Imprimindo os atributos das cartas
    printf("\n......................... \n");
    printf("CARTA: 1 \n País: %s \n ", pais1);
    printf("População: %llu\n ", populacao1);
    printf("Área: %.2f km²\n ", area1);
    printf("Número de Pontos Turísticos: %d\n ", numeroDePontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n " , densidade1);
    printf("PIB per Capita: %.2f reais\n ", pibPerCapita1);

    printf("......................... \n");
    printf("CARTA: 2 \n País: %s \n ", pais2);
    printf("População: %llu\n ", populacao2);
    printf("Área: %.2f km²\n ", area2);
    printf("Número de Pontos Turísticos: %d\n ", numeroDePontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n " , densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);


    //Imprimindo o resultado
    printf("......................... \n");
    printf("Atributos escolhidos para comparação: %s & %s\n", atributo1, atributo2);

    printf("RESULTADO FINAL:\n ");

    resultado1 = comparacao1 + comparacao2;

    if(resultado1 == 0) {
        printf("..... CARTA 2 GANHOU!!! .....");
    }else if(resultado1 == 1){
        printf("..... EMPATE!!! .....");
    }else{
        printf("..... CARTA 1 GANHOU!!! .....");
    }

}