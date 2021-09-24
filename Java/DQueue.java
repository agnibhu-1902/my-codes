import java.util.*;
class DQueue
{
    int ele[];
    int front,rear,cap;
    DQueue(int max)//Constructor
    {
        cap=max;
        front=rear=-1;ele=new int[cap];
    }
    boolean isEmpty()
    {
        return front==-1;
    }
    void pushfront(int no)
    {
        if(front==-1)
        {
            front=rear=0;
            ele[front]=no;
        }
        else if(front==0)
        System.out.println("Insertion from front end not possible");
    }
    void pushrear(int no)
    {
        if(rear==-1)
        {
            front=rear=0;
            ele[rear]=no;
        }
        else if(rear+1<ele.length)
        ele[++rear]=no;
        else
        System.out.println("Overflow");
    }
    int popfront()
    {
        int elem;
        if(isEmpty()==true)
        return -999;
        else
        {
            elem=ele[front];
            if(front==rear)
            front=rear=-1;
            else
            rear=-1;
            return elem;
        }
    }
    int poprear()
    {
        int elem;
        if(isEmpty()==true)
        return -999;
        else
        rear--;
        return ele[rear];
    }
    public void display()
    {
        for(int i=0;i<ele.length;i++)
        System.out.print(ele[i]+" ");
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter capacity");
        int cap=sc.nextInt();
        DQueue z=new DQueue(cap);
        while(true)
        {
            System.out.println("\nMenu\n1.Insert at front\n2.Insert at end\n3.Remove from front\n4.Remove from end\n5.Display\n6.Exit\n");
            System.out.println("Enter choice");
            int ch=sc.nextInt();
            System.out.println();
            switch(ch)
            {
                case 1:
                    System.out.println("Enter a number");
                    int no=sc.nextInt();
                    z.pushfront(no);
                    break;
                case 2:
                    System.out.println("Enter a number");
                    no=sc.nextInt();
                    z.pushrear(no);
                    break;
                case 3:
                    z.popfront();
                    break;
                case 4:
                    z.poprear();
                    break;
                case 5:
                    z.display();
                    break;
                case 6:
                    System.exit(1);
                    break;
                default:
                    System.out.println("Invalid choice");
            }
        }
    }
}