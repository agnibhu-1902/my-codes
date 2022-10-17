class Xyz
{
    static boolean isvowel(char ch)
    {
        switch(ch)
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            return true;
            default:
            return false;
        }
    }
    static void main()
    {
        char ch='a';
        if(isvowel(ch))
        System.out.println("Vowel");
    }
}