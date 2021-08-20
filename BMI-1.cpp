#include<stdio.h>


int main(){
	float h,w;
	float BMI;
	printf("Enter your height in meter: ");
	scanf("%f",&h);
	printf("Enter your weight in kilograms: ");
	scanf("%f",&w);
	
	
	BMI = w/(h*h);
	
	if(BMI >= 18.5 && BMI <= 24.9){
		printf("\nYour BMI is %.1f and it\'s normal",BMI);
	}
	else if(BMI >= 25 && BMI <= 29.9){
		printf("\nYour BMI is %.1f and it\'s pretty high",BMI);
	}
	else if(BMI >= 30){
		printf("\nYour BMI is %.1f and it\'s very high",BMI);
	}
	else{
		printf("ERROR");
	}
	
	
	return 0;
	
}
