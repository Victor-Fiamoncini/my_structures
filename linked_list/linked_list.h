typedef struct int_value_node
{
    int value;
    struct int_value_node *next;
} linked_list_node;

void populate_linked_list(linked_list_node *head, int number_of_items);
void print_linked_list(linked_list_node *head);
void add_item_to_the_end(linked_list_node *head, int value_to_add);
void add_item_to_the_beginning(linked_list_node **head, int value_to_add);
int remove_item_of_the_beginning(linked_list_node **head);
int remove_item_of_the_end(linked_list_node *head);
