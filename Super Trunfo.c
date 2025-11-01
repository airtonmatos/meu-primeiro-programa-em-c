#include <stdio.h>
#include <string.h>

struct carta {
    char Estado;
    char Codigo[5];
    char Cidade[50];
    unsigned long int Populacao;
    float Area;
    float PIB;
    int Pontos_turisticos;
};

int main() {
    struct carta carta1, carta2;

    printf("Carta 1:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta1.Estado);

    printf("Codigo da carta(A01): ");
    scanf("%s", carta1.Codigo);
    getchar(); // limpa o \n do buffer

    printf("Nome da cidade: ");
    fgets(carta1.Cidade, sizeof(carta1.Cidade), stdin);
    carta1.Cidade[strcspn(carta1.Cidade, "\n")] = 0;

    float pop_temp1;
    printf("População em milhões: ");
    scanf("%f", &pop_temp1);
    carta1.Populacao = (unsigned long int)(pop_temp1 * 1000000); // converte para habitantes

    printf("Área(Km²): ");
    scanf("%f", &carta1.Area);

    printf("PIB(em bilhões): ");
    scanf("%f", &carta1.PIB);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.Pontos_turisticos);

    printf("\nCarta 2:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta2.Estado);

    printf("Codigo da carta(A01): ");
    scanf("%s", carta2.Codigo);
    getchar(); // limpa o \n do buffer

    printf("Nome da cidade: ");
    fgets(carta2.Cidade, sizeof(carta2.Cidade), stdin);
    carta2.Cidade[strcspn(carta2.Cidade, "\n")] = 0;

    float pop_temp2;
    printf("População em milhões: ");
    scanf("%f", &pop_temp2);
    carta2.Populacao = (unsigned long int)(pop_temp2 * 1000000); // converte para habitantes

    printf("Área(Km²): ");
    scanf("%f", &carta2.Area);

    printf("PIB(em bilhões): ");
    scanf("%f", &carta2.PIB);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.Pontos_turisticos);

    // Cálculos
    float densidade1 = carta1.Populacao / carta1.Area;
    float densidade2 = carta2.Populacao / carta2.Area;
    float pib_per_capita1 = carta1.PIB * 1000000000 / carta1.Populacao; // PIB em reais
    float pib_per_capita2 = carta2.PIB * 1000000000 / carta2.Populacao;
    float super_poder1 = (float)carta1.Populacao + carta1.Area + carta1.PIB + carta1.Pontos_turisticos + pib_per_capita1 + (1.0 / densidade1);
    float super_poder2 = (float)carta2.Populacao + carta2.Area + carta2.PIB + carta2.Pontos_turisticos + pib_per_capita2 + (1.0 / densidade2);



    // Exibição
    printf("\n=============================\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", carta1.Estado);
    printf("Código: %s\n", carta1.Codigo);
    printf("Nome da Cidade: %s\n", carta1.Cidade);
    printf("População: %.2f milhões\n", carta1.Populacao / 1000000.0);
    printf("Área: %.2f km²\n", carta1.Area);
    printf("PIB: %.2f bilhões de reais\n", carta1.PIB);
    printf("Número de Pontos Turísticos: %d\n", carta1.Pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);



    printf("\n=============================\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", carta2.Estado);
    printf("Código: %s\n", carta2.Codigo);
    printf("Nome da Cidade: %s\n", carta2.Cidade);
    printf("População: %.2f milhões\n", carta2.Populacao / 1000000.0);
    printf("Área: %.2f km²\n", carta2.Area);
    printf("PIB: %.2f bilhões de reais\n", carta2.PIB);
    printf("Número de Pontos Turísticos: %d\n", carta2.Pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

   // Comparações
    printf("\n=============================\n");
    printf("Comparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", carta1.Populacao > carta2.Populacao);
    printf("Área: Carta 1 venceu (%d)\n", carta1.Area > carta2.Area);
    printf("PIB: Carta 1 venceu (%d)\n", carta1.PIB > carta2.PIB);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", carta1.Pontos_turisticos > carta2.Pontos_turisticos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);






    return 0;
}
