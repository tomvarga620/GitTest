#include <stdio.h>

int main(){
	
	int year,interest,i;
	float amount,interestm,tax;
	
	printf("Enter amount: ");
	scanf("%f",&amount);
	
	printf("Enter interest: ");
	scanf("%d",&interest);
	
	printf("Enter year: ");
	scanf("%d",&year);
	
	for(i=1;i<=year;i++){
		
		interestm=(amount/100)*(float)interest;
		printf("%1.2f",interestm);
		
	}
	
}
