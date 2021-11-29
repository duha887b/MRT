//
// Created by dustin on 25.11.2021.
//
#include "dynamic_list.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>




void list_element_init(list_element *element) { // init new element
    element->next = NULL;
    element->payload = NULL;
    element->typ = NULL;

}

list_element* list_element_new() {                              //erstellen eines neuen listelemts allokation des Speichers

    list_element *new = (list_element *) malloc(sizeof(list_element));
    list_element_init(new);
    return (new);
}

void list_header_init(list_header *header) {     //init new header
    header->head = NULL;
    header->tail = NULL;

}

list_header *list_header_new() {    //erstellen eines neuen list headers
    list_header *new = (list_header *) malloc(sizeof(list_header));
    list_header_init(new);
    return (new);
}

void listelement_deleteMembers(list_element *element, _Bool freePayload) {                            //delete data in list_element

    if(freePayload){
       free(element->payload);
    }
    element->payload = NULL;
    element->next = NULL;
    element->typ = NULL;
}

void listelement_delete(list_header *header, list_element *element, _Bool freePayload) {              //löschen des list_elements evt. deallokieren des Speichers

    list_element *tmp;
    list_element *del;

    tmp = header->head;

    if (tmp == element) {            //delete head element

        if(tmp->next == NULL){      // if head element is the last element
            header->tail = NULL;
            header->head = NULL;
            goto next;
        }

        header->head = (list_element *) tmp->next;
        goto next;
    }

    while (tmp->next != NULL) {
        if (tmp->next == element) {

            del = (list_element *) tmp->next;
            tmp->next = del->next;

            if (tmp->next == NULL) {
                header->tail = tmp;
            }

            goto next;
        }
        tmp = tmp->next;
    }

    next:
    listelement_deleteMembers(element,freePayload);         // clear or delete members of list_element
    if(freePayload){
        free(element);                                      //deallocate element himself
        element = NULL;
    }
}

void listelement_append(list_header *l, list_element *le, void *payload, typ *typ) {                //hinzufügen von daten eines types (oder void) evt. deallokieren des Speichers

    // no elements
    le->payload = payload;
    le->next = NULL;
    le->typ = typ;

    if (l->head == NULL && l->tail == NULL){
        l->head = le;
        l->tail = le;
        return;
    }

    // 1 element
    if (l->head == l->tail) {
        l->head->next = le;
        l->tail = le;
        return;
    }

    l->tail->next =  le;
    l->tail = le;

}

void list_clear(list_header *header) {                                           // NULL des Headers (liste soll neu befuellt werden)
    header->head = NULL;
    header->tail = NULL;
}

void print_list(list_header* header){
    list_element *tmp;
    tmp = header->head;

    if (header->tail == NULL && header->head == NULL){           // print if list is empty

        printf("List is empty!\n");
        printf("--------------\n");

        return;

    }



    while (tmp != NULL) {                         // print elements without tail



        if (*(tmp->typ) == INT){
            printf("%d\n", *((int *)(tmp->payload)));
        }

        if(*(tmp->typ) == CHAR){
            printf("%c\n", *((char *)(tmp->payload)));
        }

        if(*(tmp->typ) == STR){
            printf("%s\n", *((char* *)(tmp->payload)));
        }

        if(*(tmp->typ) == BOOL){
            if((tmp->payload)){
                printf("TRUE");
            } else printf("FALSE");
        }

        if(*(tmp->typ) == VOID){
            printf("VOID POINTER: %p\n",tmp->payload);
        }





        tmp = tmp->next;

    }

    printf("--------------\n");


}
// free funktioniert nur auf vorher allokierten speicher
/*
int main(){

    int *a= (int *) malloc(sizeof(int )*4) ;
    *(a) = 5;
    char b= 'A';
    char* c = "hallo";
    t = (typ *) malloc(sizeof(typ));
    *t = INT;
    typ m = CHAR;
    typ fr = STR;

    int free = 1 ;

    //printf("%d\n",*((int *)t));

    list_header *myList = list_header_new();
    list_element *myElement = list_element_new();
    list_element *myElement2 = list_element_new();
    list_element *myElement3 = list_element_new();

    listelement_append(myList,myElement,(void *)a,t);
    listelement_append(myList,myElement2,(void *)&b,&m);
    listelement_append(myList,myElement3,(void *)&c,&fr);

    print_list(myList);

    listelement_delete(myList,myElement,1);

    print_list(myList);

    list_clear(myList);

    print_list(myList);



    return 0;

}*/