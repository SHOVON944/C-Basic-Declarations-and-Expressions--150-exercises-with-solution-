#include <stdio.h>

int main()
{
    int heights[8];
    int topThree[3] = {-1, -1, -1};
    printf("Enter the heights of 8 buildings:\n");
    for (int i = 0; i < 8; i++) {
        printf("Height of building %d: ", i + 1);
        scanf("%d", &heights[i]);
    }
    for (int i = 0; i < 8; i++) {
        if (heights[i] > topThree[0]) {
            topThree[2] = topThree[1];
            topThree[1] = topThree[0];
            topThree[0] = heights[i];
        } else if (heights[i] > topThree[1]) {
            topThree[2] = topThree[1];
            topThree[1] = heights[i];
        } else if (heights[i] > topThree[2]) {
            topThree[2] = heights[i];
        }
    }
    printf("The top three building heights in descending order are: %d, %d, %d\n", 
           topThree[0], topThree[1], topThree[2]);
    return 0;
}
