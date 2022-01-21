/*Write a program which accept range from user and display all numbers in between that range.*/

#include<stdio.h>
void Display(int iStart, int iEnd)
{
	for(int i=iStart+1; i<iEnd; i++)
	{
		printf("%d ",i);
	}
}
int main()
{
	int iStart=0, iEnd=0;
	printf("Enter the range:\n");
	printf("From: ");
	scanf("%d",&iStart);
	printf("To: ");
	scanf("%d",&iEnd);
	
	Display(iStart,iEnd);
	return 0;
}