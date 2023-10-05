#include <stdio.h>
#include <stdlib.h>

int main()
{
    float  weight,hight,BMI;
    printf("Enter your weight: \n");
    scanf("%f", &weight);
    printf("Enter your hight(m): \n");
    scanf("%f", &hight);
    BMI = (weight / (hight*2));
    printf("your hight is %.2f and your weight is %.f so your BMI is %.2f ", hight,weight,BMI);

if (BMI < 18)
    {
      printf("!!! You are UNDERWEIGHT !!!\n");
    }
if (BMI > 25)
    {
      printf("!!! You are OVERWEIGHT !!!\n");
    }
else
    {
      printf("!!! You have a normal body mass !!!");
    }

    return 0;
}
