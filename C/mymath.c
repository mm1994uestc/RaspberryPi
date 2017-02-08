#include <stdio.h>
#include "mymath.h"
int mypow(int a,int b)
{
	int i=0,Res=1;
	for(i=0;i<b;i++)
	{
		Res *= a;
	}
	return Res;
}
int mymod(int a,int b)
{
	int D=0,Res=0;
	D = (int)(a/b);
	Res = a-D*b;
	return Res;
}
