#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "mymath.h"
#include <math.h>
int main(void)
{
	int A0,A1;
	A0=mypow(2,3);
	A1=mymod(9,2);
	printf("This Project will deal with the datas come from the Internet!\n");
	printf("The size of char datatype is : %dbyte\n",sizeof(char));
	printf("Test for the math function:mypow(2,3)=%d\n",A0);
	printf("Test for the math function:mymod(9,2)=%d\n",A1);
	FILE *F=NULL;
	char Data[7]={'0'},i=0;
	int Grade=0;
	//F = fopen("/home/pi/WorkSpace/C/InternetData.txt","w");
	//fwrite("COM 000",7,7,F);
	//fclose(F);
	while(1)
	{
		Grade=0;
		F = fopen("/home/pi/WorkSpace/C/InternetData.txt","r");
	 	fread(Data,7,7,F);
		fclose(F);
		F = NULL;
		for(i=4;i<7;i++)
		{
			Grade += ((int)Data[i]-48)*mypow(2,6-i);
			//printf("Grade is %d\n",Grade);
		}
		switch(Grade)
		{
			case 0: printf("The first User Command!\n"); break;
			case 1: printf("The secon User Comoand!\n"); break;
			case 2: printf("The third User Comoand!\n"); break;
			case 3: printf("The fourt User Comoand!\n"); break;
			case 4: printf("The fives User Comoand!\n"); break;
			default : printf("Wrong Input!Try again!");
		}
		sleep(1);
	}
	return 0;
}
