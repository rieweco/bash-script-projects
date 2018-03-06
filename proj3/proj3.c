#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAXLINE 100

int main(int argc, char * argv[])
{
	int parent[MAXLINE];
	int child[MAXLINE];
	int val;
	int i = 0;
	pid_t pid;
	pid = fork();
	int mypipe[2];
	int cp;

	while(scanf("%d", &val) == 1)
        {
                parent[i] = val;

                printf("Parent:[%d]: %d\n",i,val);
                i++;    
        }


	if(pipe(mypipe))
	{
		printf("Pipe Error!\n");
		exit(EXIT_FAILURE);
	}
	if((pid=fork()) == -1)
	{
		printf("Fork Error!\n");
		exit(EXIT_FAILURE);
	}
	
	if(pid)
	{
		dup2(mypipe[1],1);
		close(mypipe[0]);
		sleep(2);
		printf("Hello\n");
		sleep(2);
		printf("Goodbye\n");
		sleep(2);
		printf("Exit\n");
		wait(&cp);
		printf("Child exit. Value: %d\n",cp);
	}
	else
	{
		dup2(mypipe[0],0);
		int n;
		int l = 0;
		while(l < i+1)
		{
			n = parent[l]; 
			write(*mypipe,&n,sizeof(n));
			close(mypipe[1]);
		}	
		if(execl("child","child",NULL) == -1)
		{
			printf("Execution error for child program\n");
			exit(EXIT_FAILURE);
		}
	
	
	/*child code begins
	if(pid == 0)	
	{
		
	*/
	}

	return EXIT_SUCCESS;
}
