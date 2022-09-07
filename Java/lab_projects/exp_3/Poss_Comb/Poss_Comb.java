import java.util.Scanner;

class Poss_Comb
{
    int count=0,per_size=0;
    boolean check=true;
    int arrayb[];
    Scanner sc=new Scanner(System.in);
    int a[]=new int[20];
    int n=3,size=3;
    int add(int a[])
    {
        int total=0,mul=1;
        for(int i=0;i<size;i++)
        {
            total+=a[i]*mul;
            mul*=10;
        }
        return total;
    }
    void per(int n)
    {
        if(n>0)
        {
            for(int i=0;i<n;i++)
            {
                per_size++;
                per(n-1);
            }
            per(n-1);
        }
    }
    void comb(int a[],int n)
    {
        int temp_arr[]=new int[size];
        if(n>0)
        {
        for(int i=0;i<n;i++)
        {
            comb(a,n-1);
            int temp=a[n];
            a[n]=a[n-1];
            a[n-1]=temp;
            check=true;
            for(int j=0;j<count;j++)
            {
                if(add(a)==arrayb[j])
                {
                    check=false;
                    break;
                }
            }
            if(check) 
            {
                arrayb[count++]=add(a);
                System.out.print(add(a)+" , ");
            }
                /*   System.out.println("Temp Check a and arrayb ->");
            for(int j=0;j<n;j++) System.out.print(arrayb[j]);
            System.out.println();
            for(int j=0;j<n;j++) System.out.print(a[j]);
            System.out.println();*/
            for(int j=0;j<size;j++) temp_arr[j]=a[j];
            
        }
        comb(temp_arr,n-1);
        }
    }
    Poss_Comb()
    {
        
        System.out.println("Enter total number to form combination -> ");
        n=sc.nextInt();
        size=n;
        System.out.println("Enter any "+n+" no.(0-9 only) -:");
        for(int i=0;i<n;i++)
        {
            a[i]=sc.nextInt();
        }
        System.out.println("All Combination ->");
        System.out.print(add(a)+" , ");
        //System.out.println("\n");
        size=n;
        per(n-1);
        arrayb=new int[per_size+2];
        arrayb[count++]=add(a);
        comb(a,n-1);
    }
    public static void main(String args[])
    {
        Poss_Comb obj=new Poss_Comb();
        System.out.println();
    }
}
