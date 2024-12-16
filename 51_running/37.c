#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter x: ");
    scanf("%d",&x);
    printf("Enter y: ");
    scanf("%d",&y);
    if(x>0  && y>0){
        printf("Quardrant: I(+,+)");
    }else if(x<0  && y>0){
        printf("Quardrant: II(-,+)");
    }else if(x<0  && y<0){
        printf("Quardrant: III(-,-)");
    }else if(x>0  && y<0){
        printf("Quardrant: IV(+,-)");
    }
    return 0;
}