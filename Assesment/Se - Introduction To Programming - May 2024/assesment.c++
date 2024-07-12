//Write a program to make multiplication of 2-D Matrix 
#include<stdio.h>
void main()
{
	int i,j,arr[2][2],arr2[2][2],mul[2][2],k;
    printf("------------------Matrix 1 -----------------------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter your array:[%d][%d]",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("[%d][%d]Your Array Is:%d\t",i,j,arr[i][j]);
		}printf("\n");
	}


    printf("------------------Matrix 2 -----------------------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter your array:[%d][%d]",i,j);
			scanf("%d",&arr2[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("[%d][%d]Array is:%d\t",i,j,arr2[i][j]);
		}printf("\n");
	}


    printf("------------------Multiplication -----------------------");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {	
			mul[i][j]=0;
	        for(k=0;k<2;k++)
	        {
	            mul[i][j]+=arr[i][k]*arr2[k][j];
	   		}	
        }
    }printf("\n");
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",mul[i][j]);
        }
		printf("\n");
    }
}