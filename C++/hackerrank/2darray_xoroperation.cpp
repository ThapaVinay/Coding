#include<iostream>
using namespace std;
int main()
{
    int queries[3];
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>queries[j];
            int array[n][1000],count[1000],lastAnswer=0;
            for(int i=0;i<n;i++) count[i]=0;
            for(int i=0;i<m;i++)
            {
                int idx=(queries[1]^lastAnswer)%n;
                if(queries[0]==1)
            {
                    array[idx][count[idx]++]=queries[2];
                }
                else
                {  
                    lastAnswer=array[idx][queries[2]%count[idx]];
                    if(lastAnswer!=0)
                        cout<<lastAnswer<<endl;
                }
            }
        }
    }
    //n=size of new array
  /*  int array[n][1000],count[1000],lastAnswer=0;
    for(int i=0;i<n;i++) count[i]=0;
    for(int i=0;i<m;i++)
    {
        int idx=(queries[i][1]^lastAnswer)%n;
        if(queries[i][0]==1)
        {
            array[idx][count[idx]++]=queries[i][2];
        }
        else
        {  
            lastAnswer=array[idx][queries[i][2]%count[idx]];
            if(lastAnswer!=0)
                cout<<lastAnswer<<endl;
        }
    }
    */
    return 0;
}