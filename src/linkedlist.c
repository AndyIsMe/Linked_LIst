#include <stdio.h>
#include "linkedlist.h"

void listInit(LinkedList *list) {
  list->head = NULL;
  list->tail = NULL;
  list->len = 0;
}

void listInit1(LinkedList *list,Item *item){
  
    list->tail = item;
    list->head = item;
    list->len += 1;
  
    item->next = NULL;
}


void listAdd(LinkedList *list,Item *item){
    // Implement your code here...
    if (list->len == 0){
      list->head = item;
      list->tail = item;
      
    }
    else {
      list->tail = item; 
      list->len+=1;
      item->next = NULL;
    }
    
}
