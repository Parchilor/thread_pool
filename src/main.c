#include <stdio.h>
#include <unistd.h>
#include "thread_pool.h"

void* worker(void* arg)
{
    char *p = (char*) arg;
    printf("threadpool callback fuction : %s.\n", p);
    sleep(1);
    return NULL;
}

int main(void)
{
	CThread_pool_t *pool = CThread_pool_init(10, 20);
	CThread_worker_add(pool, worker, "1");
	CThread_worker_add(pool, worker, "2");
	CThread_worker_add(pool, worker, "3");
	CThread_worker_add(pool, worker, "4");
	CThread_worker_add(pool, worker, "5");
	CThread_worker_add(pool, worker, "6");
	CThread_worker_add(pool, worker, "7");
	CThread_worker_add(pool, worker, "8");
	CThread_worker_add(pool, worker, "9");
	CThread_worker_add(pool, worker, "10");
	CThread_worker_add(pool, worker, "11");
	CThread_worker_add(pool, worker, "12");
	CThread_worker_add(pool, worker, "13");
	CThread_worker_add(pool, worker, "14");
	CThread_worker_add(pool, worker, "15");
	CThread_worker_add(pool, worker, "16");
	CThread_worker_add(pool, worker, "17");
	CThread_worker_add(pool, worker, "18");
	CThread_worker_add(pool, worker, "19");
	CThread_worker_add(pool, worker, "20");
	CThread_worker_add(pool, worker, "21");
	CThread_worker_add(pool, worker, "22");
	CThread_worker_add(pool, worker, "23");
	CThread_worker_add(pool, worker, "24");
	CThread_worker_add(pool, worker, "25");
	CThread_worker_add(pool, worker, "26");
	CThread_worker_add(pool, worker, "27");
	CThread_worker_add(pool, worker, "28");
	CThread_worker_add(pool, worker, "29");
	CThread_worker_add(pool, worker, "30");
	CThread_worker_add(pool, worker, "31");
	CThread_worker_add(pool, worker, "32");
	CThread_worker_add(pool, worker, "33");
	CThread_worker_add(pool, worker, "34");
	CThread_worker_add(pool, worker, "35");
	CThread_worker_add(pool, worker, "36");
	CThread_worker_add(pool, worker, "37");
	CThread_worker_add(pool, worker, "38");
	CThread_worker_add(pool, worker, "39");
	CThread_worker_add(pool, worker, "40");

	sleep(5);
	CThread_pool_destroy(pool);
	return 0;
}
