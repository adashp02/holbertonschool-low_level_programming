#include <stdio.h>
#include <unistd.h> 
#include <string.h> 
#include "main.h"

/**
 * main - print a string usig printf
 *
 * Return: 0 is a sign of success
 */
int main(void)
{
	int file_descriptor = STDOUT_FILENO; 
    	const char* message = "_putchar\n"; 
    	size_t message_length = strlen(message); 
    	write(file_descriptor, message, message_length); 
 
    return 0; 
} 

