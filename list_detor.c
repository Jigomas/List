#include "list_ctor.h"

int ListDetor(struct list_t *list) {
    if (list == NULL) {
        list->code_of_programm = ERROR;
        return ERROR;
    }

    free(list->seq_addr);

    free(list->data);

    free(list->next);

    free(list->prev);

    return ALL_GOOD;
}
