#include<stdio.h>

int main()
{
    double x1, y1, x2, y2, x3, y3, x4, y4,slope_PQ,slope_RS;
    printf("Enter value for P(x1,y1): \n");
    scanf("%lf%lf",&x1,&y1);
    printf("Enter value for Q(x2,y2): \n");
    scanf("%lf%lf",&x2,&y2);
    printf("Enter value for R(x3,y3): \n");
    scanf("%lf%lf",&x3,&y3);
    printf("Enter value for S(x,y): \n");
    scanf("%lf%lf",&x4,&y4);

    if(x1!=x2) slope_PQ=(y2-y1)/(x2-x1);
    if(x1!=x2) slope_RS=(y4-y3)/(x4-x3);

    if(slope_PQ==slope_RS) printf("PQ and RS are parallel.");
    else printf("PQ and RS are not parallel!");
    return 0;
}