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

int read(int *array)
{
  int c,size;
  printf("Enter size of array: ");
  scanf("%d",&size);
  for(c=0;c<size;c++)
    scanf("%d",&array[c]);
}

int main()
{
  int c,n=7,array[7]={9,8,7,6,5,4,3};
  //read(array);
  insort(array);
  printf("Sorted array is---\n");
  for(c=0;c<n;c++)
    printf(" %d ",array[c]);
  printf("\n");
  return 0;
}
