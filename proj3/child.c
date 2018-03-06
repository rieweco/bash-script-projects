#include <stdio.h>
#define MAX 100
int main(int argc, char * argv[])
{	
	int child[MAX];
	int i = 0;
	int val;
	printf("Child Program\n");
	printf("----------------\n");
	
	while(scanf("%d", &val) == 1)
        {
                printf("Child:[%d]: %d\n",i,val);
                i++;    
        }
	
	return 0;
}
	
