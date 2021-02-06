//O programa é um conversor de temperatura que utiliza as principais escalas Celsius, Fahrenheit, kelvin e Rankine
//As funções de conversão foram escritas no arquivo externo "funcoes.h", declarado na diretiva de compilação

#include <stdio.h>
#include <stdlib.h>
#include "funcoes-cv.h" //Funções de conversão
int main() {
	
	int escolha;
	char sair;
	
	printf("\t1 - Celsius/Fahrenheit\t4 - Fahreiheit/Celsius\t7 - Kelvin/Celsius\t10 - Rankine/Celsius\n");
	printf("\t2 - Celsius/Kelvin\t5 - Fahreiheit/Kelvin\t8 - Kelvin/Fahrenheit\t11 - Rankine/Fahrenheit\n");
	printf("\t3 - Celsius/Rankine\t6 - Fahreiheit/Rankine\t9 - Kelvin/Rankine\t12 - Rankine/Kelvin\n\n");

	printf("\t\t\t\t\tConversor de temperatura\n");
	
	do{
		printf("\n\tDigite o numero da opcao desejada: ");
		scanf("%d", &escolha);
		printf("\n");
	
		switch(escolha){
		//Celsius
			case 1:{
				double C;
				printf("\tCelsius/Fahrenheit\n");
				printf("\t%cC = ", 248);
				scanf("%lf", &C);
				printf("\t%cF = %f", 248, CtoF(C));
			}
			break;
			
			case 2:{
				double C;
				printf("\tCelsius/Kelvin\n");
				printf("\t%cC = ", 248);
				scanf("%lf", &C);
				printf("\t%cK = %f", 248, CtoK(C));
			}
			break;
			
			case 3:{
				double C;
				printf("\tCelsius/Rankine\n");
				printf("\t%cC = ", 248);
				scanf("%lf", &C);
				printf("\t%cR = %f", 248, CtoR(C));
			}
			break;
			
		//Fahreiheit
			case 4:{
				double F;
				printf("\tFahreiheit/Celsius\n");
				printf("\t%cF = ", 248);
				scanf("%lf", &F);
				printf("\t%cC = %f", 248, FtoC(F));
			}
			break;
			
			case 5:{
				double F;
				printf("\tFahreiheit/Kelvin\n");
				printf("\t%cF = ", 248);
				scanf("%lf", &F);
				printf("\t%cK = %f", 248, FtoK(F));
			}
			break;
			
			case 6:{
				double F;
				printf("\tFahreiheit/Rankine\n");
				printf("\t%cF = ", 248);
				scanf("%lf", &F);
				printf("\t%cR = %f", 248, FtoR(F));
			}
			break;
		
		//Kelvin
			case 7:{
				double K;
				printf("\tKelvin/Celsius\n");
				printf("\t%cK = ", 248);
				scanf("%lf", &K);
				printf("\t%cC = %f", 248, KtoC(K));
			}
			break;
			
			case 8:{
				double K;
				printf("\tKelvin/Fahreiheit\n");
				printf("\t%cK = ", 248);
				scanf("%lf", &K);
				printf("\t%cF = %f", 248, KtoF(K));
			}
			break;
			
			case 9:{
				double K;
				printf("\tKelvin/Rankine\n");
				printf("\t%cK = ", 248);
				scanf("%lf", &K);
				printf("\t%cR = %f", 248, KtoR(K));
			}
			break;
			
		//Rankine
			case 10:{
				double R;
				printf("\tRankine/Celsius\n");
				printf("\t%cR = ", 248);
				scanf("%lf", &R);
				printf("\t%cC = %f", 248, RtoC(R));
			}
			break;
			
			case 11:{
				double R;
				printf("\tRankine/Fahreiheit\n");
				printf("\t%cR = ", 248);
				scanf("%lf", &R);
				printf("\t%cF = %f", 248, RtoF(R));
			}
			break;
			
			case 12:{
				double R;
				printf("\tRankine/Kelvin\n");
				printf("\t%cR = ", 248);
				scanf("%lf", &R);
				printf("\t%cK = %f", 248, RtoK(R));
			}
			break;
			
			default:
				printf("Digite um dos numeros da tabela\n");
		}
		
		setbuf(stdin, NULL);
		printf("\n\nDeseja continuar (s/n)? ");
		scanf("%c", &sair);
	} while (sair != 'n' && sair != 'N');
	
	printf("\n\n");
	system("pause");
	return 0;
}
