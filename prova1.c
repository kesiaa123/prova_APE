#include <stdio.h>
#include <math.h>

int main()
{
   int opcao;
   char operacao;
   double num1, num2, result, peso, altura, imc, area, raio, c, f;
   do
   {

      printf("Selecione a opcao desejada\n 1-calculadora basica\n 2-Imc\n 3-calculo de circunferencia\n 4-Conversao de temperatura\n 5-sair\n");
      scanf("%d", &opcao);

      switch (opcao)
      {
      // calculadora basica
      case 1:

         printf("Digite 2 numeros:\n");
         scanf("%lf %lf", &num1, &num2);
         printf("Escolha a operacao(+ - * /)\n");
         scanf(" %c", &operacao);

         if (operacao == '+')
         {
            result = num1 + num2;
            printf("A soma dos numeros %.lf e %.lf e igual a %.lf\n", num1, num2, result);
         }
         else if (operacao == '-')
         {
            result = num1 - num2;
            printf("A subtracao dos numeros %.lf e %.lf e igual a %.lf", num1, num2, result);
         }
         else if (operacao == '*')
         {
            result = num1 * num2;
            printf("A multiplicacao dos numeros %.lf e %.lf e igual a %.lf", num1, num2, result);
         }
         else if (operacao == '/')
         {
            result = num1 / num2;
            if (num2 != 0)
            {
               printf("A divisao dos numeros %.lf e %.lf e igual a %.2lf", num1, num2, result);
            }
            else
            {
               printf("Nenhum numero e divisivel por 0\n");
            }
         }
         break;

      // Calculadora de IMC
      case 2:
         printf("Digite Seu peso e altura\n");
         scanf("%lf %lf", &peso, &altura);

         imc = peso / (altura * altura);

         printf("Seu IMC e igual a %.1lf\n", imc);

         break;

      // Area do circulo
      case 3:
         printf("Digite o raio do seu circulo\n");
         scanf("%lf", &raio);

         area = 3.14 * pow(raio, 2);

         printf("Area do circulo igual a %.1lf\n", area);
         break;

      // Conversao de temperatura
      case 4:
         printf("Digite a temperatura em celsius\n");
         scanf("%lf", &c);

         f = c * (9 / 5) + 32;

         printf("A temperatura %.2lf em celsius e igual a %.2lf Fahrenheit\n", c, f);
         break;

      case 5:
         printf("\n");
         printf("Programa encerrado");
         break;
      }
   } while (opcao != 5);
}
