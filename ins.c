#include<stdio.h>
#include<stdlib.h>

int insort(int *array, int n)
{
  int d,c,t;
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

int read(int *array)
{
  int c,size;
  printf("Enter size of array: ");
  scanf("%d",&size);
  for(c=0;c<size;c++)
    scanf("%d",&array[c]);
  return size;
}

int disp(int *array,int n)
{
  int c;
  for(c=0;c<n;c++)
    printf(" %d ",array[c]);
}

int main()
{
  int c,array[10];
  int n=read(array);
  insort(array,n);
  printf("Sorted array is---\n");
  printf("\n");
  return 0;
}
