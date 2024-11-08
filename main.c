#include "header.h"
#include "dumper.h"
#include "list_ctor.h"
#include "add_elem.h"
#include "list_assertion.h"
#include "remove_elem.h"



int main() {
    struct list_of_data_t list = {};
    list.capacity = AMOUNT_OF_ELEMENTS + 1;

    int code_of_programm = ListCtor(&list);
    AddElem (&list, 0, 10);
    CallDumper;
    AddElem (&list, 0, 11);
    CallDumper;
    AddElem (&list, 1, 12);
    CallDumper;

    RemoveElem (&list, 1);
    CallDumper;
    RemoveElem (&list, 1);
    CallDumper;
        RemoveElem (&list, 1);
    CallDumper;

        AddElem (&list, 0, 10);
    CallDumper;

        AddElem (&list, 0, 13);
    CallDumper;
    RemoveElem (&list, 1);
    CallDumper;
        RemoveElem (&list, 1);
    CallDumper;

    AddElem (&list, 0, 14);
    CallDumper;

        AddElem (&list, 0, 133);
    CallDumper;
        AddElem (&list, 2, 13);
    CallDumper;

        AddElem (&list, 4, 15);
    CallDumper;

    RemoveElem (&list, 3);
    CallDumper;
    RemoveElem (&list, 3);
    CallDumper;
            AddElem (&list, 4, 15);
    CallDumper;
}
