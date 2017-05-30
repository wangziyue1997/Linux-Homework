typedef int data_t;  //定义栈中数据元素的数据类型  
typedef struct  
{  
    date_t *data;  //用指针指向栈的存储空间  
    int maxlen;    //当前栈的最大元素个数  
    int top;  //指向栈顶位置（数组下标）的变量
}seqstack_t;

    seqstack_t *CreateEmptyStack(int max_len)  
    {  
        seqstack_t *stack;  
        stack = (seqstack_t *)malloc(sizeof(seqstack_t));  
        stack->data = (data_t *)malloc(sizeof(data_t)*max_len);  
        stack->top = -1;  
        stack->max_len = max_len;  
      
        return stack;  
    } 



Void DestroyStack(seqstack_t *stack)  
    {  
        if(stack != NULL)  
        {  
            if(stack->data != NULL)  
                free(stack->data);  
      
            free(stack);  
        }  

    }  

    void ClearStack(seqstack_t *stack)  
    {  
        if(stack != NULL)  
            stack->top = -1;  
    } 

    int EmptyStack(seqstack_t *stack)  
    {  
        if(stack == NULL)  
            return -1;  
      
        return(stack->top == -1 ? 1 : 0);  
    } 

    int FullStack(seqstack_t *stack)  
    {  
        if(stack == NULL)  
            return -1;  
      
        return(stack->top == (stack->max_len - 1) ? 1 : 0);  
    } 

    int PushStack(seqstack_t *stack ,data_t x)  
    {  
        if(FullStack(stack))  
            return -1;  
        else  
        {  
            stack->top++;  
            stack->data[stack->top] = x;  
        }  
      
        return 0;  
    } 

    int PopStack(seqstack_t *stack,data_t *x)  
    {  
        if(EmptySqstack(stack))  
            return -1;  
        else  
        {  
            *x = stack->data[stack->top];  
            stack->top--;  
        }  
      
        return 0;  
    } 

    int GetTop(seqstack_t *stack,data_t *x)  
    {  
        if(EmptyStack(stack))  
            return -1;  
        else  
            *x = stack->data[stack->top];  
      
        return 0;  
    } 

      
