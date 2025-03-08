#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char ch;
  char s[100];
  char sen[1000];
  scanf("%c %s", &ch, s);
  int c;
  while ((c = getchar()) != '\n' && c != EOF)
    ;

  fgets(sen, sizeof(sen), stdin);
  size_t len = strlen(sen);
  if (len > 0 && sen[len - 1] == '\n')
  {
    sen[len - 1] = '\0';
  }

  printf("%c\n", ch);
  printf("%s\n", s);
  printf("%s\n", sen);

  return 0;
}