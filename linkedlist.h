typedef struct linkedlist_node {
  int val;
  struct linkedlist_node *next;
} linkedlist_node;

typedef struct linkedlist {
  struct linkedlist_node *head;
  struct linkedlist_node *tail;
  int length;
} linkedlist;

linkedlist_node *linkedlist_node_init(int node_val);
linkedlist *linkedlist_init();
int linkedlist_destroy(linkedlist *list);
