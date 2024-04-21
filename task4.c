// Задача 4. Удалить повторяющиеся символы

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char in[] = "i.txt";
    char out[] = "o.txt";
    FILE *f_in = fopen(in, "r");
    FILE *f_out = fopen(out, "w");
    char str1[1002];
    int j;
    char c;
    int i = -1;
    fgets(str1, 1000, f_in);
    while (str1[++i] != '\0')
    {
        c = str1[i];
        j = i;
        while (str1[++j] != '\0')
            if (str1[j] == c)
                str1[j] = ' ';
    }
    i = -1;
    while (str1[++i] != '\0')
        if (str1[i] != ' ')
            fprintf(f_out, "%c",
                    str1[i]);
    fclose(f_in);
    fclose(f_out);
    return 0;
}
