#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <fcntl.h>

/* function prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int appent_text_to_file(const char *filename, char *text_content);

#endif /* ifndef MAIN_H */
