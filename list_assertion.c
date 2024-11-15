#include "list_assertion.h"


void ListAssertion(struct list_t *list) {
    if (list->code_of_programm == ERROR) {
        fprintf(stderr, "(code_of_program) is equal to 0\n");
        list->code_of_programm = ERROR;

        assert(0);
        return;
    }


    if (list == NULL) {
        fprintf(stderr, "(list) adress is equal to NULL\n");
        list->code_of_programm = ERROR;

        assert(0);
        return;
    }

    if (list->data == NULL) {
        fprintf(stderr, "(data) adress is equal to NULL\n");
        list->code_of_programm = ERROR;

        assert(0);
        return;
    }

    else if (list->next == NULL) {
        fprintf(stderr, "(next) adress is equal to NULL\n");
        list->code_of_programm = ERROR;

        assert(0);
        return;
    }

    else if (list->prev == NULL) {
        fprintf(stderr, "(prev) adress is equal to NULL\n");
        list->code_of_programm = ERROR;

        assert(0);
        return;
    }

    else if (list->capacity != AMOUNT_OF_ELEMENTS + 1) {
        fprintf(stderr, "(capacity) is not the same as it supposed to be\n");
        list->code_of_programm = ERROR;

        assert(0);
        return;
    }

    list->code_of_programm = ALL_GOOD;
}
