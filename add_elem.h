#ifndef ADD_ELEM
#define ADD_ELEM

#include "list.h"
#include "dumper.h"
#include "list_assertion.h"



void AddElem (struct list_t *list, int pushing_address, int number_to_push);

int GetPushedElemAdress(struct list_t *list, int pushing_address);



#endif //ADD_ELEM
