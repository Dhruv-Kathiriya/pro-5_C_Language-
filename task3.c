/*
Q.3 Write a Program to find the transpose matrix of a given 2D array.
For example,
Input:
Enter the array's row size: 3
Enter the array's column size: 3

Enter the number of rows: 3
Enter the number of columns: 3
Enter the elements of the array:1
Enter the elements of the array:2
Enter the elements of the array:3
Enter the elements of the array:4
Enter the elements of the array:5.



Enter the elements of the array:6
Enter the elements of the array:7
Enter the elements of the array:8
Enter the elements of the array:9
The transpose matrix is:
1 4 7
2 5 8
3 6 9

*/
#include <stdio.h>

int main() {
    int r,c,i,j;
    int a[100][100];
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    
    for (i = 0; i<r; i++) {
        for (j = 0; j<c; j++) {
        	printf("Enter the elements of the array:");
            scanf("%d",&a[i][j]);
        }
    }
    int trans[c][r];
    
    for (i=0; i<c; i++) {
        for (j=0; j<r; j++) {
            trans[i][j] = a[j][i];
        }
    }

   printf("The transpose matrix is:\n");
    for (i=0; i<c; i++) {
        for (j=0; j<r; j++) {
        	 
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }

}
