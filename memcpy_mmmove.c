/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str1[20]="dipa";
	char str2[20];
	memcpy(str2,str1,sizeof(str1)+1);
		printf("final string=%s",str2);
}*/

/*#include <stdio.h>
#include <string.h>

int main () {
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}*/


//userdefined fun of memcpy and memmove
//
//
/*#include<stdio.h>
#include<stdlib.h>

void usr_memcpy(void *dest,void *src,int n)
{
	char *s= (char *)dest;
	char *s1= (char *)src;

	for(int i=0;i!=strlen(src);i++)
	{
	s[i]=s1[i];
		
	}
	printf("final=%s",dest);
}
int main()
{
	   char dest[] = "oldstring";
   const char src[]  = "newstring";
   usr_memcpy(dest,src,sizeof(src)+1);
   return 0;
}*/

//memmove user define fun
//

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// A function to copy block of 'n' bytes from source
// address 'src' to destination address 'dest'.
void myMemMove(void *dest, void *src, size_t n)
{
// Typecast src and dest addresses to (char *)
char *csrc = (char *)src;
char *cdest = (char *)dest;

// Create a temporary array to hold data of src
char *temp = (int *)malloc(sizeof(int));//char[n];

// Copy data from csrc[] to temp[]
for (int i=0; i<n; i++)
    temp[i] = csrc[i];

// Copy data from temp[] to cdest[]
for (int i=0; i<n; i++)
    cdest[i] = temp[i];

free(temp);
}

// Driver program
int main()
{
char csrc[100] = "Geeksfor";
myMemMove(csrc+5, csrc, strlen(csrc)+1);
printf("%s", csrc);
return 0;
}
