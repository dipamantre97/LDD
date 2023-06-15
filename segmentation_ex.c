//When we are trying to access memory which is not available causing segmentation fault (segfault error)
//
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=10;
	int *p=(int*)malloc(sizeof(int));
	*p=a;
	printf("value of a=%d,value of p=%d\n",a,*p);
	free(p);
	*p=a;
	printf("value of a=%d,value of p=%d\n",a,*p);
return 0;
}
