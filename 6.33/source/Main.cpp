#include<stdio.h>
#include<stdlib.h>
void binary(int a[],int target,int high,int low,int flag);
int main(void)
{
	int i;
	int target;
	int a[9] = { 1,2,3,4,5,6,7,8,9 };
	int b[9] = { 1,5,6,11,17,23,27,35,55};
	for (i = 0; i < 9; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for (i = 0; i < 9; i++)
	{
		printf("%d ", b[i]);
	}
	printf("\n");
	scanf_s("%d", &target);
	binary(b, target,1,9,0);
	system("pause");
	return 0;
}
void binary(int a[], int target,int high,int low,int flag)
{
	int mid = (high + low)/2;
	int c=flag;
	c++;
	if (c == 9)
	{
		printf("not found");
	}
	else if (a[mid] == target)
	{
		printf("%d is no.%d ",a[mid], mid+1);
		printf("\n%d", c);
	}
	else if (a[mid] < target)
	{
		binary(a, target, mid+1,high,c);
	}
	else if (a[mid] > target)
	{
		binary(a, target, low, mid-1,c);
	}

}