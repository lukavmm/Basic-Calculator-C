//#include <stdio.h>
//#include <math.h>

int main(void) {
  float num1,num2;
  char op;
  printf("------------------------CALCULATOR------------------------\n");

  printf("Digite o primeiro valor: ");
  scanf("%f",&num1);

  printf("Digite qual operação deseja efetuar: ");
  scanf("%s",&op);

   printf("Digite o primeiro valor: ");
  scanf("%f",&num2);

  switch(op){
    case '+':
      num1+=num2;
      printf("\nResultado: %.2f",num1);
      break;
    case '-':
      num1=num1-num2;
      printf("\nResultado: %.2f",num1);
      break;
    case '/':
      num1=num1/num2;
      printf("\nResultado: %.2f",num1);
      break;
    case '*':
      num1=num1*num2;
      printf("\nResultado: %.2f",num1);
      break;
    case 'q':
      num1=sqrt(num1);
      printf("\nResultado: %.2f",num1);
      break;
    case '%':
      printf("\nResultado: %.2f",fmod(num1,num2));
      break; 
  }


  printf("\n--------------------------Powered by Lukavmm-------------------\n");
  
  return 0;
}