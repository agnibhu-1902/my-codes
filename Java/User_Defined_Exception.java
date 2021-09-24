public class User_Defined_Exception
{
    void compute(String s)throws UserExp
    {
        throw new UserExp(s);
    }
    public static void main(String args[])
    {
        try
        {
            User_Defined_Exception ob=new User_Defined_Exception();
            ob.compute("Hello World!");
        }
        catch(UserExp e)
        {
            System.out.println(e);
        }
    }
}