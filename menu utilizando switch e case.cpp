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
  printf ("Digite os dois n�meros:\n");
  scanf("%f %f", &num1, &num2);
  menu:
  printf ("Menu\n");
  printf ("a = Somar os dois n�meros;\n");
  printf ("b = Subtrair o 2� n�mero pelo 1� n�mero\n");
  printf ("c = Calcular a raiz quadrada do 1� n�mero\n");
  printf ("d = Informar se o 1� n�mero � impar ou par\n");
  printf ("e = Mostrar o maior n�mero\n");
  printf ("f = Mostrar a media dos n�meros\n");
  printf ("q = Encerrar o programa\n");
  printf ("Digite a op��o:");
  scanf("%s", &op);  
  switch (op) {
case 'a':
	printf("\n\nA soma de %.0f + %.0f � igual a:%.0f\n",num1, num2, num1+num2);
	system ("pause");
	system ("cls");
	goto menu;
case 'b':
	printf("\n\nA subtra��o de %.0f - %.0f � igual a:%.0f\n",num2, num1, num2-num1);
	system("pause");
	system ("cls");
	goto menu;
case 'c':
	printf("\n\nA raiz quadrada de %.0f � igual a:%.0f\n", num1, sqrt(num1));
	system("pause");
	system ("cls");
	goto menu;
case 'd':
	opd=(int)num1;
	if (opd % 2 == 0){
		printf("\n\nO n�mero %.0f � PAR. \n", num1);		
	}else{
		printf("\n\nO n�mero %.0f � IMPAR. \n", num1);		
	}
	system("pause");
	system ("cls");
	goto menu;
case 'e':
	if (num1 > num2)
	printf("\n\nO n�mero %.0f � MAIOR que %.0f.\n", num1, num2);
else
	if (num2 > num1)
	printf("\n\nO n�mero %.0f � MAIOR que %.0f.\n", num2, num1);
else
	printf("\n\nOs n�meros %.0f e %.0f s�o exatamente iguais.\n", num1, num2);
	system("pause");
	system ("cls");
	goto menu;
case 'f':
	media=(num1+num2)/2;
	printf("\n\nA m�dia entre os n�meros %.0f e %.0f � de: %.1f\n", num1, num2,media);
	system("pause");
	system ("cls");
	goto menu;
case 'q':
	printf("\n\nPROGRAMA ENCERRADO!\n");
	break;
default:
	printf("\n\nOP��O INVALIDA!\n");
	system("pause");
	system ("cls");
goto menu;
}
  return 0;
}
