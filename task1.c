/*Q.1 Write a Program to find all the negative elements from a given 1D array.
For example,
Input:
Enter the array's size: 5

enter array size :- 6
enter count [0]:-1
enter count [1]:-2
enter count [2]:-3
enter count [3]:- -4
enter count [4]:- -5
enter count [5]:- -5

 All neftive elemenats : -4    -5      -5


*/

#include<stdio.h>

main(){
	
	int a[100];
	int i,n;
	
	printf("enter array size :- ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("enter count [%d]:-",i);
		scanf("%d",&a[i]);
		}
		printf("\n All neftive elemenats : -");
		for(i=0; i<n; i++){
			if(a[i]<=0){
				printf("%d\t",a[i]);
			}
		}	
		printf("\n");
}
