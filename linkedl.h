typedef struct linkedl_node {
  int val;
  struct linkedl_node *next;
} linkedl_node;

typedef struct linkedl {
  struct linkedl_node *head;
  struct linkedl_node *tail;
  int length;
} linkedl;

linkedl_node *linkedl_node_init(int node_val);
linkedl *linkedl_init();
int linkedl_empty(linkedl *list);
int linkedl_contains(linkedl *list, linkedl_node *compare_node);
int linkedl_insert(linkedl *list, linkedl_node *list_node);
linkedl_node *linkedl_remove(linkedl *list, int index);
void linkedl_reverse(linkedl *list);
void linkedl_show(linkedl *list);
void linkedl_destroy(linkedl *list);
