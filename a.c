#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>//threads library
char ch=65;//global value
void *fun(void *p)//return type void ptr(printing uppercase alphabets)
{
	while(ch<=90)
	{
		printf("%c ",ch);
		ch++;
		sleep(1);
	}
	printf("\n");
}
void *fun1(void *p)//return type void ptr(printing lowercase alphabets)
{
	while(ch<=90)
	{
		printf("%c ",ch+32);
		ch++;
		sleep(1);
	}
}
int main()
{
	pthread_t a_thread[2];//creating a variable for thread id
	pthread_create(&a_thread[0],NULL,fun,NULL);//creating thread(1st:thread id 2nd:thread attributes "NULL" 3rd:thread fun4th:arguments to thead fun)
	pthread_create(&a_thread[1],NULL,fun1,NULL);
	pthread_join(a_thread[0],NULL);//thread joining fun(1st:thread id 2nd:NULL)
	pthread_join(a_thread[1],NULL);
	return 0;
}
