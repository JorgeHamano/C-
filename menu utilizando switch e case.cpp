#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main()
  
{    
float num1, num2, soma, media;
char op;
int opd;
//float soma;
setlocale(LC_ALL, "Portuguese");
  printf ("Digite os dois números:\n");
  scanf("%f %f", &num1, &num2);
  menu:
  printf ("Menu\n");
  printf ("a = Somar os dois números;\n");
  printf ("b = Subtrair o 2º número pelo 1º número\n");
  printf ("c = Calcular a raiz quadrada do 1º número\n");
  printf ("d = Informar se o 1º número é impar ou par\n");
  printf ("e = Mostrar o maior número\n");
  printf ("f = Mostrar a media dos números\n");
  printf ("q = Encerrar o programa\n");
  printf ("Digite a opção:");
  scanf("%s", &op);  
  switch (op) {
case 'a':
	printf("\n\nA soma de %.0f + %.0f é igual a:%.0f\n",num1, num2, num1+num2);
	system ("pause");
	system ("cls");
	goto menu;
case 'b':
	printf("\n\nA subtração de %.0f - %.0f é igual a:%.0f\n",num2, num1, num2-num1);
	system("pause");
	system ("cls");
	goto menu;
case 'c':
	printf("\n\nA raiz quadrada de %.0f é igual a:%.0f\n", num1, sqrt(num1));
	system("pause");
	system ("cls");
	goto menu;
case 'd':
	opd=(int)num1;
	if (opd % 2 == 0){
		printf("\n\nO número %.0f é PAR. \n", num1);		
	}else{
		printf("\n\nO número %.0f é IMPAR. \n", num1);		
	}
	system("pause");
	system ("cls");
	goto menu;
case 'e':
	if (num1 > num2)
	printf("\n\nO número %.0f é MAIOR que %.0f.\n", num1, num2);
else
	if (num2 > num1)
	printf("\n\nO número %.0f é MAIOR que %.0f.\n", num2, num1);
else
	printf("\n\nOs números %.0f e %.0f são exatamente iguais.\n", num1, num2);
	system("pause");
	system ("cls");
	goto menu;
case 'f':
	media=(num1+num2)/2;
	printf("\n\nA média entre os números %.0f e %.0f é de: %.1f\n", num1, num2,media);
	system("pause");
	system ("cls");
	goto menu;
case 'q':
	printf("\n\nPROGRAMA ENCERRADO!\n");
	break;
default:
	printf("\n\nOPÇÂO INVALIDA!\n");
	system("pause");
	system ("cls");
goto menu;
}
  return 0;
}
