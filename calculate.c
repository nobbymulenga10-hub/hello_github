#include <stdio.h>
    int main(){
    double num1, num2;
    char operator;
    char choice;
    do {
       printf("\n===============\n");
    printf("simple c calculator\n");
        printf("\n===============\n");
     //Get user input
     printf("Enter first number:");
       scanf("%lf",  &num1);
       printf("Enter second number:");
      scanf("%lf",  &num2);
      printf("Enter an operator (+,-,*,/):");
            scanf(" %c",&operator );
      // perform calculation
      switch (operator){
      case '+':
        printf("Result:%.2lf+%.2lf= %.2lf\n", num1, num2, num1+ num2);
        break;
      case'-':
        printf("Result:%.2lf-%.2lf=%.2lf\n", num1,num2, num1 -num2);
        break;
      case'*':
        printf("Result:%.2lf * %.2lf= %.2lf\n", num1 , num2, num1* num2);
        break;
      case'/':
          if(num2!=0){
        printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
          }else{
       printf("Error.Division by zero is not allowed!\n");
          }
       break;
      default:
        printf("Error:invalid operator!\n");
      }
      // Ask if user wants to continue
      printf("\nDo you want to perform another calculation?(y/n):");
      scanf(" %c", &choice);
    }while(choice== 'y'|| choice =='y');
            printf("Thank you for using the calculator!\n");

        return 0;


    }

