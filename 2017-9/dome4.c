
#include <stdio.h>

int main()
{
int sum,i;
 for(sum=2;sum<=100;sum++)
 {
  for(i=2;i<=sum/2;i++)
  {
  if(sum%i==0)
    break;
  }
  if(i>sum/2)
  printf("%d " ,sum);
 }
}
