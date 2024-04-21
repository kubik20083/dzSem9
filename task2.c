// Задача 2. Заменить a на b

#include <stdio.h>
#define LINE 1000

int main(int argc, char const *argv[])
{
    char *input_fn = "in.txt";
    char *output_fn = "out.txt";
    char line[LINE];
    FILE *fp;
    fp = fopen(input_fn, "r");
    fscanf(fp, "%[^\n]", line);
    fclose(fp);
    char c;
    int i = 0;
    while ((c = line[i]) != '\0')
    {
        if ((c == 'a') || (c == 'A'))
            line[i] += 1;
        else if ((c == 'b') || (c == 'B'))
            line[i] -= 1;
        i++;
    }
    fp = fopen(output_fn, "w");
    fprintf(fp, "%s", line);
    fclose(fp);
    return 0;
}
