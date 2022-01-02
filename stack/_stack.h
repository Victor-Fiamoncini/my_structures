#define STACK_LENGTH 5
#define STACK_EMPTY -1

struct IntStack
{
  int values[STACK_LENGTH];
  int top;
};

typedef struct IntStack Stack;

enum ReturnStatus
{
  SUCCESS = 1,
  FAILURE = 0,
};
