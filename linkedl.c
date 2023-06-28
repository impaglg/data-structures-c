#include <stdio.h>
#include <stdlib.h>
#include "./headers/linkedl.h"

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
    if ((*current)->val == compare_val) {
      free(current);
      return 1;
    }
    current = &((*current)->next);
  }
  free(current);
  return -1;
}

int linkedl_insert(linkedl *list, linkedl_node *new_node) {
  // if (linkedl_contains(list, new_node)) return -1;
  if (linkedl_empty(list)) {
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

linkedl_node *linkedl_remove(linkedl *list, int pos) {

}

void linkedl_show(linkedl *list) {
  linkedl_node **current = &(list->head);
  printf("[ ");
  while (*current) {
    (*current)->next != NULL ?
      printf("%d, ", (*current)->val) :
      printf("%d ]\n", (*current)->val);
    current = &((*current)->next);
  }
  free(current);
}

void linkedl_reverse(linkedl *list) {

}

void linkedl_destroy(linkedl *list) {
  if (linkedl_empty(list)) {
    free(list);
  }
  linkedl_node **current = &(list->head);
  while (*current) {
    linkedl_node *temp = (*current);
    current = &(temp->next);
    free(temp);
  }
  free(current);
}
