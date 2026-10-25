#include<stdio.h>

int main()
{
  char alp;
  
  printf("Enter an alphabet: ");
  scanf("%c", &alp);
  
  if( alp == 'a' || alp == 'e' || alp == 'i' || alp == 'o' || alp == 'u' ||
      alp == 'A' || alp == 'E' || alp == 'I' || alp == 'O' || alp == 'U' )
  {
     printf("Vowel");
  } 
  else
  {
     printf("Not a vowel");
  }
     return 0;
  }   
        