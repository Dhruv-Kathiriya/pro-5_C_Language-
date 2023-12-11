
/*
Q.4 Write a Program to print and find the sum of all elements of a given row & column from a 2D array.
For example,
Input:
Enter the array's row size: 3
Enter the array's column size: 3

Enter array's elements:
a[0][0] = 2
a[0][1] = 7
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 9
a[2][2] = 6

Output:
Enter row number: 0
Elements of row 0: 2, 7, 1
The sum of a row 0: 10

Enter column number: 2
Elements of column 2: 1, 4, 6
The sum of column 2: 11

*/
#include<stdio.h>

void main(){

int a[100][100];
int i,j,n,sum=0,row,col;




printf("Entr array size = ");
scanf("%d",&n);

for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("Enter count [%d][%d]",i,j);
scanf("%d",&a[i][j]);
}
printf("\n");
}
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%d",a[i][j]);
}
printf("\n");
}

    printf("Entr row size = ");
scanf("%d",&row);

printf("Entr col size = ");
scanf("%d",&col);

for(i=0;i<n;i++){
for(j=0;j<n;j++){

if(i==row || j==col){
sum = sum +a[i][j];

}
}
printf("\n");
}
printf("%d",sum);
}

