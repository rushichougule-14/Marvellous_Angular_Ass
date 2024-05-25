#include<stdio.h>
#include<stdlib.h>


int main()
{
	char Fname [20];
	int fd = 0;

	printf("Enter the File name that you want to create:");
	scanf("%s",Fname);

	fd = creat(Fname,0777);

	if(fd == -1)
	{
		printf("Unalble to create File\n");
	}

	else
	{
		printf("File is successfully created with FD %d\n",fd );
	}
}