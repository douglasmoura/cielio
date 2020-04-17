
#include <stdio.h>
main()
{
    float salario, totalSalario, totalMedia, porcentagem;
    int funcionario = 0;
    int salarioMinimo = 0;
    int salarioMinimo3 = 0;

    while (salario != 0)
    {
        printf("Digite 0 (zero) para sair.\nInforme seu salario: \n");
        scanf("%f", &salario);

        if (salario >= 1045)
        {
            totalSalario = totalSalario + salario;

            if (salario == 1045) // salario minimo e 1.045 reais.
            {
                funcionario++;
                salarioMinimo++;
            }
            if (salario >= 3135) // 3 salarios minimos sao 3.135 reais.
            {
                funcionario++;
                salarioMinimo3++;
            }
        }
        else
        {
            printf("Valor invalido, digite um salario minimo valido(R$ 1.045,00).\n");
        }
    }

    if (salarioMinimo3 != 0)
    {
        //Usei (float) para converter o inteiro para float.
        porcentagem = ((float)salarioMinimo3 / funcionario) * 100;
    }

    totalMedia = totalSalario / funcionario;

    printf("\nA quantidade de funcionarios que recebem um salario minimo: %d.\n", salarioMinimo);
    printf("A porcentagem de funcionarios que recebem mais do que 3 salarios minimos: %.0f%%.\n", porcentagem);
    printf("A media salarial: R$ %.2f.", totalMedia);
}
