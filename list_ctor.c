#include "list_ctor.h"

int ListCtor(struct list_t *list) {
    if (list == NULL) {
        list->code_of_programm = ERROR;
        return ERROR;
    }

    list->seq_addr = (list_elem_t*)calloc(list->capacity, sizeof(int));
    if (list->seq_addr == NULL) {
        list->code_of_programm = ERROR;
        return ERROR;
    }

    list->data     = (list_elem_t*)calloc(list->capacity, sizeof(list_elem_t));
    if (list->data == NULL) {
        list->code_of_programm = ERROR;
        return ERROR;
    }

    list->next     = (list_elem_t*)calloc(list->capacity, sizeof(int));
    if (list->next == NULL) {
        list->code_of_programm = ERROR;
        return ERROR;
    }

    list->prev     = (list_elem_t*)calloc(list->capacity, sizeof(int));
    if (list->prev == NULL) {
        list->code_of_programm = ERROR;
        return ERROR;
    }

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

    CALLDUMPERFROMFUNC;

    return ALL_GOOD;
}
