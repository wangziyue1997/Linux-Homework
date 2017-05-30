#include "mylib.h"
    int main()  
    {  
        bitree_t *tree;  
      
        printf("Begin creating the tree!\n");  
        tree = CreateBitree(1,a,sizeof(a)/sizeof(data_t) - 1);  
        printf("Finish!\n");  
      
        printf("Preorder traversal:\n");  
        PREORDER(tree);  
      
        printf("\nInorder traversal:\n");  
        INORDER(tree);  
      
        printf("\nPostorder traversal:\n");  
        POSTORDER(tree);  
        printf("\n");  
      
        return 0;  
    }  
