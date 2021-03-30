#ifndef HOLBERTON_H
#define HOLBERTON_H


/**
 * Content of the prototypes of the functions used in project 0x15. C - File I/O
 *           file descriptors.
 *
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>



int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);



#endif /*HOLBERTONH*/
