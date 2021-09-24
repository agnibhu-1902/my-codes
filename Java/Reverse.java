class Reverse
{
    String s="Hello",revstr="";
    void rec(int n)
    {
        if(n<s.length())
        {
            revstr+=s.charAt(n);
            rec(n+1);
        }
    }
}