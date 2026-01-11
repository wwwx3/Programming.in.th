#include <stdio.h>

int main(void) {
  int n, num, min ,max , i;
  //total numberor n(A) 
  scanf("%d",&n);
  
  //Numbers in the set 
  scanf("%d",&num);
  min = max = num ;
  for (int i = 2; i <= n ; i ++)
  {
    scanf("%d",&num);
    if (num > max)
    {
      max = num;
    }
    if (num < min)
    {
      min = num; 
    }
  }
  printf("%d\n",min);
  printf("%d",max);
  return 0;
}
