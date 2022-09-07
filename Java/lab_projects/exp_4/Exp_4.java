class Q1_parent
{
    private int a=10;
    private void change(int a)
    {
        this.a=a;
    }
    void disp()
    {
        System.out.println(a);
    } 
}
class Q1_child extends Q1_parent
{
    int b=10;
    Q1_child()
    {
        disp();
    }
    void enter(int a)
    {
        change(a);
    }
    void enter_direct(int x,int y)
    {
        b=y;
        a=x;
    }
    public static void main(String[]args)
    {
        Q1_child obj=new Q1_child();
        obj.enter(10);
        obj.enter2(20,30);
    }
}
class Player
{

}
class Cricket_player extends Player
{

}
class Football_player extends Player
{

}
class Hockey_player extends Player
{

}
class Exp_4
{
    
}