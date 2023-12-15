#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include  <unistd.h>
#include <stdio.h>
#include <error.h>
#include <fcntl.h>
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <ctype.h>
#include <sys/wait.h>

extern char **environ;
void freemem(char **arg);
void _exits(char **arg, char *cmd);
void _execve(char **args, char *echo, char *cmd, char **av);
void _writechar(char c);
void _writechar1(char c);
void printno1(long num);
void printno2(long num);

#endif
