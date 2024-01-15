# Binary Tree

```
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
```

## Key Pointers
* Iteration : Maintain a scanner in the tree using a value or stack 
* Recursion : Use recursion stack 


## Tips
* Binary Search : traversal is not necessary, so we can also use iteration
* Travesal by level : queue
* Tree and other Data struture (int[],String) : we can use top-down and bottom-up 
* Pre-Order is top-down, Post-Order is bottom-up. In-Order is more likely to be implemented in Binary Search Tree