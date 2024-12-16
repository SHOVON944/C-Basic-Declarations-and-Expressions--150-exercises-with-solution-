#include<stdio.h>

int main()
{
    int c;
    int blank = 0;
    int tab =0;
    int newline = 0;
    printf("Number of blanks, tabs, and newlines:\n");
    printf("Input few words/tab/newlines\n");
    for(; (c = getchar()) != EOF;){
        if(c == ' ') blank++;
        if(c == '\t') tab++;
        if(c == '\n') newline++;
    }
    printf("blank=%d,tab=%d,newline=%d\n", blank, tab, newline);
    return 0;
}