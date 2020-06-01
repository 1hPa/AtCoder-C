#include <stdio.h>
int main(void){
  int a, b, c, x, i, j, fif, count;
  scanf("%d%d%d%d", &a, &b, &c, &x);
  for(i=0;i<=x/500;i++)
    for(j=0;j<=(x-500*i)/100;j++){
      fif = x-500*i-100*j;
      count += fif % 50 == 0 && c >= fif/50 && a >=i && b >=j;
    }
  printf("%d", count);
  return 0;
}
