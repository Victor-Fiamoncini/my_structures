typedef struct int_value_node
{
    int value;
    struct int_value_node *next;
} linked_list_node;

void populate_linked_list(linked_list_node *head, int numberOfNodes);
void print_linked_list(linked_list_node *head);
void add_value_to_the_end(linked_list_node *head, int valueToAdd);
void add_value_to_the_beginning(linked_list_node *head, int valueToAdd);
