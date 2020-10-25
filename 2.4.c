#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

char name[40];
void childTask()
{
	printf("please enter your name:");
	scanf("%40s", name);
	printf("name:%s\n", name);

}


void parentTask()
{
	printf("job is done \n");
}

int main(void)
{
	for(int i=1; i<5; i++)
        {
	 pid_t pid = fork();

	if(pid == 0)
{
	  childTask();
	  exit(0);
	}
	else
 {
	wait(NULL);
	}
}
	return (EXIT_SUCCESS);
}

