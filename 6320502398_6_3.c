#include<Stdio.h>
int maiin()
int m,n;
scanf(" %d %d ",&m,&n);
int q[m];
for(int i=0;i<m;i++)
{
    q[i]=0;
}
char w[2];
int a,b,c,d;
for(i=0;i<n;i++)
{
    scanf("%s",w);
    if (w[0]=='U')
    {
        scanf("%d %d",&a,&b)
        q[a]=b;
    }
    else if (w[0]=='p')
    {
        scanf("%d %d",&c,&d);
        int sum = q[c]
        for (int j=c+1;j<=d;j++)
        {
            if(q[j>sum])
            {
                sum=q[j]
            }
        }
        printf("%d\n",sum);

    }
}
