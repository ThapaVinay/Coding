#include<iostream>
using namespace std;
int all_poss_out(int size,int arr[][10],int pos,int* count)
{
    if(size==0) return 0;
    for(int i=0;i<size-1;i++)
    {
        *count=*(count)+1;

        cout<<"Count="<<*count<<endl;
        all_poss_out(size-1,arr,pos,count);
    }
    all_poss_out(size-1,arr,pos,count);
    return 0;
}
int main()
{
    int number;
    cout<<"Enter the number (any positive number) ->";
    cin>>number;
    int total_no[10000][10];
    int pos=0;
    int size=0; 
    int i=0;
    for (i=number;i!=0;i/=10) size++;
    int temp_number=number;
    for(i=0;i<size;i++,temp_number/=10) total_no[pos][i]=temp_number%10; 
    cout<<total_no[0]<<" "<<size<<" "<<pos;
    int count=1;
    all_poss_out(size,total_no,pos,&count);
    //cout<<"count"<<count<<endl;
    return 0;
}