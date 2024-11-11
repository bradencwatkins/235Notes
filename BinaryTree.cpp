


// void printTree(Node *tree) {
//  if (tree != nullptr) {
//      cout << tree->value << endl;
    // printTree(tree->left);
    // printTree(tree->Right);
// }
//put cout statement at end to print children first, put it in the middle to print "favorite" children first

bradth search

void breadth(Node *tree) {
    Queue Q;
    Q.push(tree);
    while (!Q.empty) {
        Node *n = Q.front();
        Q.pop();
        cout << n->data;
        Q.push(n->left);
        Q.push(n->right);
    }
}