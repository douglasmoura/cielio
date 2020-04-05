#include <stdio.h>

/* Montar um programa que receba 3 números e apresente o menu de opções ao usuário:
Como deseja imprimir os números?
1 – Ordem crescente
2 – Ordem decrescente
3 – Ordem de entrada dos números
Resposta: 
O programa deverá imprimir os números de acordo com a opção escolhida pelo usuário.
Obs.: Fazer com switch..case */

main()
{

	int op, n1, n2, n3;
	int primeiro, segundo, terceiro;

	printf("Digite o primeiro, segundo e o terceiro numero :");
	scanf("%d %d %d", &n1, &n2, &n3);
	printf("Escolha a forma de ordenacao\n1- Ordem crescente\n2- Ordem decrescente\n3- Ordem de entrada dos numeros\n");
	scanf("%d", &op);

	switch (op)
	{

	case 1:
	// verefica-se n1 é menor igual que n2 e n3, para primeiro.
		if (n1 <= n2 && n1 <= n3)
		{
			primeiro = n1;
		}
	//na primeira condição se n1 for maior o igual que n2 e menor o igual que n3, ele entra como segundo. E o ou botei para caso contrário, para ele também entrar como segundo.	
		if ((n1 >= n2 && n1 <= n3) || (n1 >= n3 && n1 <= n2))
		{
			segundo = n1;
		}
	//e se ele for maior igual os, ele entra como terceiro. 
		if (n1 >= n2 && n1 >= n3)
		{
			terceiro = n1;
		}

		if (n2 <= n1 && n2 <= n3)
		{
			primeiro = n2;
		}
		if ((n2 >= n1 && n2 <= n3) || (n2 >= n3 && n2 <= n1))
		{
			segundo = n2;
		}

		if (n2 >= n1 && n2 >= n3)
		{
			terceiro = n2;
		}
		if (n3 <= n1 && n3 <= n2)
		{
			primeiro = n3;
		}
		if ((n3 >= n1 && n3 <= n2) || (n3 >= n2 && n3 <= n1))
		{
			segundo = n3;
		}
		if (n3 >= n2 && n3 >= n1)
		{
			terceiro = n3;
		}
		//Dessa forma, imprime na ordem crescente.
		
		printf("Ordem crescente\nPrimeiro : %d\nSegundo  : %d\nTerceiro : %d\n", primeiro, segundo, terceiro);
		break;
		//Na ordem decrescente, utilizei a mesma base, mas ao contrário.
	case 2:
	    if (n1 <= n2 && n1 <= n3)
		{
			primeiro = n1;
		}
		if ((n1 >= n2 && n1 <= n3) || (n1 >= n3 && n1 <= n2))
		{
			segundo = n1;
		}
		if (n1 >= n2 && n1 >= n3)
		{
			terceiro = n1;
		}

		if (n2 <= n1 && n2 <= n3)
		{
			primeiro = n2;
		}
		
		if ((n2 >= n1 && n2 <= n3) || (n2 >= n3 && n2 <= n1))
		{
			segundo = n2;
		}

		if (n2 >= n1 && n2 >= n3)
		{
			terceiro = n2;
		}
		if (n3 <= n1 && n3 <= n2)
		{
			primeiro = n3;
		}
		if ((n3 >= n1 && n3 <= n2) || (n3 >= n2 && n3 <= n1))
		{
			segundo = n3;
		}
		if (n3 >= n2 && n3 >= n1)
		{
			terceiro = n3;
		}
		printf("Ordem decrescente\nPrimeiro : %d\nSegundo  : %d\nTerceiro : %d\n", terceiro, segundo, primeiro);
		break;

	case 3:

		printf("Ordem de entrada\nPrimeiro : %d\nSegundo  : %d\nTerceiro : %d\n", n1, n2, n3);
		break;
	}
}