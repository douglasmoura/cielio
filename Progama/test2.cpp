#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
//cieli doeu  cu e sou ggaayy
void Exercicio1();
void Exercicio2();
void TrocarOpcao();
void Menu_ListaExercicios();
int Interface_DataExercicios();
int Menu_DataExercicios();
int Interface_ListaExercicios();
int Lista_Exercicios();

int g_MenuOpcao, g_DataExercicios, g_EscolhaExercicios;
main()
{

	//DEFININDO ACEITAÇÃO DE CARACETERES ESPCIAIS COMO "~" "Ç,ACENTUAÇÃO E OUTROS
	setlocale(LC_ALL, "Portuguese");

	//Primeiro menu, escolhendo o dia que foi passado os exercícios
	g_DataExercicios = Interface_DataExercicios();

	//Verificação se encerra ou continua no programa
	Menu_DataExercicios();

	// Escolhendo os exercícios
	Menu_ListaExercicios();

	printf("\nPrograma Encerrado com sucesso! \n");
}

//Verificação se encerra ou continua no programa
int Menu_DataExercicios()
{
	if (g_DataExercicios == 1)
	{
		//Segundo menu, escolhendo o exercício em questão
		g_MenuOpcao = Interface_ListaExercicios();
		Lista_Exercicios();
	}
	else if (g_DataExercicios == 2)
	{

		return g_EscolhaExercicios;
	}
}
void Menu_ListaExercicios()
{
	do
	{
		switch (g_EscolhaExercicios)
		{
		case 1:
		{
			Exercicio1();

			break;
		}
		case 2:
		{
			Exercicio2();
			break;
		}

		case 666:
		{
			printf("Opção inválida, por favor escolha uma das opção listadas\n");
			g_EscolhaExercicios = 0;
			g_DataExercicios = Interface_DataExercicios();
			g_EscolhaExercicios = Menu_DataExercicios();

			break;
		}
		}

	} while (g_EscolhaExercicios > 0);
}

//Primeiro menu, lendo o dia que foi passado os exercícios
int Interface_DataExercicios()
{
	int g_DataExercicios;

	printf("######################\n");
	printf("###### Deseja ? ######\n");
	printf("######################\n");
	printf("##### 1 -> Entrar ####\n");
	printf("##### 2 ->  Sair  ####\n");
	printf("######################\n");
	scanf("%d", &g_DataExercicios);
	system("cls");

	return g_DataExercicios;
}
//Segundo menu, lendo exercício quando entrar
int Interface_ListaExercicios()
{
	printf("Selecione o Exercício\n");
	printf("1- Uma empresa quer verificar se um empregado está qualificado para a aposentadoria ou não.");
	printf("\n2- O salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa.");
	scanf("%d", &g_MenuOpcao);
	system("cls");

	return g_MenuOpcao;
}

//Definindo em qual Exercício entrar
int Lista_Exercicios()
{

	if ((g_MenuOpcao == 1) && (g_DataExercicios == 1))
	{
		g_EscolhaExercicios = 1;
	}
	else if ((g_MenuOpcao == 2) && (g_DataExercicios == 1))
	{
		g_EscolhaExercicios = 2;
		system("cls");
		printf("Opção inválida, por favor escolha uma das opção listadas\n");
		g_MenuOpcao = Interface_ListaExercicios();
		g_EscolhaExercicios = g_MenuOpcao;
	}

	return g_EscolhaExercicios;
}

