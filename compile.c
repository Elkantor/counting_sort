#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char* compiler          = "gcc";
    char* warnings          = " -Wall";
    char* optimization      = "-O2";
    char* executable        = "counting_sort.exe";
    char* dependencies[]    = { "" };
    char* libs[]            = { "" };

    remove(executable);

    char command_line[100] = {0};
    strcat(command_line, compiler);
    strcat(command_line, " main.c ");
    strcat(command_line, warnings);
    strcat(command_line, " ");
    strcat(command_line, optimization);
    strcat(command_line, " ");
    strcat(command_line, "-o ");
    strcat(command_line, executable);

    printf("command: %s\n", command_line);
    system(command_line);
    return 0;
}