#include<stdio.h>
void  length(){
       int a[100];
	int i,n;
	
	printf("Enter Array size");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		printf("Enter Element:-");
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++){
		
		printf("%d\n",a[i]);
	
		
	}
 printf("langht of Array %d",n);
}
main(){
	  length();
}