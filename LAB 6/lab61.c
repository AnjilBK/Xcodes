#include <stdio.h>
double add(double, double);
double sub(double, double);
double div(double, double);
double mul(double, double);
int main()
{
  float a,b;
  printf("Input two numbers:\n");
  scanf("%f%f",&a,&b );
  printf("Your addition of:     (%0.2f + %0.2f) = %0.2f\n",a,b,add(a,b) );
  printf("Your substration of:  (%0.2f - %0.2f) = %0.2f\n",a,b,sub(a,b) );
  printf("Your division of:     (%0.2f / %0.2f) = %0.2f\n",a,b,div(a,b) );
  printf("Your multification of:(%0.2f * %0.2f) = %0.2f",a,b,mul(a,b) );
  return 0;
  }

  double add(double a, double b)
  {
    return a+b;
  }
  double sub(double a, double b)
  {
    return a-b;
  }
  double div(double a, double b)
  {
    return a/b;
  }
  double mul(double a, double b)
  {
    return a*b;
  }
