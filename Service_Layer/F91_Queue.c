

#include "F91_Queue.h"


queue_t Uart_queue;




void F91_void_enqueue(unsigned char data)
{
	if(!F91_int_isfull())
	{
		Uart_queue.arr[Uart_queue.tail++] = data;
		Uart_queue.size ++;
		Uart_queue.tail %= QUEUE_SIZE;
	}
}

void F91_void_dequeue(unsigned char *data)
{
	if(!F91_int_isempty())
	{
		*data = Uart_queue.arr[Uart_queue.head++] ;
		Uart_queue.size --;
		Uart_queue.head %= QUEUE_SIZE;
	}

}



int F91_int_isfull()
{
	return (Uart_queue.head == Uart_queue.tail) && (Uart_queue.size == QUEUE_SIZE);
}

int F91_int_isempty()
{
	return (Uart_queue.head == Uart_queue.tail) && (Uart_queue.size == 0);
}

int F91_int_getsize()
{
	return Uart_queue.size ;
}
