#include <stdio.h>
#include <assert.h>


int max(int [], int);
int max(int nos[],int count)
{
 int k=nos[0];
for(int i=0;i<count;i++)
{
if(nos[i]>=k) 
{
k=nos[i];
}
}
return k;
}
int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (max(x, 7) == 10);

  int y[] = {5};
  assert (max(y, 1) == 5);
  printf("Max: passed\n");
  }
