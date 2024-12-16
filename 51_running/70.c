#include<stdio.h>

int main()
{
    for(int i=65; i<=124; i++){
        char ch=(char)(i);
            if (i > 90 && i < 97)
      continue;
    printf("[%d - %c]\n",i,ch);
    }
    return 0;
}