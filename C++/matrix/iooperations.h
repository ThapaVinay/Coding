#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;
void print_gap(float a)
{
    int max=5;
    int count=0;
    if(a<0)
        count++;
    while(a>10)
    {
        count++;
        a/=10;
    }
    for(int i=0;i<max-count;i++)
    {
        cout<<" ";
    }
}
void print_gap(int a)
{
    int max=5;
    float count=0;
    if(a<=0)
        count++;
    while(a!=0)
    {
        count++;
        a/=10;
    }
    for(int i=0;i<max-count;i++)
    {
        cout<<" ";
    }
}
int **input(int n,int m)
{   
    int **a=new int*[n];
    cout<<"Input Element of the matrix -:"<<endl;
    for(int i=0;i<n;i++)
    {
        a[i]=new int[m];
        for(int j=0;j<m;j++)
        {
            cout<<"a["<<i+1<<"]["<<j+1<<"] ->";
            cin>>a[i][j];
        }
        cout<<endl;
    }
    return a;
}

void disp_cofactor(int **a,int n)
{
    cout<<"Co-Factor of the given matrix is -:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            print_gap(a[i][j]);
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void disp_inverse(float **a,int n)
{
    cout<<"Inverse of the given matrix is -:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            print_gap(a[i][j]);
            printf("%.2f ",a[i][j]);
        }
        cout<<endl;
    }
}
void disp_product(int **a,int n,int m)
{
    cout<<"Product of the given matrix is -:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            print_gap(a[i][j]);
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void disp_sum(int **a,int n,int m)
{
    cout<<"Sum of the given matrix is -:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            print_gap(a[i][j]);
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void disp_difference(int **a,int n,int m)
{
    cout<<"Difference of the given matrix is -:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            print_gap(a[i][j]);
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void disp_transpose(int **a,int n,int m)
{
    cout<<"Transpose of the given matrix is -:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            print_gap(a[i][j]);
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void disp_matrix(int **a,int n,int m)
{
    cout<<"Default Matrix is -:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            print_gap(a[i][j]);
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void disp_adj(int **a,int n)
{
    cout<<"Co-Factor of the given matrix is -:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            print_gap(a[i][j]);
            cout<<a[i][j]<<setw(2);
        }
        cout<<endl;
    }
}