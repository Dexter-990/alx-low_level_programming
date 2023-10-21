#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void copier(char *src, char *dest);
void _printerror(int status, char *filename);
void closeElf(int elf);
void printType(unsigned int e_type, unsigned char *e_ident);
void printEntry(unsigned long int e_entry, unsigned char *e_ident);
void printAbi(unsigned char *e_ident);
void printVersion(unsigned char *e_ident);
void printData(unsigned char *e_ident);
void printMagic(unsigned char *e_ident);
void checkElf(unsigned char *e_ident);
#endif
