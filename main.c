#include <stdio.h>
#include "linkedl.c"

int main(int argc, char **argv) {
  linkedl *new_list = linkedl_init();
  int node_number;
  printf("How many nodes do you want to insert? --> ");
  scanf("%d\n", &node_number);
  int node_value;
  for (int i = 0; i < node_number; i++) {
    printf("Type in the value of the node: --> ");
    scanf("%d\n", &node_value);
    linkedl_node *node_to_add = linkedl_node_init(node_value);
    linkedl_insert(new_list, node_to_add);
  }
  printf("All the nodes have been successfully added!\n");
  printf("Here's the full list of nodes:\n");
  linkedl_show(new_list);
}
