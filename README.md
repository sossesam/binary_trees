### Binary trees

##0. New node
```
#Write a function that creates a binary tree node

*Prototype: binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
*Where parent is a pointer to the parent node of the node to create
*And value is the value to put in the new node
*When created, a node does not have any child
*Your function must return a pointer to the new node, or NULL on failure
```


Functions to print binary trees in a pretty way

```
                           .----------------------(006)-------.
                      .--(001)-------.                   .--(008)--.
                 .--(-02)       .--(003)-------.       (007)     (009)
       .-------(-06)          (002)       .--(005)
  .--(-08)--.                           (004)
(-09)     (-07)
```

[Original code](Original code from http://stackoverflow.com/a/13755911/5184480)
