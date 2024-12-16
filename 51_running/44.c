#include<stdio.h>

int main()
{
    int n;
    float avrg;
    int sum = 0;
    int persons = 0;
    printf("Input persons number: ");
    scanf("%d",&n);
    int marks[100];
    printf("Marks are(0 to terminat): \n");
    for(int i=1; i<=n; i++){
        scanf("%d",&marks[i]);
            if(marks[i]<=0){
            break;
        }
        persons++;
        sum +=marks[i];
    }
    avrg = (float)sum/(float)persons;
    printf("Average: %f",avrg);
    return 0;
}