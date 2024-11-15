#include "remove_elem.h"



void RemoveElem (struct list_t *list, int removing_address) {
    ListAssertion(list);

    if (list->size <= 0 || removing_address <= 0) {
        assert("Taking none\n");
        assert(0);
        exit;
    }

    int address_of_removed_element = GetRemovedElemAdress(list, removing_address);


    (list->next)[(list->prev)[address_of_removed_element]] = (list->next)[address_of_removed_element];
    (list->prev)[(list->next)[address_of_removed_element]] = (list->prev)[address_of_removed_element];

    (list->data)[address_of_removed_element]     = POISON_ELEM;
    (list->seq_addr)[address_of_removed_element] = -list->size;
    (list->next)[address_of_removed_element] = -list->next_free;
    (list->prev)[address_of_removed_element] = -1;

    list->next_free = address_of_removed_element;
    list->size --;
}




int GetRemovedElemAdress(struct list_t *list, int removing_address) {
    ListAssertion(list);

    int temp = -1; //<0
    for (int i = 0; i < list->capacity; i++) {
        if ((list->seq_addr)[i] > removing_address)
            (list->seq_addr)[i] --;

        else if (list->seq_addr[i] == removing_address)
            temp = i;
    }

    if (temp >= 0) return temp;

    fprintf (stderr,"You are going to take the last symbol\n");
    return list->prev[0];
}

