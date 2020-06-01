#include <stdio.h>
#include <string.h>
int main(void){
  char s[11], t[12];
  scanf("%s%s", s, t);
  (strncmp(s, t, strlen(s)) == 0) ? puts("Yes") : puts("No");
  return 0;
}
