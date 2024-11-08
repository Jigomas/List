#include "list_assertion.h"


void ListAssertion(struct list_of_data_t *list) {

    if (list->data == NULL) {
        printf("(data) adress is equal to NULL\n");
        list->code_of_programm = ERROR;

        abort();
        return;
    }

    else if (list->next == NULL) {
        printf("(next) adress is equal to NULL\n");
        list->code_of_programm = ERROR;

        abort();
        return;
    }

    else if (list->prev == NULL) {
        printf("(prev) adress is equal to NULL\n");
        list->code_of_programm = ERROR;

        abort();
        return;
    }

    else if (list->capacity != AMOUNT_OF_ELEMENTS + 1) {
        printf("(capacity) is not the same as it supposed to be\n");
        list->code_of_programm = ERROR;

        abort();
        return;
    }

    list->code_of_programm = ALL_GOOD;
}
