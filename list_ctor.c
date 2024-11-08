#include "list_ctor.h"

int ListCtor(struct list_of_data_t *list) {
    list->seq_addr = (list_elem_t*)calloc(list->capacity, sizeof(int));
    list->data     = (list_elem_t*)calloc(list->capacity, sizeof(list_elem_t));
    list->next     = (list_elem_t*)calloc(list->capacity, sizeof(int));
    list->prev     = (list_elem_t*)calloc(list->capacity, sizeof(int));

    list->next_free = 1;
    list->size      = 0;
    (list->next)[0] = 0;
    (list->prev)[0] = 0;

    for (int i = 0; i < list->capacity; i++) {//cast next adresses

        (list->seq_addr)[i] = -i;
    }

    for (int i = 0; i < list->capacity; i++) {
        (list->data)[i] = POISON_ELEM;
    }

    for (int i = 1; i < list->capacity - 1; i++) {//cast next adresses

        (list->next)[i] = -1 * (i + 1);
    }
    (list->next)[list->capacity - 1] = 0;

    for (int i = list->capacity - 1; i > 1; i--) {//cast previous adresses
        (list->prev)[i] = -1;
    }

    list->code_of_programm = ALL_GOOD;

    CallDumperFromFunc;

    return ALL_GOOD;
}
