#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

#define s 5
#define n 5
void *myturn(void *arg)
{
	unsigned int i;
	for(i=0;i<=n;i++)
	{
		sleep(1);
		printf("Thread1 is printing\n");
	}
	printf("my turn %s\n",(char *)arg);
}
void *yourturn(void *arg)
{
	unsigned int i;
	for(i=0;i<=s;i++)
	{
		sleep(1);
		printf("hello\n");
	}
	printf("yourturn %s\n",(char *)arg);
}
int main()
{
	char *msg1="Hai";
	char *msg2="Hello";
	pthread_t a_thread[2];//creating variable for thread id
	pthread_create(&a_thread[0],NULL,&myturn,(void *)msg1);//creating thread
	pthread_create(&a_thread[1],NULL,&yourturn,(void *)msg2);
	pthread_join(a_thread[0],NULL);//creating thread join 
	pthread_join(a_thread[1],NULL);
	return 0;
}

	
