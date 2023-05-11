//Program to print cube and sum of cube of first ten natural number
#include"stdio.h"
#include"conio.h"
void main()
{
	int a,b;
	clrscr();
	a=1;
	b=0;
	while(a<=10)
	{
	    textcolor(a);
	    cprintf("\ncube of %d = %d",a,a*a*a);
	    b+=(a*a*a);
	    a++;	   	
}
printf("\nsum of cube = %d",b);
getch();
}
