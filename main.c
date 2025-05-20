#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char stringTokenizer(char*);
char pwd();

int
main()
{
    char* input = malloc(256);

    while (strcmp(input, "exit") != 0) {
        scanf("%255s", input);
        if (strcmp(input, "pwd") == 0) {
            char* location = malloc(256);
            getcwd(location, 256);
            printf("%s\n", location);
            free(location);
        }
        if (strcmp(input, "cd") == 0) {
            chdir(getenv("HOME"));
        }
    }
}
