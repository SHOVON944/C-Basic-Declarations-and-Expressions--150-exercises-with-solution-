#include<stdio.h>

int main()
{
    float law,main_law,running_angle;
    int h,m;
    printf("Enter Hour and minuter by space: ");
    scanf("%d%d",&h,&m);
    law = ((60*h)-(11*m))/2;
    running_angle = (m%5)/12;
    main_law = law - running_angle;
    if(law<0){
     main_law = -main_law;
    } else{
        main_law = main_law;
    }
    if(main_law>180){
        main_law = 360-main_law;
    }
    printf("The angle is: %f",main_law);
    return 0;
}