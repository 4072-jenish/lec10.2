#include<stdio.h>
void  sum(){
	int a[100];
	int i,j,e,n,A=0;
	
	printf("Enter Array size");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		printf("Enter Element:-");
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++){
		
		printf("%d\n",a[i]);
	  A += a[i];
		
	}
 printf("Avrage of Array %d",A);
}

main(){
	  sum();
}