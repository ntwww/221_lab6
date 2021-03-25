#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    char q[100][100],w[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",q[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(q[i],q[j])>0)
            {
                strcpy(w,q[i]);
                strcpy(q[i],q[j]);
                strcpy(q[j],w);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s\n",q[i]);
    }
}
