#include<stdio.h>
int main()


{
    int n,zr=0,on=0,tw=0,thr=0,temp,fr=0,fv=0,sx=0,svn=0,egt=0,nin=0,i,j,t,mod;

    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        zr=0,on=0,tw=0,thr=0,temp,fr=0,fv=0,sx=0,svn=0,egt=0,nin=0;
        scanf("%d",&n);
        for(j=1; j<=n; j++)
        {
             temp=j;
            while(temp!=0)
            {

                mod=temp%10;
                temp=temp/10;
                if(mod==0)
                    zr++;
                if(mod==1)
                    on++;
                if(mod==2)
                    tw++;
                if(mod==3)
                    thr++;
                if(mod==4)
                    fr++;
                if(mod==5)
                    fv++;
                if(mod==6)
                    sx++;
                if(mod==7)
                    svn++;
                if(mod==8)
                    egt++;
                if(mod==9)
                    nin++;
            }

        }
        printf("%d %d %d %d %d %d %d %d %d %d\n",zr,on,tw,thr,fr,fv,sx,svn,egt,nin);
    }


    return 0;
}
