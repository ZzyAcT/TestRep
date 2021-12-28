#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<sys/types.h>

int block(const char* SFile,int pronum);
int check_arg(const char* SFile,int argc,int pronum);
int processcreate(const char* SFile,const char* DFile,int pronum, int blocksize);
