class UserExp extends Exception
{
    String str1;
    UserExp(String str2)
    {
        this.str1=str2;
    }
    public String toString()
    {
        return "Output String : "+str1;
    }
}