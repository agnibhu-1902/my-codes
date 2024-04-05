#include <stdio.h>
int main()
{
    int ch; FILE *fptrin, *fptrout;
    fptrin = fopen("8_input.txt", "r");
    if (!fptrin)
    {
        printf("Cannot open input file!\n");
        return 1;
    }
    fptrout = fopen("8_output.txt", "a");
    if (!fptrout)
    {
        printf("Cannot open output file!\n");
        return 1;
    }
    while(!feof(fptrin))
    {
        ch = fgetc(fptrin);
        if (ch == -1)
            break;
        fputc(ch, fptrout);
    }
    fclose(fptrout); fclose(fptrin);
    return 0;
}