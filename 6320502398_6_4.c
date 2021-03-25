#include<stdio.h>
int main()
{
int n,i,q,w,loc=0,loc2=0;
scanf("%d",&n);
int p[n];
for(i=0;i<n;i++)
{
    p[i]=0;
    scanf("%d %d",&q,&w);
    p[q-1]+=w;
}
int max=0,max1=0;
for (i=0;i<n;i++)
{
    if(max<=p[i])
    {
        loc=i;
        max=p[i];
    }
    if(max<p[i]&&loc!=i);
    {
        loc2=i;
        max1=p[i];
    }
}
    printf("%d %d",loc+1,loc2);
}
