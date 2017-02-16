#pragma once
#include <pthread.h>

typedef struct worker
{
	void* (*callback_function)(void *arg);
	void *arg;
	struct worker *next;
} CThread_worker_t;

typedef struct{
	int thread_num;
	int queue_max_num;

	CThread_worker_t *head;
	CThread_worker_t *tail;

	pthread_t *pthreads;

	pthread_mutex_t mutex;
	pthread_cond_t queue_empty;
	pthread_cond_t queue_not_empty;
	pthread_cond_t queue_not_full;
 
	int queue_cur_num;

	int queue_close;
	int pool_close;
} CThread_pool_t;

CThread_pool_t * CThread_pool_init(int thread_num, int queue_max_num);
int CThread_worker_add(CThread_pool_t *pool, void* (*callback_function)(void *arg), void *arg);
int CThread_pool_destroy(CThread_pool_t *pool);
void* CThread_pool_function(void* arg);
