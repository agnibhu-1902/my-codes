class Node
{
    protected int data;
    protected Node next;
    public Node()
    {
        next=null;data=0;
    }
    public Node(int d,Node n)
    {
        data=d;next=n;
    }
}//End of Node class