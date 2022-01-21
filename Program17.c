/*
Accept number of rows and number of columns from user and display below 
pattern.
Input : iRow = 6 iCol = 6
Output : 
* * * * * *
* # # # * *
* # # * $ *
* # * $ $ *
* * $ $ $ *
* * * * * *
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
	for(int i=iRow; i>=1; i--)
	{
		for(int j=1; j<=iCol; j++)
		{
			if((i==1)||(i==iRow)||(j==1)||(j==iCol)||(i==j))
				printf("* ");
			else if(i>j)
				printf("# ");
			else if(j>i)
				printf("$ ");
		}
		printf("\n");
	}
}

int main()
{
	int iRow=0, iCol=0;
	printf("Enter the number of rows: ");
	scanf("%d",&iRow);
	printf("Enter th' number of columns: ");
	scanf("%d",&iCol);
	Display(iRow,iCol);
	
	return 0;
}