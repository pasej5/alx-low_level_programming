#ifndef MAIN_H
#define MAIN_H


#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


void check97(int argc);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void check98(ssize_t check, char *file, int fd_from, int fd_to);
void check100(int check, int fd);
int main(int argc, char *argv[]);


#endif
