#include<stdio.h>
int main()
{
int n,i,j,s1=0,s2=0;
scanf("%d",&n);
char number[2][n];
for(i=0;i<2;i++)
{
        scanf("%s",number[i]);
}
    for(j=0;j<n;j++)
    {
        if(number[0][j]==number[1][j])
        {
          s1++;
        }
        else
        {
            s2++;
        }
    }
    printf("%d %d",s1,s2);
}


