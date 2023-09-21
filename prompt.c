#include "main.h"
#include "shell.h"

/**
 * main - a program to check a prompt
 * print_prompt1: prints "$" as a prompt
 * print _prompt2: printed when enter a multi-line command
 * Return: void
 */

void print_prompt1(void)
{
    fprintf(stderr, "$ ");
}

void print_prompt2(void)
{
    fprintf(stderr, "> ");
}
