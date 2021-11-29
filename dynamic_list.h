//
// Created by dusti on 26.11.2021.
//

#ifndef MRT_FIBONACI_DYNAMIC_LIST_H
#define MRT_FIBONACI_DYNAMIC_LIST_H

typedef enum  {
    INT, CHAR, STR, BOOL, VOID
} typ;

typedef struct list_el_t {
    struct list_el_t *next;
    void *payload;
    typ *typ;
} list_element;

typedef struct list_t {
    list_element *head;
    list_element *tail;
} list_header;

typ *t;

void list_element_init(list_element *element);

list_element* list_element_new();

void list_header_init(list_header *header);

list_header *list_header_new();

void listelement_deleteMembers(list_element *element, _Bool freePayload);

void listelement_delete(list_header *header, list_element *element, _Bool freePayload);

void listelement_append(list_header *l, list_element *le, void *payload, typ *typ);

void list_clear(list_header *header);

void print_list(list_header* header);


#endif //MRT_FIBONACI_DYNAMIC_LIST_H
