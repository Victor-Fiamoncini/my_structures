struct IntNode
{
    int value;
    struct IntNode *next;
};

typedef struct IntNode Node;

void printList(Node *head);

void push(Node *head, int valueToAdd);

void unshift(Node **head, int valueToAdd);

int shift(Node **head);

int pop(Node *head);

