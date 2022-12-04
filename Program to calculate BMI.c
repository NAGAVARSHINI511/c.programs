//Program to calculate BMI //body mass index
#include <stdio.h>
int main()
{
    float wt,ht,bmi;
    printf("\n\t Enter Weight In Kg\t");
    scanf("%f",&wt);
    printf("\n\t Enter height In Meters\t");
    scanf("%f",&ht); 
    bmi = wt / (ht*ht);
    if (bmi <= 18.5)
  {
        printf ("BMI Report is : %.2f -> Underweight", bmi);
  }
    else if(bmi <= 24.9)
  {
        printf("BMI Report is :  %.2f -> Normal",bmi);
  }
    else if(bmi >= 25 && bmi <= 29.9)
  {
        printf("BMI Report is : %.2f -> Overweight",bmi);
  }
    else
    printf("BMI Report is : %.2f -> Obese",bmi);   
    return 0;
}
