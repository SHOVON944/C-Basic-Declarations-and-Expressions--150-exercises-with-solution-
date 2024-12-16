#include<stdio.h>
#include<math.h>

int main()
{
    int weight,height,BMI;
    printf("Enter your body weight: ");
    scanf("%d",&weight);
    printf("Enter your body height: ");
    scanf("%d",&height);
    BMI = weight/pow(height,2);
    BMI<18.5 ? printf("Underweight") : BMI<25 ? printf("Normal") : BMI<30 ? printf("Overweight") : BMI<35 ? printf("Class 1(Moderate)") : BMI <40 ? printf("Class 2(Severe)") : BMI>=40 ? printf("Class 3(Very severe/Morbid)") : printf("Error input");
    return 0;
}