#include <stdio.h>
#include <stdlib.h>

float calculateArea(float x1, float y1, float x2, float y2, float x3, float y3) {
    return abs((x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)) / 2.0);
}

int main() {
    float x1, y1, x2, y2, x3, y3, x, y;
    printf("Enter value for(x1,y1): \n");
    scanf("%f%f",&x1,&y1);
    printf("Enter value for(x2,y2): \n");
    scanf("%f%f",&x2,&y2);
    printf("Enter value for(x3,y3): \n");
    scanf("%f%f",&x3,&y3);
    printf("Enter value for(x,y): \n");
    scanf("%f%f",&x,&y);
    float totalArea = calculateArea(x1, y1, x2, y2, x3, y3);
    float area1 = calculateArea(x, y, x2, y2, x3, y3);
    float area2 = calculateArea(x1, y1, x, y, x3, y3);
    float area3 = calculateArea(x1, y1, x2, y2, x, y);
    if (totalArea == (area1 + area2 + area3)){
        printf("The point (%.2f, %.2f) is inside the triangle.\n", x, y);
    } else{
        printf("The point (%.2f, %.2f) is outside the triangle.\n", x, y);
    }
    return 0;
}