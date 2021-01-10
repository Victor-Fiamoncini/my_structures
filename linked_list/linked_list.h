struct int_value_node
{
    int value;
    struct int_value_node *next;
};

typedef struct int_value_node linked_list_node;

void print_linked_list(linked_list_node *head);

void push(linked_list_node *head, int value_to_add);

void unshift(linked_list_node **head, int value_to_add);

int shift(linked_list_node **head);

int pop(linked_list_node *head);

