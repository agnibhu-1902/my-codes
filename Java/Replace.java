import java.util.*;
class Replace
{
    static void main(){
         Scanner sc=new Scanner(System.in);
        String s=sc.next();
    String sword=sc.next();
    String rword=sc.next();
    while(true)
    {
        int l=s.indexOf(sword);
        if(l==-1)
        {
            break;
        }
        String t=s.substring(0,l)+rword+s.substring(l+sword.length());
        s=t;
    }
    System.out.println(s);
}
}