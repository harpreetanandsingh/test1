#include <stdio.h>
int main()
{
    int i, j, arr[3][5];
    for(i=0; i<3; i++)
    {
        printf("kindly enter the %dth row of elements: ", i+1);
        for (j=0; j<5; j++)
        {   
            scanf("%d", &arr[i][j]);
        }
    }
printf("Following are the columns whose all elements have different values: n ");
    for ( j = 0; j < 5; j++)
    {
        if (arr[0][j] != arr[1][j] && arr[1][j] != arr[2][j] && arr[0][j] != arr[2][j])
        printf("%d\n %d\n %d \n",arr[0][j], arr[1][j], arr[2][j]);    
    }
}