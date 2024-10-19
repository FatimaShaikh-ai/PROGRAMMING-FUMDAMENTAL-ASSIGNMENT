#include<stdio.h>
#include<conio.h>
void main()
{
	float celcius;
	printf("Enter the temperature in celcius");
	scanf("%f",&celcius);
	printf("%f celcius is about %f fahrenheit",celcius,(celcius*9/5)+32);
	getch();
}
