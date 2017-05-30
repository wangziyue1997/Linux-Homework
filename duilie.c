#define N 64  //队列中数据元素的数据类型  
typedef int data_t;  
typedef struct  
{  
    data_t data[N]; //用数组作为队列的储存空间  
    int front,rear; //指示队头位置和队尾位置的指针 
}sequeue_t;

    sequeue_t *CreateEmptySequeue()  
    {  
        sequeue_t *queue;  
        queue = (sequeue_t *)malloc(sizeof(sequeue_t));  
        if (NULL == queue) return NULL;  
          
        queue->front = queue->rear = 0;  
      
        return queue;  
    } 

    void DestroySequeue(sequeue_t *queue)  
    {  
        if (NULL != queue)   
        {  
            free(queue);  
        }  
}


    int EmptySequeue(sequeue_t *queue)  
    {  
        if (NULL == queue)   
            return -1;  
      
        return (queue->front == queue->rear ? 1 : 0);  
    } 

    int FullSequeue(sequeue_t *queue)  
    {  
        if (NULL == queue) return -1;  
      
        return ((queue->rear + 1) % N == queue->front ? 1 : 0);  
    }  

    void ClearSequeue(sequeue_t *queue)  
    {  
        if (NULL == queue) return;  
          
        queue->front = queue->rear = 0;  
      
        return;  
    } 

    int EnQueue(sequeue_t *queue, data_t x)  
    {  
        if (NULL == queue) return - 1;  
      
        if (1 == FullSequeue(queue)) return -1; /* full */  
      
        queue->rear = (queue->rear + 1) % N;  
        queue->data[queue->rear] = x;  
      
        return 0;  
    } 

    int DeQueue(sequeue_t *queue, data_t *x)  
    {  
        if (NULL == queue) return -1;  
      
        if (1 == EmptySequeue(queue)) return -1; /* empty */  
      
        queue->front = (queue->front + 1) % N;  
      
        if (NULL != x) {  
            *x = queue->data[queue->front];  
        }  
      
        return 0;  
    } 

    


A
A
A
A
A
A
B
B
B
A
A
A
B
B
B
    }    
