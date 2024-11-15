#ifndef DUMPER
#define DUMPER

#include "list.h"
#include "list_assertion.h"



void ListDumper(struct list_t *list, const char *file, double line);

void FillToMaxLen(int a);

void PrintTheTable(struct list_t *list);

#endif //DUMPER
