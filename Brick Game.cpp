#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcases,playersNumber,players[100],i,j,mid,k;
    cin>>testcases;
    for(k=1; k<=testcases; k++)
    {
        cin>>playersNumber;
        for( j=0; j<playersNumber; j++)
        {
            cin>>players[j];
        }
        int temp;
        for( i=0; i<playersNumber-1; i++)
        {
            for(j=0; j<playersNumber-i-1; j++)
            {

                if(players[j]>players[j+1])
                {
                    temp=players[j];
                    players[j]=players[j+1];
                    players[j+1]=temp;
                }
            }
        }
        mid=playersNumber/2;

        cout<<"Case "<<k<<": "<<players[mid]<<endl;;
    }
    /* for(int j=0;j<playersNumber;j++)
        {
            cout<<players[j];
        }
    */

    // int mini=players[0];

    /*for( j=0;j<playersNumber;j++)
    {
        cout<<players[j]<<" ";
    }*/


    return 0;
}
