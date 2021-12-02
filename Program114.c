#include<stdio.h>
#include<stdbool.h>
bool Smalltocapital(char c)
{
	if((c >= '0')&&(c<='9'))
	{
		return c -32;
	}
}
int main()
{
	char ch = '\0',CRet = '\0';
	bool bRet = false;
	
	printf("Enter character\n");
	scanf("%c", &ch);
	CRet = Smalltocapital(ch);
	
	printf("Capital letter is : %c\n", CRet);
	return 0;
}