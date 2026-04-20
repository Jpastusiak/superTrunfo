#include <stdio.h>
#include <stdlib.h>

int main () {
    char pais1[50], pais2[50];
    int numeroDePontosTuristicos1, numeroDePontosTuristicos2, atributoEscolhido;
    float area1, PIB1, densidade1, pibPerCapita1, area2, PIB2, densidade2, pibPerCapita2;
    unsigned long long int populacao1, populacao2;


    printf("DADOS DA CARTA 1\nDigite a letra do Estado: \n");
    scanf("%s", &pais1);

    printf("Digite a quantidade da população: \n");
    scanf("%llu", &populacao1);

    printf("Digite a area da Cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &numeroDePontosTuristicos1);

    printf("DADOS DA CARTA 2\nDigite a letra do Estado: \n");
    scanf("%s", &pais2);

    printf("Digite a quantidade da população: \n");
    scanf("%llu", &populacao2);

    printf("Digite a area da Cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &numeroDePontosTuristicos2);

    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    pibPerCapita1 = (float) PIB1 / populacao1;
    pibPerCapita2 = (float) PIB2 / populacao2;

    printf(".......ATRIBUTOS........\n ");
    printf("1. POPULAÇÃO\n ");
    printf("2. ÁREA\n ");
    printf("3. PIB PER CAPITA\n ");
    printf("4. NÚMERO DE PONTOS TURÍSTICOS\n ");
    printf("5. DENSIDADE DEMOGRÁFICA\n");
    printf("Escolha o atributo a ser comparado: \n");
    scanf("%d", &atributoEscolhido);


    printf("......................... \n");
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
    printf("PIB per Capita: %.2f reais\n ", pibPerCapita2);


    printf("......................... \n");
    printf("RESULTADO FINAL:\n ");

    switch(atributoEscolhido) {
        case 1:
            printf("Atributo escolhido para comparação: POPULAÇÃO\n");
            if(populacao1 > populacao2){
                printf("..... CARTA 1 GANHOU!!! .....");
            }else if(populacao1 == populacao2){
                printf("..... EMPATE!!! .....");
            }else{
                printf("..... CARTA 2 GANHOU!!! .....");
            }
        break;
        case 2:
            printf("Atributo escolhido para comparação: ÁREA\n");
            if(area1 > area2){
                printf("..... CARTA 1 GANHOU!!! .....");
            }else if(area1 == area2){
                printf("..... EMPATE!!! .....");
            }else{
                printf("..... CARTA 2 GANHOU!!! .....");
            }
        break;
        case 3:
            printf("Atributo escolhido para comparação: PIB PER CAPITA\n");
            if(pibPerCapita1 > pibPerCapita2){
                printf("..... CARTA 1 GANHOU!!! .....");
            }else if(pibPerCapita1 == pibPerCapita2){
                printf("..... EMPATE!!! .....");
            }else{
                printf("..... CARTA 2 GANHOU!!! .....");
            }
        break;
        case 4:
            printf("Atributo escolhido para comparação: NÚMERO DE PONTOS TURÍSTICOS\n");
            if(numeroDePontosTuristicos1 > numeroDePontosTuristicos2){
                printf("..... CARTA 1 GANHOU!!! .....");
            }else if(numeroDePontosTuristicos1 == numeroDePontosTuristicos2){
                printf("..... EMPATE!!! .....");
            }else{
                printf("..... CARTA 2 GANHOU!!! .....");
            }
        break;
        case 5:
            printf("Atributo escolhido para comparação: DENSIDADE DEMOGRÁFICA\n");
            if(densidade1 < densidade2){
                printf("..... CARTA 1 GANHOU!!! .....");
            }else if(densidade1 == densidade2){
                printf("..... EMPATE!!! .....");
            }else{
                printf("..... CARTA 2 GANHOU!!! .....");
            }
        break;
        default:
            printf("Opção inválida.");
    }

}