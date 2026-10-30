#include<stdio.h>
int main()
{
  float p, t, r;
  printf("============Welcome to Simple Interest Calculator=================\n");
  printf("\nEnter the Principal Amount:");
  scanf("%f",&p);
  printf("\nEnter the Interest Rate:");
  scanf("%f",&r);
  printf("\nEnter the Period in Year:");
  scanf("%f",&t);
  float SI= (p*t*r)/100;

  printf("\nThe Simple Interest is:%.2f\n ",SI);
  return 0;
}
