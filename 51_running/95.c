#include<stdio.h>

float formula_frnhght(float f){
    float farenhieght = ((f-32)*5)/9;
    return farenhieght;
}

float formula_celcius(float C){
    float celcius = ((9*C)/32)+32;
    return celcius;
}

int main()
{
    printf("Fahrenheit to Celsius");
    printf("\n---------------------\n");
    printf("Fahrenheit  Celsius\n");
    for(float i=0; i<=150; i+=10){
        float farenhieght = formula_frnhght(i);
        printf("%.0f\t%.2f\n",i,farenhieght);
    }
    printf("\n\nCelsius to Fahrenheit\n");
    printf("---------------------\n");
    printf("Celsius   Fahrenheit\n");
    for(float i=0; i<=150; i+=10){
        float celsius = formula_celcius(i);
        printf("%.0f\t%.2f\n",i,celsius);
    }
    return 0;
}