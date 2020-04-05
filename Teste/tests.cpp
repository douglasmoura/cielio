#include <stdio.h>



main()
{

	int op, n122, n2, n3;
	int primeiro, segundo, terceiro;

	printf("Digite o primeiro, segundo e o terceiro numero :");
	scanf("%d %d %d", &n122, &n2, &n3);
	printf("Escolha a forma de ordenacao\n1- Ordem crescente\n2- Ordem decrescente\n3- Ordem de entrada dos numeros\n");
	scanf("%d", &op);

	switch (op)
	{

	case 1:
	// verefica-se n1 é menor igual que n2 e n3, para primeiro.
		if (n122 <= n2 && n122 <= n3)
		{
			primeiro = n122;
		}
	//na primeira condição se n1 for maior o igual que n2 e menor o igual que n3, ele entra como segundo. E o ou botei para caso contrário, para ele também entrar como segundo.	
		if ((n122 >= n2 && n122 <= n3) || (n122 >= n3 && n122 <= n2))
		{
			segundo = n122;
		}
	//e se ele for maior igual os, ele entra como terceiro. 
		if (n122 >= n2 && n122 >= n3)
		{
			terceiro = n122;
		}

		if (n2 <= n122 && n2 <= n3)
		{
			primeiro = n2;
		}
		if ((n2 >= n122 && n2 <= n3) || (n2 >= n3 && n2 <= n122))
		{
			segundo = n2;
		}

		if (n2 >= n122 && n2 >= n3)
		{
			terceiro = n2;
		}
		if (n3 <= n122 && n3 <= n2)
		{
			primeiro = n3;
		}
		if ((n3 >= n122 && n3 <= n2) || (n3 >= n2 && n3 <= n122))
		{
			segundo = n3;
		}
		if (n3 >= n2 && n3 >= n122)
		{
			terceiro = n3;
		}
		//Dessa forma, imprime na ordem crescente.
		
		printf("Ordem crescente\nPrimeiro : %d\nSegundo  : %d\nTerceiro : %d\n", primeiro, segundo, terceiro);
		break;
		//Na ordem decrescente, utilizei a mesma base, mas ao contrário.
	case 2:
	    if (n122 <= n2 && n122 <= n3)
		{
			primeiro = n122;
		}
		if ((n122 >= n2 && n122 <= n3) || (n122 >= n3 && n122 <= n2))
		{
			segundo = n122;
		}
		if (n122 >= n2 && n122 >= n3)
		{
			terceiro = n122;
		}

		if (n2 <= n122 && n2 <= n3)
		{
			primeiro = n2;
		}
		
		if ((n2 >= n122 && n2 <= n3) || (n2 >= n3 && n2 <= n122))
		{
			segundo = n2;
		}

		if (n2 >= n122 && n2 >= n3)
		{
			terceiro = n2;
		}
		if (n3 <= n122 && n3 <= n2)
		{
			primeiro = n3;
		}
		if ((n3 >= n122 && n3 <= n2) || (n3 >= n2 && n3 <= n122))
		{
			segundo = n3;
		}
		if (n3 >= n2 && n3 >= n122)
		{
			terceiro = n3;
		}
		printf("Ordem decrescente\nPrimeiro : %d\nSegundo  : %d\nTerceiro : %d\n", terceiro, segundo, primeiro);
		break;

	case 3:

		printf("Ordem de entrada\nPrimeiro : %d\nSegundo  : %d\nTerceiro : %d\n", n122, n2, n3);
		break;
	}
}