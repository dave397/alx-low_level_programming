#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
#include <string.h>
#include <sys/types.h>
#include <stdbool.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * struct strlist - list of strings
 * @num: the number field
 * @str: a string
 * @next: points to the next node
 */
typedef struct strlist
{
	int num;
	char *str;
	struct strlist *next;
} list_t;

/**
 *struct globalvar - contains all variable so it can be accessed globally
 *@argc: the argument count
 *@av: an array of strings generated from arg
 *@arg: a string generated from getline containing arguements
 *@readfd: the fd from which to read line input
 *@path: a string path for the current command
 *@env: linked list local copy of environ
 *@environ: custom modified copy of environ from LL env
 *@status: the return status of the last exec'd command
 *@fname: file for program
 *@line_count: the error count
 *@alias: the alias node
 */
typedef struct globalvar
{
	int argc;
	char **av;
	char *arg;
    int readfd;
	char *path;
	list_t *env;
    char **environ;
	int status;
	char *fname;
	unsigned int line_count;
	list_t *alias;
} global_t;

#define INIT {0, NULL, NULL, 0, NULL, NULL, NULL, 0, NULL, 0, NULL }

/**
 *struct inbuilt - contains in built functions
 *@name: the in built name
 *@fn: the function to be called
 */
typedef struct inbuilt
{
	char *name;
	int (*fn)(global_t *);
} inbuilt_t;



int simple_shell(global_t *, char **);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);
int _strncmp(char *s1, char *s2, size_t n);
char **strtok(char *str, char *d);
int is_delim(char, char *);
char *starts_with(const char *, const char *);
void free_var(global_t *, int);


int _strlen(char *);
char *_strcat(char *, char *);
void ffree(char **);
char *convert_number(long int, int, int);
void free_list(list_t **);

void flush_global(global_t *);
void free_globals(global_t *var, int all);
void set_globals(global_t *var, char **av);
int find_builtin(global_t *);
void find_cmd(global_t *);
void fork_cmd(global_t *);
int replace_alias(global_t *);
int replace_vars(global_t *);
char *_search(char *holder, char *find);

list_t *node_starts_with(list_t *, char *, char);

int is_cmd(global_t *, char *);
char *dup_chars(char *, int, int);
char *find_path(global_t *, char *, char *);
void _ender(char *code);
int _atoi(char *s);

#endif