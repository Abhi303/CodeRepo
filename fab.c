#include<stdio.h>
int fab(int n)
{
	static s=0;
	if(n==0)
	return 0;
	if(n==1)
	return 1;
	return (s+fab(n-1)+fab(n-2));
}
int main()
{
	int n;
	scanf("%d",&n);
	n=fab(n);
	printf("%d",n);
	return 0;
}
