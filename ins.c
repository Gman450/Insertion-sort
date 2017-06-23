#include<stdio.h>
#include<stdlib.h>

int insort(int *array)
{
  int d,c,n=7,t;
  for(c = 1;c<=n-1;c++) 
    {
      d = c;
      while(d>0 && array[d] < array[d-1]) 
	{
	  t=array[d];
	  array[d]= array[d-1];
	  array[d-1]=t;
	  d--;
	}
    }
  return 0;
}

int main()
{
  int array[7]={4,23,43,38,15,10,30},c,n=7;
  insort(array);
  printf("Sorted array is---\n");
  for(c=0;c<n;c++)
    printf(" %d ",array[c]);
  printf("\n");
  return 0;
}
