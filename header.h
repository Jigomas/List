#ifndef HEADER
#define HEADER

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

#define AMOUNT_OF_ELEMENTS 10
#define MAX_LEN_OF_NUM     3
#define POISON_ELEM        -66
#define list_elem_t        int
#define CallDumper         ListDumper(&list, __FILE__, __LINE__)
#define CallDumperFromFunc ListDumper( list, __FILE__, __LINE__)

struct list_of_data_t {
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
    ERROR    = 1,
};



#endif //HEADER
