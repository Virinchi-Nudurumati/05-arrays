#include <stdio.h>
#include <assert.h>


int min(int [], int);

int k;
int min(int nos[],int count)
{
k=nos[0];
for(int i=0;i<count;i++)
{
if(k>nos[i])
{
k=nos[i];
}
}   
return k;
}
int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (min(x, 7) == -3);

  int y[] = {5};
  assert (min(y, 1) == 5);
  printf("Min: passed\n");
  }
