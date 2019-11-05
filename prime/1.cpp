#include <stdio.h>
int main()
{
	
	int i,n;
	
	for (i=2;i<=1000000;i++)
	
	{
		if(i%2 ==0) continue ;
	for(n=1 ;n<i;n++){
		if(i%n==0)
		printf("%d \t",i);
		
	}	
	
	}
	return 0;
}

