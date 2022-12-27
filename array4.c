#include<stdio.h>
main()
{
	int n;
	
		printf("enter value: ");
		scanf("%d",&n);
	
		int i;
		int a[n];
		int sum=0;
		 
			for(i=0;i<n;i++){
				
				printf("enter the value: ");
				scanf("%d",&n);
				sum=sum+a[n];
			}
		
		printf("%d",sum);
		
}
