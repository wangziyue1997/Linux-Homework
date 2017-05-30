#ifndef _MY_LIB_H_
#define _MY_LIB_H_

seqstack_t *CreateEmptyStack(int max_len);
void DestroyStack(seqstack_t *stack);
void ClearStack(seqstack_t *stack);
int EmptyStack(seqstack_t *stack) ;
int FullStack(seqstack_t *stack);
int PushStack(seqstack_t *stack ,data_t x);
int PopStack(seqstack_t *stack,data_t *x) ;
int GetTop(seqstack_t *stack,data_t *x);

sequeue_t *CreateEmptySequeue();
void DestroySequeue(sequeue_t *queue) ;
int EmptySequeue(sequeue_t *queue);
int FullSequeue(sequeue_t *queue);
void ClearSequeue(sequeue_t *queue);
int EnQueue(sequeue_t *queue, data_t x);
int DeQueue(sequeue_t *queue, data_t *x);

bitree_t *CreateBitree(int i, data_t a[], int n);
void PREORDER(bitree_t *r);
void INORDER(bitree_t *r);
void POSTORDER(bitree_t *r);

#endif 


