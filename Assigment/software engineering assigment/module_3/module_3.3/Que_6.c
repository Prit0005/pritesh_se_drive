/* WAP to make addition, Subtraction and multiplication of two matrix using
2-D Array */
#include <stdio.h>
void main()
{
    int choice, arr1[2][2], arr2[2][2], i, j, result[2][2], k;
    printf("1.addition\n");
    printf("2.substraction\n");
    printf("3.multiplication\n");
    printf("enter your choice:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("Enter your first matrix:");
                scanf("%d", &arr1[i][j]);
            }
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("Enter your second matrix:");
                scanf("%d", &arr2[i][j]);
            }
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                result[i][j] = arr1[i][j] + arr2[i][j];
                printf("[%d][%d]result is:%d", arr1[i][j], arr2[i][j], result[i][j]);
            }
            printf("\n");
        }
        break;
    case 2:
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("Enter your first matrix:");
                scanf("%d", &arr1[i][j]);
            }
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("Enter your second matrix:");
                scanf("%d", &arr2[i][j]);
            }
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                result[i][j] = arr1[i][j] - arr2[i][j];
                printf("[%d][%d]result is:%d", arr1[i][j], arr2[i][j], result[i][j]);
            }
            printf("\n");
        }
        break;
    case 3:
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("Enter your first matrix:");
                scanf("%d", &arr1[i][j]);
            }
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("Enter your second matrix:");
                scanf("%d", &arr2[i][j]);
            }
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 2; k++)
                {
                    result[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("result is:%d", result[i][j]);
            }
            printf("\n");
        }
        break;
    default:
        printf("Invalid number !!!!");
        break;
    }
}