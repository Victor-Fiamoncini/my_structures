struct IntLinkedList
{
  int value;
  struct IntLinkedList *next;
};

typedef struct IntLinkedList LinkedList;

enum ReturnStatus
{
  SUCCESS = 1,
  FAILURE = 0,
};
