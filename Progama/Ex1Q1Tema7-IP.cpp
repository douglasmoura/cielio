#include <stdio.h>

main()
{

   int idade, idoso=0, eleitor=0, dirigir=0;

   while (idade != 0)
   {
      
      printf("Digite 0 (zero) para sair.\nInforme sua idade: \n");
      scanf("%d", &idade);
      

      if (idade >= 65)
      {
      idoso++;
      }
      if (idade >= 16)
      {
      eleitor++; 
      }
      if (idade >= 18)
      {
      dirigir++;
      }
   
   }
   printf("\n %d Quantidade de idosos\n %d Quantidade de eleitores\n %d Quantidade de pessoas aptas a dirigir", idoso, eleitor, dirigir);
}