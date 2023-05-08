#ifndef MAIN_H
#define MAIN_H

/*
 * Desc: The header file containing prototypes of functions
 *       written in the file directory.
 */

#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);

#endif /* MAIN_H */
