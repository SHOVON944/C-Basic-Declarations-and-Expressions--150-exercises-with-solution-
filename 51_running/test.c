#include <stdio.h>

int main () {
  int a, i, ctr = 0;
  
  // Prompt the user to input an integer number
  printf("Input an integer number:\n");
  scanf("%d", &a);

  // Print the next 10 consecutive odd numbers
  printf("\nNext 10 consecutive odd numbers:\n");
  
  for (i = a + 1; ctr < 10; i++){

    if (i % 2 != 0){

      printf("%d, ", i);
      ctr++;
      
    }
  }
  
  // Reset counter for even numbers
  ctr = 0;
  
  // Print the next 10 consecutive even numbers
  printf("\n\nNext 10 consecutive even numbers:\n");
  
  for (i = a + 1; ctr < 10; i++){

    if (i % 2 == 0){

      printf("%d, ", i);
      ctr++;
      
    }
  }
}
