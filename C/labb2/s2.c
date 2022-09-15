#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool is_number(char *str){

    if (str[0] == '-')
    {
        for (int i = 1; i < strlen(str); i++)
        {
        if (false == isdigit(str[i]))
        {
            return false;
        }
    }
    }
        for (int i = 1; i < strlen(str); i++)
        {
        if (false == isdigit(str[i]))
        {
            return false;
        }
    }
    return true;
}

int main(int argc, char *argv[]){

    char *arg1 = argv[1];
    int a = atoi(arg1);

    if (argc > 1 && is_number(argv[1])){
        printf("%s is a number\n", argv[1]);
    }
    else{
        if (argc > 1){
            printf("%s is not a number\n", argv[1]);
        }
        else{
            printf("Please provide a command line argument!\n");
        }
    }

}
