#ifndef SHELL
#define SHELL

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <wait.h>
#include <fcntl.h>
#include <dirent.h>
#include <signal.h>

/* function prototypes */



extern char **environ;

/* Shell Functions */
char **str_to_2d(char *buff_str, char del[]);
void exe_new_process(char **args);
char *status_checker(char **args);
char *_getenv(const char *name);
char **cp_environ(void);
char *_is_ascii(char *buffer);
char *sep_check(char *buffer);

/* Basic Functions */
int _putchar(char c);
int p_text(char *text);

/* Strings Functions */
char *_strdup(char *str);
int _strcmp(const char *s1, const char *s2);
char *_strcat(char *s1, char *s2);
unsigned int _strlen(char *s);

#endif
