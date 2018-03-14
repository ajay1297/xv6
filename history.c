#include "types.h"
#include "user.h"
#include "stat.h"
#include "fcntl.h"

int main(void)
{
	int fd;
	//int ctr=1;
	static char buf[100];
	fd=open("history_dump",O_RDWR);
	read(fd,buf,500);
	
	
	printf(1,buf);
	
	exit();
}
