#include<stdio.h>
int main()
{
    int i,n,arr[1500]= {1},t2=0,t3=0,t5=0,tmp;
    for(i=1; i<1500; i++)
    {
        while(arr[t2]*2<=arr[i-1])
            t2++;
        while(arr[t3]*3<=arr[i-1])
            t3++;
        while(arr[t5]*5<=arr[i-1])
            t5++;

        tmp=arr[t2]*2;
        if(arr[t3]*3<tmp)
            tmp=arr[t3]*3;
        if(arr[t5]*5<tmp)
            tmp=arr[t5]*5;
        arr[i]=tmp;
    }
    printf("The 1500'th ugly number is %d.\n",arr[1499]);

    return 0;

}
