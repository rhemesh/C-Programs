#include<stdio.h>

int main()
{
    int n;
    printf("Enter n value:\n");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("# ");
        }
        printf("\n");
    }

    return 0;
}

//to reverse  for(int i=n;i>0;i--)