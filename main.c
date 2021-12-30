#include <stdio.h>
int main()
{
    int i,j,a[9],n=0,p;
    printf("\n enter the matrix:-");
    printf("\n");
    for(i=1;i<4;i++)
    {
        for(j=1;j<4;j++)
        {
            printf("element No:%d%d:",i,j);
            
            scanf("%d",&a[n]);
            n++;
            
        }
    }
   

    
    printf("\n\t\t GIVEN MATRIX IS:");
    printf("\n\n");
    printf("%d",a[0]);printf("\t");
    printf("%d",a[1]);printf("\t");
    printf("%d",a[2]);
    printf("\n");
    printf("%d",a[3]);printf("\t");
    printf("%d",a[4]);printf("\t");
    printf("%d",a[5]);
    printf("\n");
    printf("%d",a[6]);printf("\t");
    printf("%d",a[7]);printf("\t");
    printf("%d",a[8]);
    int q,r,det;
    p=a[0]*((a[4]*a[8])-(a[5]*a[7]));
    q=-a[1]*((a[3]*a[8])-(a[5]*a[6]));
    r=a[2]*((a[3]*a[7])-(a[4]*a[6]));
    det=p+q+r;
    /*printf("\n");
    printf("\n%d\n%d\n%d",p,q,r);*/
    printf("\n\n\tDETERMINANT:%d",det);
    if(det==0)
    {
        printf("\n\nINVERSE OF THE GIVEN MATRIX IS NOT POSSIBLE");
    }
    else
    {
        int s,t,u,v,w,x;
        p=((a[4]*a[8])-(a[5]*a[7]))/det;
        q=-((a[3]*a[8])-(a[5]*a[6]))/det;
        r=((a[3]*a[7])-(a[4]*a[6]))/det;
        s=-((a[1]*a[8])-(a[2]*a[7]))/det;
        t=((a[0]*a[8])-(a[2]*a[6]))/det;
        u=-((a[0]*a[7])-(a[1]*a[6]))/det;
        v=((a[1]*a[5])-(a[2]*a[4]))/det;
        w=-((a[0]*a[5])-(a[2]*a[3]))/det;
        x=((a[0]*a[4])-(a[1]*a[3]))/det;
        
        printf("\n");
        printf("\n\tINVERSE OF THE GIVEN MATRIX IS:\n\n");
        printf("%d",p);printf("\t");
        printf("%d",s);printf("\t");
        printf("%d",v);
        printf("\n");
        printf("%d",q);printf("\t");
        printf("%d",t);printf("\t");
        printf("%d",w);
        printf("\n");
        printf("%d",r);printf("\t");
        printf("%d",u);printf("\t");
        printf("%d",x);
    }
    printf("\n");
    printf("\n\n");
    return 0;
}
