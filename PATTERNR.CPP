#include<stdio.h>
#include<conio.h>
void main(){
int i,j,n,count;
clrscr();
printf("\n Enter rows");
scanf("%d",&n);
	for(i=n;i>=1;i--){
	       //n=n-1;
	       // count=1;
		for(j=1;j<=i;j++){
			printf("%d",j);
		       //count++;
		}
	printf("\n");
	}
	 getch();
}
