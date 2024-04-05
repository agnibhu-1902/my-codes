#include <stdio.h>
int main()
{
    char ch; FILE *fptrin, *fptrout;
    fptrin = fopen("7_input.txt", "r");
    fptrout = fopen("7_output.txt", "w");
    if (!fptrin)
    {
        printf("Cannot open input file!\n");
        return 1;
    }
    if (!fptrout)
    {
        printf("Cannot open output file!\n");
        return 1;
    }
    while (!feof(fptrin))
    {
        ch = fgetc(fptrin);
        if (ch == -1)
            break;
        if (ch >= 'a' && ch <= 'z')
            ch -=32;
        fputc(ch, fptrout);
    }
    fclose(fptrout); fclose(fptrin);
    return 0;
}