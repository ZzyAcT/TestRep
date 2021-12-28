#include"pcpy.h"

int processcreate(const char* SFile,const char* DFile,int pronum,int blocksize)
{
	int flag;
	pid_t pid;
	pid_t zpid;
	int pos;
	char cbsize[10];
	char cpos[10];	
	for(flag = 0 ; flag<pronum;flag++)
	{
		pid = fork();
		if(pid == 0)
		   break;
	}
	
	if(pid > 0)
	{
		printf("父进程正常运行\n");
		while((zpid = waitpid(-1,NULL,WNOHANG)) != -1)
		{
			if(zpid > 0)
			{
				printf("成功回收僵尸进程%d",zpid);

			}
		}
	
	}
  	else if(pid == 0)
	{
		pos = flag*blocksize;
		sprintf(cpos,"%d",pos);
		sprintf(cbsize,"%d",blocksize);
		
		execl("/home/colin/0322晚班/pcpy/Copy","Copy","./Copy",SFile,DFile,cbsize,cpos);
	}
	else
	{
		printf("进程创建失败");
		exit(-1);
	}
	
}