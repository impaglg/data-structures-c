#include <stdio.h>
#include <stdlib.h>
#include "linkedl.h"

linkedl_node *linkedl_node_init(int value) {
  linkedl_node *new_node = (linkedl_node *) malloc(sizeof(linkedl_node));
  new_node->val = value;
  new_node->next = NULL;
  return new_node;
}

linkedl *linkedl_init() {
  linkedl *list = (linkedl *) malloc(sizeof(linkedl));
  list->head = NULL;
  list->tail = NULL;
  list->length = 0;
  return list;
}

int linkedl_empty(linkedl *list) {
  return list->length == 0;
}

int linkedl_contains(linkedl *list, linkedl_node *compare_node) {
  int compare_val = compare_node->val;
  linkedl_node **current = &(list->head);
  while (*current) {
    if ((*current)->val = compare_val) {
      return 1;
    }
    current = &(*current)->next;
  }
  return -1;
}

int linkedl_insert(linkedl *list, linkedl_node *new_node) {
  if (list->head == NULL) {
    list->head = new_node;
    list->tail = new_node;
    list->length++;
    return 1;
  }
  list->tail->next = new_node;
  list->tail = new_node;
  list->length++;
  return 1;
}

void linkedl_show(linkedl *list) {
  linkedl_node **current = &(list->head);
  printf("[ ");
  while (*current) {
    (*current)->next != NULL ?
      printf("%d, ", (*current)->val) :
      printf("%d ]\n", (*current)->val);
  }
}
