#include "add_elem.h"



void AddElem (struct list_t *list, int pushing_index_in_sequence, int number_to_push) {
    ListAssertion(list);

    if (list->size >= list->capacity - 1) {
        fprintf(stderr, "Overfillment\n");
        list->code_of_programm = 0;
        return;
    }

    int next_free_addr = abs(list->next_free);
    list->next_free    = abs((list->next)[list->next_free]);

    int address_of_previous_element = GetPushedElemAdress(list, pushing_index_in_sequence);

    //fprintf(stderr, "address_of_previous_element   %d\n", address_of_previous_element);
    //fprintf(stderr, "pushing_index_in_sequence     %d\n", pushing_index_in_sequence);

    (list->seq_addr)[next_free_addr] = address_of_previous_element + 1;
    list->size ++;
    (list->data)[next_free_addr] = number_to_push;


    (list->prev)[next_free_addr]  = address_of_previous_element;
    (list->next)[next_free_addr]  = (list->next)[address_of_previous_element];


    (list->next)[(list->prev)[next_free_addr]] = next_free_addr;
    (list->prev)[(list->next)[next_free_addr]] = next_free_addr;
}



int GetPushedElemAdress(struct list_t *list, int pushing_index_in_sequence) {
    ListAssertion(list);

    int temp = -1; //<0
    for (int i = 0; i < list->capacity; i++) {
        if ((list->seq_addr)[i] > pushing_index_in_sequence)
            (list->seq_addr)[i] ++;

        else if ((list->seq_addr)[i] == pushing_index_in_sequence)
            temp = i;

    }

    if (temp >= 0) return temp;

    fprintf (stderr,"Number is going to be pushed in the end\n");
    return list->prev[0];
}
