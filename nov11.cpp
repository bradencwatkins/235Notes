//
// Created by brade on 11/11/2024.
//



//TREE CASES
//case no children: execute it (order 66)
// case 1 child: connect grandparent to grandchild then execute it
//case 2 childrens: find the inorder pred., replace value of del., then delete the inorder pred from left subtree.

bool find(Node *tree, int item) {
    if (tree == nullptr) {
        return false;
    }
    if (tree->data == item) {
        return true;
    }
    else if (tree->data < item) {
        return find(tree->right, item);
    }
    else {
        return find(tree->left, item);
    }
}

bool insert(Node *&tree, int item) {
    if (tree == nullptr) {
        Node *n = new Node(item);
        tree = n;
        return true;
    }
    if (tree->data == item) {
        return false;
    }
    else if (tree->data < item) {
        return insert(tree->right, item);
    }
    else {
        return insert(tree->left, item);
    }
}

bool contains(T item) {
    return find(root, item);
}