#include<stdio.h>


int main(){
	float h,w;
	float BMI;
	char NM;
	printf("Enter your height in meter and weight in kilograms one by one (EX. 1.71 111.5): ");
	scanf("%f %f",&h,&w);
	
	BMI = w/(h*h);
	printf("Your BMI is: %.1f",BMI);
	
	if (BMI >= 18.5 && BMI <= 24.9){
		printf("\nit\'s normal",BMI);
	}
	else if(BMI >= 25 && BMI <= 29.9){
		printf("\nit\'s pretty high",BMI);
	}
	else if(BMI >= 30){
		printf("\nit\'s very high",BMI);
	}
	
	
	
	return 0;
	
}
