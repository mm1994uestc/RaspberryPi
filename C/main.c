#include <stdio.h>
#include <unistd.h>

int mypow(int a,int b);

int main(void)
{
	printf("This Project will deal with the datas come from the Internet!\n");
	printf("The size of char datatype is : %dbyte\n",sizeof(char));
	FILE *F;
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
		F = fopen("/home/pi/WorkSpace/C/InternetData.txt","w+");
		fclose(F);
		//printf("%c\n",Data[0]);
		//printf("%c\n",Data[1]);
		//printf("%c\n",Data[2]);
		//printf("%d\n",(int)Data[4]-48);
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
int mypow(int a,int b)
{
	int i=0,Res=1;
	for(i=0;i++;i<b)
	{
		Res *= a;		
	}
	return Res;
}
