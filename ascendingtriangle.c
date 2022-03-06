#include <stdio.h>

int main()
{
    int a;
    printf("istediginiz satir sayisini giriniz :");
    scanf("%d",&a);

    for(int i=1;i<=a;i++)
    {
        for(int k=1;k<=a-i;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(int z=1;z<i;z++)
        {
            printf("%d",i-z);
        }
        printf("\n");
    }

}
