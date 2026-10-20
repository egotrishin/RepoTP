#include <stdio.h>

int third(int a)
{
	a *= a;
	a *= a;
	return a;
}	

int main()
{
	int a;
	printf("In...");
	scanf("%d",&a);
	printf("%d", third(a));
	return 0;
}	
