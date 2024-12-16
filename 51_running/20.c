#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,checker;
    printf("Enter a :");
    scanf("%lf",&a);
    printf("Enter b :");
    scanf("%lf",&b);
    printf("Enter c :");
    scanf("%lf",&c);
    checker = pow(b,2)-4*a*c;
    if(checker>0 && a!=0){
        checker = sqrt(checker);
        double x,y;
        x = (-b+checker)/(2*a);
        y = (-b-checker)/(2*a);
        printf("Root1 = %.5lf\n",x);
        printf("Root2 = %.5lf\n",y);
    }
    return 0;
}