//TROCANDO DE OPÇÃO APÓS TERMINAR O EXERCÍCIO
void TrocarOpcao()
{
	int TrocarOpcao;
	printf("######################\n");
	printf("#Trocar de Exercicio?#\n");
	printf("######################\n");
	printf("###### 1 -> Sim ######\n");
	printf("###### 2 -> Não ######\n");
	printf("######################\n");
	scanf("%d", &TrocarOpcao);

	if (TrocarOpcao == 1)
	{
		system("cls");
		g_MenuOpcao = Interface_ListaExercicios();
		g_EscolhaExercicios = g_MenuOpcao;
	}
	else if (TrocarOpcao == 2)
	{
		g_EscolhaExercicios = g_MenuOpcao;
	}
	else if (TrocarOpcao > 2)
	{
		system("cls");
		printf("Opção inválida, por favor escolha uma das opção listadas\n");
		g_MenuOpcao = Interface_ListaExercicios();
		g_EscolhaExercicios = g_MenuOpcao;
	}
	else
	{

		system("cls");
		printf("Opção inválida, por favor escolha uma das opção listadas\n");
		g_MenuOpcao = Interface_ListaExercicios();
		g_EscolhaExercicios = g_MenuOpcao;
	}

	printf("\033[2J");
}
void Exercicio1()
{

#include <stdio.h>

	/*(vale 2 pontos) Uma empresa quer verificar se um empregado está qualificado para a aposentadoria ou não. Para estar em condições,
um dos seguintes requisitos deve ser satisfeito: - Ter no mínimo 65 anos de idade.  - Ter trabalhado no mínimo 30 anos.  - Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos.  
Com base nas informações acima, faça um programa que leia: o ano atual, o ano de seu nascimento e o ano de seu ingresso na empresa.  
O programa deverá escrever : - A idade do funcionário; - O tempo de trabalho do empregado; - A mensagem 'Apto para aposentadoria' ou 'Não Apto para aposentadoria'.*/

	int anoAtual, anoNascimento, anoEmpresa, idade, tempoTrabalhado;

	printf("Digite o ano atual : ");
	scanf("%d", &anoAtual);

	printf("Digite o de nascimento : ");
	scanf("%d", &anoNascimento);

	printf("Digite o ano que ingressou na empresa : ");
	scanf("%d", &anoEmpresa);

	idade = anoAtual - anoNascimento;
	tempoTrabalhado = anoAtual - anoEmpresa;

	//Verifica a idade maior o igual 65. OU - Ter trabalhado no mínimo 30 anos. OU - Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos.

	if (idade >= 65 || tempoTrabalhado >= 30 || idade >= 60 && tempoTrabalhado >= 25)
	{

		//- A idade do funcionário; - O tempo de trabalho do empregado; - A mensagem 'Apto para aposentadoria'

		printf("Idade funcionario : %d\n", idade);
		printf("Tempo de trabalho do empregado : %d\n", tempoTrabalhado);
		printf("Apto para aposentadoria\n");
	}
	else
	{

		//- A idade do funcionário; - O tempo de trabalho do empregado; - A mensagem 'Não Apto para aposentadoria'
		printf("Idade funcionario : %d\n", idade);
		printf("Tempo de trabalho do empregado : %d\n", tempoTrabalhado);
		printf("Nao apto para aposentadoria\n\n");
	}
	getchar();
	TrocarOpcao();
}

void Exercicio2()
{
#include <stdio.h>

	/*(vale 2 pontos) Faça um programa para ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. 
Sabendo-se que ele recebe uma comissão de 3% sobre o total das vendas até R$ 1.500,00 mais 5% sobre o que ultrapassar este valor, 
calcular e escrever o seu salário total.*/

	float salariofixo, valorvendas, salariototal;

	printf("Digite o salario fixo : \n");
	scanf("%f", &salariofixo);
	printf("Digite o valor das vendas : \n");
	scanf("%f", &valorvendas);
	// se o valor das vendas for menor ou igual a 1.500.
	if (valorvendas <= 1500)
	{

		// o calculo do salario total é o valor fixo mais 3% do valor das vendas.

		salariototal = salariofixo + (valorvendas * 0.03);

	} // se o valor das vendas se ultrapassar 1.500.

	else if (valorvendas > 1500)
	{
		// o calculo do salario total é o valor fixo mais 8% do valor das vendas.
		salariototal = salariofixo + (valorvendas * 0.08);
	}
	printf("O salario total é : %.2f reais\n\n", salariototal);
	getchar();
	TrocarOpcao();
}