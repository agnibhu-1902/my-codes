import java.io.*;
class word_freq
   {
       public void main()throws IOException
       {
           BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
           System.out.println("Enter the sentence");
           String st=br.readLine();
           int i,j,k,count=0,c=0,m,n,flag=0;
           char ch;
           String wrd="";
           st=st+" ";
           i=st.length();
           for(j=0;j<i;j++)
           {
               ch=st.charAt(j);
               if(ch==' ')
               count++;
            }
            String arr[]=new String[count];
            int pos=0;
            for(j=0;j<i;j++)
            {
                ch=st.charAt(j);
                if(ch!=' ')
                wrd+=ch;
                else
                {
                arr[pos++]=wrd;
                wrd="";
            }
          
            }
            for(m=0;m<pos;m++)
            {
                flag=0;
                for(n=0;n<m;n++)
                {
                    if(arr[m].compareTo(arr[n]) == 0)
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                c=1;
                for(k=m+1;k<pos;k++)
                { 
                    if(arr[m].compareTo(arr[k]) == 0)
                    c++;
                    }
                    System.out.println(arr[m]+" => "+c);
                }
            }
        }
    }