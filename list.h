#ifndef LIST
#define LIST

#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



#if DEBUG_MODE == 1
    #define DEBUG(...) __VA_ARGS__
#else
    #define DEBUG(...)
#endif

#define list_elem_t        int
#define CALLDUMPER         ListDumper(&list, __FILE__, __LINE__)
#define CALLDUMPERFROMFUNC ListDumper( list, __FILE__, __LINE__)

struct list_t {
    int *seq_addr;
    list_elem_t *data;
    int *prev;
    int *next;

    int capacity;
    int size;
    int next_free;
    int code_of_programm;
};

enum all_exit_codes {
    ALL_GOOD = 1,
    ERROR    = 0,
};

enum all_constants {
    AMOUNT_OF_ELEMENTS = 15,
    MAX_LEN_OF_NUM     = 4,
    POISON_ELEM        = -666,
};


#endif //LIST
