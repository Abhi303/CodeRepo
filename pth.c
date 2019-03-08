#include<pthread.h>
#include<stdio.h>
void *hello(void *args);
int main(void) {
	pthread_t tid;
	pthread_attr_t attr;
	pthread_attr_init(&attr);
	pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);
	pthread_create(&tid, &attr, hello, NULL);
	pthread_exit(NULL);
}

void *hello(void *args) {
	printf("hello\n");
}
