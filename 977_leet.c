/**
   * Return an array of size *returnSize.
    * Note: The returned array must be malloced, assume caller calls free().
	 */
#include<stdio.h>
#define SIZE  100


int* sortedSquares(int* A, int ASize, int* returnSize); 
int main(void)

{
	int A[SIZE];
	int * p;
	int n,length;
	int i = 0;
	
	printf("enter number:");
	while  (((scanf("%d",&n)) == 1) && i < SIZE)
	{
		A[i++] = n * n ;
		printf("enter next:");
	}

	
	if(i == 0)
		printf("faild to add!\n");
			
	length = i;
	
	p =	sortedSquares(A,length,p) ;
	for (i = 0 ; i < length ; i++)
		printf("%d ",*(p + i));
	return 0;
}



int* sortedSquares(int* A, int ASize, int* returnSize) {
	int temp; 
	
	for (int i = 0 ; i < ASize ; i++)
		for (int j = i+1 ; j < ASize ; j++)
			if (*(A+i) > *(A + j))
			{
				temp = *(A + i);
				*(A+i) = *(A+j);
				*(A+j) = temp;
			}				
	return  A;
}
