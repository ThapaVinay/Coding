import java.util.Scanner;

class Square
{
    Square()
    {
        Scanner sc=new Scanner(System.in);
        int size=10;
        int arr[]=new int [size];
        System.out.println("Enter any 10 integers ->");
        for(int i=0;i<size;i++) arr[i]=sc.nextInt();
        sqr(arr,size);
        sum(arr,size);
    }
    void sqr(int a[],int n)
    {
        System.out.println("Square of values in array -:");
        for(int i=0;i<n;i++)
            System.out.println(a[i]+" -> "+a[i]*a[i]);
    }
    void sum(int a[],int n)
    {
        int cal=0;
        for(int i=0;i<n;i++) cal+=a[i];
        System.out.println("Sum of all Values -> "+cal);
    }
    public static void main(String args[])
    {
        Square obj=new Square();
    }
}