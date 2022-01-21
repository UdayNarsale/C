/*
Write a program which accept string from user and count number of 
capital characters.
Input : "Marvellous Multi OS"
Output : 4
*/

#include<stdio.h>

int CountCapital(char *str)
{
	int iCnt=0;
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
			iCnt++;
		str++;
	}
	return iCnt;
}

int main()
{
	char ch[30];
	printf("Enter the string: ");
	scanf("%[^'\n']s",ch);
	
	int iRet=CountCapital(ch);
	printf("Number of capital letters are: %d",iRet);
	
	return 0;
}