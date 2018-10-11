#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	// od 0 po 9 cisla, od 10 po 16 pismena podmienky nato treba
	
	int number,i;
	
	srand(time(NULL));
	
	for(i=1;i<=12;i++)
	{	
		number=rand()%16;
		
		if(number<10)
		{
		printf("%d",number);
		}
		else
		{
		printf("%c",number+55);
		}
		
		if(i%2==0 && i!=12)
		{
		printf(":");	
		}
	}
}
