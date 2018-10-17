#include <stdio.h>

int main(){
	
	
	char text[30];
	int l=0,i,c=0;
	
	printf("Type word: ");
	scanf("%s",&text);
	
	do
	{
		l++;
	}
	while(text[l]!='\0');
	for(i=0;i<l;i++)
	{
		if(text[i]=='z')
		{
		text[i]='a';
		text[i]--;
		}
	
		if(text[i]=='Z')
		{
		text[i]='A';
		text[i]--;
		}
		text[i]++;
	}
	printf("\n%s",text);
	
}
