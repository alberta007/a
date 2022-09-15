#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool is_number(char *str){

    int i = 0;
    if (str[0] == '-')
    {
        i = 1;
    }

    for (i; i < strlen(str); i++)
    {
    if (false == isdigit(str[i]))
    {
        return false;
    }
    }
    return true;
}

int main(int argc, char *argv[])
{
    char *arg1 = argv[1];
    int a = atoi(arg1);
    int c = a;

    char *arg2 = argv[2];
    int b = atoi(arg2);
    int d = b;

    if ((is_number(argv[1]) && is_number(argv[2])) != true)
        {
            printf("Insert numbers you doofus!\n");
            return 0;
        }
    if (a <= 0 || b <= 0){
        printf("Insert positive integers\n");
        return 0;
    }

    while (true){
    if (a == b)
    {
        printf("gcd(%d, %d) = %d\n", c, d, a);
        return 0;
    }
    else if (a > b)
    {
        a = a - b;
    }
    else if (a < b)
    {
        b = b - a;
    }

    }
}
