#include <stdio.h>
int main()
{
      double t1, t2,n;
      printf("Enter first number: ");
      scanf("%lf", &t1);
      printf("Enter second number: ");
      scanf("%lf",&t2);
      n=t1;
      t1=t2;
      t2=n;
      printf("\nAfter swapping, firstNumber = %.2lf\n", t1);
      printf("After swapping, secondNumber = %.2lf", t2);
      return 0;
}

