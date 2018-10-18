#include <stdio.h>

int main(int argc, char const *argv[]) {
  //int num = 1;
  int n,i,max;
  int count = 0; //Use only for task 4.1, 4.2

  /*Read input from user into variable num*/

  /*Input validation*/
 // printf("Enter a number: ");
 // scanf("%d",&n);


for(i=100;i<200;i++)
{

  
  if(n<3 || n>1000)
  {
  	
  return 0;
  
  }

  while (n != 1) {  //main cycle
    /* code */
 
 
    if(n%2==0)
	{
		n=n/2;
		printf("\n%d, ",n);
		count=count+1;
		max=n;
		max=n>max?n:max;
		
	}
	else
	{	
		n=n*3+1;
		max=n;
		printf("\n%d, ",n);
		count=count+1;
		max=n;
		max=n>max?n:max;
	}
     
  }
  
  printf("\nMax number is %d",max);
  printf("\nCycle iterations %d",count);
  return 0;
  
}

}
