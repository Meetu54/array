#include<stdio.h>
main(){
	int n;
	int a[n];
	int b[n];
	int sum[n];
	int i;
	
	for(i=0; i<1; i++){
		
	
		
		printf("Enter value 1:");
		scanf("%d",&a[i]);
		
	}
	for(i=0; i<1;i++){
		
		printf("Enter value 2:");
		scanf("%d",&b[i]);
		
	}
	for(i=0; i<n; i++){
		sum[i]+=a[i]+b[i];
		
	}
	printf("Enter sum :");
	for(i=0; i<n; i++){
		printf("%d",sum[i]);
	}
}
