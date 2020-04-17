#include <stdio.h>
#include <stdlib.h>

int sexo, corOlhos, corCabelos;

void selecionarSexo()
{
    printf("Selecione:\n");
    printf("1-Homem.\n");
    printf("2-Mulher.\n");
    scanf("%d", &sexo);
    system("cls");
    if (sexo < 1 || sexo > 2)
    {
        printf("\nOpcao invalida.\n");
        return selecionarSexo();
    }
}
void selecionarCorOlhos()
{
    printf("Selecione:\n");
    printf("1-Olhos azuis.\n");
    printf("2-Olhos verdes.\n");
    printf("3-Olhos castanhos.\n");
    scanf("%d", &corOlhos);
    system("cls");
    if (corOlhos < 1 || corOlhos > 3)
    {
        printf("\nOpcao invalida.\n");
        return selecionarCorOlhos();
    }
}
void selecionarCorCabelos()
{
    printf("Selecione:\n");
    printf("1-Cabelos louros.\n");
    printf("2-Cabelos castanhos.\n");
    printf("3-Cabelos pretos.\n");
    scanf("%d", &corCabelos);
    system("cls");
    if (corCabelos < 1 || corCabelos > 3)
    {
        printf("\nOpcao invalida.\n");
        return selecionarCorCabelos();
    }
}

main()
{

    int idade;
    int maiorIdade = 0;
    int contMulher = 0;
    int contBeleza = 0;

    while (idade != -1)
    {

        selecionarSexo();

        selecionarCorOlhos();

        selecionarCorCabelos();

        printf("informe a idade:\n");
        scanf("%d", &idade);
        system("cls");

        if (idade > maiorIdade)
        {
            maiorIdade = idade;
        }
        if (idade >= 18 && idade <= 35 && sexo == 2)
        {
            contMulher++;
        }
        if (corOlhos == 2 && corCabelos == 1)
        {
            contBeleza++;
        }
        printf("Escolha:\n");
        printf("Deseja continuar? digite um numero diferente de -1.\n");
        printf("Deseja sair? digite -1.\n");
        scanf("%d", &idade);
        system("cls");
    }

    printf("A maior idade dos habitantes eh: %d\n", maiorIdade);
    printf("A quantidade de individuos do sexo feminino cuja idade esta entre 18 e 35 anos eh: %d\n", contMulher);
    printf("A quantidade de individuos que tenham olhos verdes e cabelos louros eh: %d\n", contBeleza);
}
