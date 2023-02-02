#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int count=0,rem;
	long start,end,number,originalnum;
	double result=0.0;
	clrscr();
	printf("enter starting number: ");
	scanf("%ld",&start);
	printf("enter ending number: ");
	scanf("%ld",&end);
	for(number=start;number<end;number++)
	{
		originalnum=number;
		while(originalnum!=0)
		{
			originalnum/=10;
			count++;
		}
		originalnum=number;
		while(originalnum!=0)
		{
			rem=originalnum%10;
			result+=pow(rem,count);
			originalnum/=10;
		}
		if((int)result==number)
		{
			printf("\n%d",number);
		}
		count=0;
		result=0;
	}
	getch();
}



