#include <stdio.h>

void inverterPalavra(char s[]) {

  int i = 0;
  int f = 0;
  char temp;

  while (s[f] != '\0') 
  {
    f++;
  }

  f--;
  
  while (i < f)
  {
    temp = s[i];
    s[i] = s[f];
    s[f] = temp;

    i++;
    f--;
  }
  
  printf("%s", s);
  
}

int main() {
  char string[] = "Fundamentos";

  inverterPalavra(string);

  return 0;
}