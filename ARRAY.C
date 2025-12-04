//finding average marks of 30 students through array
#include<stdio.h>
	void main(){
	int i;
	int sum,avg=0;
	int marks[30]; //declaration of array
	clrscr();
	for(i=0;i<30;i++){
	printf("enter your marks\n"); // accessing to elements of array
	scanf("%d",&marks[i]);
	}
	for(i=0;i<30;i++){//reading data
	sum=sum+marks[i];
	}
	avg=sum/30;
	printf("average marks is =%d\n",avg);  //displaying average marks
	getche();
	}

