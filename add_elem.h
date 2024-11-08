#ifndef ADD_ELEM
#define ADD_ELEM

#include "header.h"
#include "dumper.h"
#include "list_assertion.h"



void AddElem (struct list_of_data_t *list, int pushing_address, int number_to_push);

int TellMeAdressOfPushedElemIndex(struct list_of_data_t *list, int pushing_address);



#endif //ADD_ELEM
