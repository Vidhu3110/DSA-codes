#include <stdio.h>
int main()
{

    int n1,n2,n3;
    scanf("%d",&n1);
    int a[1000],b[1000],c[1000];
    for(int i=0;i<n1;i++)
    {
       scanf("%d",&a[i]);
       c[i]=a[i];
    }
    int k=n1;
    scanf("%d",&n2);
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
        c[k]=b[i];
        k++;
    }
    n3 = n1+n2;
    for(int i=0;i<n3;i++)
    {
        int temp;
        for(int j=i+1; j<n3 ;j++)
        {
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }

    for(int i=0 ; i<n3 ; i++)
    {
        printf(" %d ",c[i]);
    }
    return 0;
}
