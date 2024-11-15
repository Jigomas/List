#include "list.h"
#include "dumper.h"
#include "list_ctor.h"
#include "add_elem.h"
#include "list_assertion.h"
#include "remove_elem.h"
#include "list_detor.h"


int main() {
    struct list_t list = {};
    list.capacity = AMOUNT_OF_ELEMENTS + 1;

    int code_of_programm = ListCtor(&list);
    AddElem (&list, 10, 10);
    CALLDUMPER;
    AddElem (&list, 0, 130);
    CALLDUMPER;

    ListDetor(&list);
}
