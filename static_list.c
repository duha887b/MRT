//
// Created by dustin on 24.11.2021.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    struct list_el *next;
    void *payload;
} list_el;

typedef struct {
    list_el *head;
    list_el *tail;
} list;

void listelement_append(list *l, list_el *le, void *payload) {
    //list_el *tmp = l->head;

/*
    while (tmp->next != NULL) {
        tmp = (list_el *) tmp->next;
    }
*/

    // no elements
    le->payload = payload;
    le->next = NULL;

    if (l->head == NULL && l->tail == NULL){
        l->head = le;
        l->tail = le;
        return;
    }

    // 1 element
    if (l->head == l->tail) {
        l->head->next = (struct list_el *) le;
        l->tail = le;
        return;
    }

    l->tail->next = (struct list_el *) le;
    l->tail = le;
   // tmp->next = (struct list_el *) le;

    int a= 5;
}


void listelement_delete(list *l, list_el *le) {
    list_el *tmp;
    list_el *del;

    tmp = l->head;

    if (tmp == le) {            //delete head element

        if(tmp->next == NULL){      // if head element is the last element
            l->tail = NULL;
            l->head = NULL;
            return;
        }

        l->head = (list_el *) tmp->next;
        return;
    }

    while (tmp->next != NULL) {
        if (tmp->next == (struct list_el *)le) {

            del = (list_el *) tmp->next;
            tmp->next = del->next;

            if (tmp->next == NULL) {
                l->tail = tmp;
            }

            return;
        }
        tmp = tmp->next;
    }

}

void print_int_list(list *l) {
    list_el *tmp;
    tmp = l->head;

    if (l->tail == NULL && l->head == NULL){           // print if list is empty
        printf("List is empty!\n");
        printf("--------------\n");
        return;
    }

     do{    // print all elements without

        printf("%d\n", *((int *)(tmp->payload)));
        tmp = (list_el *) tmp->next;

    }while (tmp != NULL);
    //printf("%d\n", *((int *)(tmp->payload)));           // print tail
    printf("--------------\n");
}

void main(void) {
/*
    list_el b = {NULL, (void *) 5};
    list_el a = {(struct list_el *) &b, (void *) 2};
*/
    list_el a,b,c;
    int payload[] = {1,2,3};

    //list l = {&a, &b};
    list l = {NULL, NULL};
    //print_int_list(&l);

    listelement_append(&l, &a, (void *) &payload[0]);
    listelement_append(&l, &b, (void *) &payload[1]);
    listelement_append(&l, &c, (void *) &payload[2]);

    print_int_list(&l);


    listelement_delete(&l, &c);

    print_int_list(&l);

    listelement_delete(&l, &a);

    print_int_list(&l);

    listelement_delete(&l, &b);

    print_int_list(&l);

    listelement_append(&l, &a, (void *) &payload[0]);

    print_int_list(&l);





    return;
}

