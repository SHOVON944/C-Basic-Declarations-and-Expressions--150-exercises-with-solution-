#include<stdio.h>
int main() {
    int lenght, width, diagonal;
    printf("Enter adjoint sides: ");
    scanf("%d %d", &lenght, &width);
    printf("Enter the diagonal: ");
    scanf("%d", &diagonal);
    if (lenght*lenght + width*width == diagonal*diagonal) printf("It is a Rectangle\n");
    else printf("It is not a Rectangle\n");
    if (lenght==width) printf("It is a Rhombus\n");
    else printf("It is not a Rhombus\n");
    return 0;
}