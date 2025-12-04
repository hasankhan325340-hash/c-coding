#include<stdio.h>
	void main()
	{
	//distance between two cities in km
	int kilometers,meters,feets,inches,centimeters;
	clrscr();
	printf("enter distance in kilometers\n");
	scanf("%d",&kilometers);
	//conversion to meters
	meters=kilometers*1000;
	printf("in meters=%d\n",meters);
	//conversion to feets
	feets=kilometers*3280;
	printf("in feets=%d\n",feets);
	//conversion to inches
	inches=kilometers*39370;
	printf("in inches=%d\n",inches);
       // conversion to centimeters
       centimeters=kilometers*100000;
       printf("in centimeters=%d\n",centimeters);
       getche();
       }

