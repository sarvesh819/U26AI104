#include <stdio.h>
int main()
{
  float principle, rate, time;
  printf("Enter the principle amount:\n");
  scanf("%f", &principle);
  printf("Enter the rate:\n");
  scanf("%f", &rate);
  printf("Enter the time:\n");
  scanf("%f", &time);
  float interest;
  interest=principle*rate*time;
  printf("The interest is:%.2f", interest);
  return 0;
}