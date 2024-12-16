 #include<stdio.h>

int main()
{
    float arr[4];
    for(int i=0; i<4; i++){
        scanf("%f",&arr[i]);
    }
    float max = arr[0];
    for(int i=0; i<4; i++){
        if(max <arr[i]){
            max = arr[i];
        }
    }
    float min = arr[0];
    for(int i=0; i<4; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("Maximum and minimum difference: %f",max - min);
    return 0;
}