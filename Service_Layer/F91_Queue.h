/*
 * F91_Queue.h
 *
 *  Created on: Oct 2, 2018
 *      Author: root
 */

#ifndef F91_QUEUE_H_
#define F91_QUEUE_H_

#define QUEUE_SIZE 	100

typedef struct queue
{
	unsigned char arr[QUEUE_SIZE];
	int head;
	int tail;
	int size;
}queue_t;





void F91_void_enqueue(unsigned char data);
void F91_void_dequeue(unsigned char *data);
int F91_int_isfull();
int F91_int_isempty();
int F91_int_getsize();



#endif /* F91_QUEUE_H_ */
