#include <stdio.h>

main()
{

    int numero, selecao1=0, selecao2=0, selecao3=0, selecao4=0;
    

      
    while (numero > 0)
    {

        printf("Digite um valor: ");
        scanf("%d", &numero);

        if (numero >= 0 && numero <= 25)
        {
            selecao1++;
        }
        if (numero >= 26 && numero <= 50)
        {
            selecao2++;
        }
        if (numero >= 51 && numero <= 75)
        {
            selecao3++;
        }
        if (numero >= 76 && numero <= 100)
        {
            selecao4++;
        }
        
    }
    printf("Os seguintes intervalos:\n [0..25] eh %d\n [26..50] eh %d\n [51..75] eh %d\n [76..100] eh %d", selecao1, selecao2, selecao3, selecao4);
}