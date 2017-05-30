typedef int data_t;  
typedef struct node_t //定义二叉树节点的内部结构  
{  
    data_t data;  
    struct node_t *lchild,*rchild; //指向左孩子和右孩子的指针；  
}bitree_t;  
bitree_t *root; //定义指向二叉树的指针

    data_t a[] = {0,'a','b','c','d','e',0,'f',0,0,'g','h',0,0,'i'};  
      
    bitree_t *CreateBitree(int i, data_t a[], int n)  
    {  
        bitree_t *root;  
        int j;  
      
        root = (bitree_t *)malloc(sizeof(bitree_t));  
        root->data = a[i];  
      
        j = 2 * i;  
        if(j <= n && a[j] != '0')  
        {  
            root->lchild = CreateBitree(j, a, n); //创建  
        }  
        else  
        {  
            root->lchild = NULL;  
        }  
      
        j = 2 * i + 1;  
        if(j <= n && a[j] != '0')  
        {  
            root->rchild = CreateBitree(j, a, n);  
        }  
        else  
        {  
            root->rchild = NULL;  
        }     
      
        return root;  
    }  

    void PREORDER(bitree_t *r)  
    {  
        if(r == NULL)  
            return;  
        printf("%c ",r->data);  
        PREORDER(r->lchild);  
        PREORDER(r->rchild);  
    }  

    void INORDER(bitree_t *r)  
    {  
        if(r == NULL)  
            return;  
        INORDER(r->lchild);  
        printf("%c ",r->data);  
        INORDER(r->rchild);  
    }  

    void POSTORDER(bitree_t *r)  
    {  
        if(r == NULL)  
            return;  
        POSTORDER(r->lchild);  
        POSTORDER(r->rchild);  
        printf("%c ",r->data);  
    }  


