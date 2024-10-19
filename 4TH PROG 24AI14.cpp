#include<stdio.h>
#include<conio.h>
int main()
{
	float temp;
	printf("Enter temperature in celcius:");
	scanf("%f",&temp);
	printf("%f fahrenheit is about %f celcius", temp,((temp-32)*5/9));
	getch();
}
