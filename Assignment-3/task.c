#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
int totalSum = 0;
int main() {
	int count = 1;
	int c = 1;
	int sum = 0;
	int cpid = -1;
	
	 
	int array[1000];
	for (int i = 0; i < 1000; i++)
	{
		array[i] = i;
	}

	for (int i = 0; i < 10; i++)
	{	
		cpid = fork()
		if (cpid == 0)
		{
			for(j=count; j<c *100;j++)
			{
				sum += array[i];
				count++;
			}
		}
		else
		{
			wait(NULL);
			totalSum = totalSum + sum;
		}
		
		c+=1;
		sum = 0;
	}
	
	printf("\ntotalSum = %d\n", totalSum);

	return 0;
}