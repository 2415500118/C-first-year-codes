#include<stdio.h>
void main ()
{ 
int a,b,c,temp;

scanf("%d",&a);

scanf("%d",&b);

scanf("%d",&c);

printf("before swapping:\n a:%d b:%d c:%d",&a,&b,&c);

	temp=a;
	a=b;
	b=c;
	c=temp;
	
printf("after swapping:\n a:%d b:%d c:%d",&a,&b,&c);

}
