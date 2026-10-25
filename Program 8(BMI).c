#include<stdio.h>

int main()
{
   float weight, height, BMI;
   
   printf("Enter weight in kg: ");
   scanf("%f", &weight);
   
   printf("Enter height in meters: ");
   scanf("%f", &height);
   
   if(weight <= 0 || height <=0 )
   {
     printf("Invalid input");
     return 0;
   }
   
   BMI = weight / (height * height);
   
   printf("BMI = %f",BMI);
   
   if (BMI < 18.5)
    {
        printf("Underweight");
    }
    else if (BMI < 25)
    {
        printf("Normal");
    }
    else if (BMI < 30)
    {
        printf("Overweight");
    }
    else
    {
        printf("Obese");
    }

    return 0;
}
   
   
   