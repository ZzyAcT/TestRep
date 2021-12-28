#include"pcpy.h"

int block(const char* SFile,int pronum)
{
	int sfl = open(SFile,O_RDONLY);
	int rsize = lseek(sfl,0,SEEK_END);
	if(rsize%pronum == 0)
	{
		return rsize/pronum;
	}
	else
	{
		return rsize/pronum +1;
	}
	

}