#include"pcpy.h"

int main(int argc,char ** argv)
{
	int pos = atoi(argv[4])
	int rdsize;
	int blocksize = atoi(argv[3])
	char buffer[blocksize];
	bzero(buffer,sizeof(buffer));
	int sfl = open(argv[1],O_RDONLY);
	int dfl = open(argv[2],O_WRONLY | O_CREAT.0664);
	
	lseek(sfl,pos,SEEK_SET);
	lseek(dfl,pos,SEEK_SET);
	
	printf("当前拷贝的进程%d,拷贝的位置%d,拷贝的大小%d",getpid(),pos,blocksize);
	
	rdsize = read(sfl,buffer,blocksize);

	write(dfl,buffer,blocksize);
	
	printf("拷贝完成")；
	return 0;
}