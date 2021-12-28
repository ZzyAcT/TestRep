#include"pcpy.h"
	
int check_arg(const char* SFile,int argc,int pronum)
{
	if(access(SFile,F_OK) != 0)
	{
		printf("源文件错误\n");
		exit(0);
	}	
	
	if(argc < 3)
	{
		printf("命令行参数输入错误\n");
		exit(0);
	}
	
	if(pronum <= 0 || pronum >=100)
	{
		printf("你要的进程太多了，少要点\n");
		exit(0);
	}
}