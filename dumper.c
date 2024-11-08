#include "dumper.h"



void ListDumper(struct list_of_data_t *list, const char *file, double line) {
    ListAssertion(list);


    printf("\n****************************************\n");
    DEBUG(printf("File: %s : %lf\n", file, line);)
    fprintf(stderr, "Capacity of list: %d\n", list->capacity);
    fprintf(stderr, "Size of list    : %d\n", list->next_free);
    fprintf(stderr, "Next free addr  : %d\n", list->next_free);

    //here comes the f4cking table
    //LIGHTWEIGHT BABY!!!!!!!!
    {
        fprintf(stderr, "\n");
        fprintf(stderr, "          ");//9 is to make it beautyful
        for (int i = 0; i < (MAX_LEN_OF_NUM + 2) * list->capacity - 1; i++) {
            fprintf(stderr, "_");
        }
        fprintf(stderr, "\n");



        fprintf(stderr, "Adresses:|");
        for (int i = 0; i < list->capacity; i++) {
            fill_to_max_len(i);
            fprintf(stderr, " %d|", i);
        }
        fprintf(stderr, "\n");
        fprintf(stderr, "         |");//9 is to make it beautyful
        for (int i = 0; i < (MAX_LEN_OF_NUM + 2) * list->capacity; i++) {
            if ((i + 1) % (MAX_LEN_OF_NUM + 2) == 0) fprintf(stderr, "|");
            else                               fprintf(stderr, "_");        }
        fprintf(stderr, "\n");



        fprintf(stderr, "Seq_Addr:|");
        for (int i = 0; i < list->capacity; i++) {
            fill_to_max_len( (list->seq_addr)[i]);
            fprintf(stderr, " %d|", (list->seq_addr)[i]);
        }
        fprintf(stderr, "\n");
        fprintf(stderr, "         |");//9 is to make it beautyful
        for (int i = 0; i < (MAX_LEN_OF_NUM + 2) * list->capacity; i++) {
            if ((i + 1) % (MAX_LEN_OF_NUM + 2) == 0) fprintf(stderr, "|");
            else                               fprintf(stderr, "_");
        }
        fprintf(stderr, "\n");



        fprintf(stderr, "Data:    |");
        for (int i = 0; i < list->capacity; i++) {
            fill_to_max_len( (list->data)[i]);
            fprintf(stderr, " %d|", (list->data)[i]);
        }
        fprintf(stderr, "\n");
        fprintf(stderr, "         |");//9 is to make it beautyful
        for (int i = 0; i < (MAX_LEN_OF_NUM + 2) * list->capacity; i++) {
            if ((i + 1) % (MAX_LEN_OF_NUM + 2) == 0) fprintf(stderr, "|");
            else                               fprintf(stderr, "_");        }
        fprintf(stderr, "\n");



        fprintf(stderr, "Next:    |");
        for (int i = 0; i < list->capacity; i++) {
            fill_to_max_len( (list->next)[i]);
            fprintf(stderr, " %d|", (list->next)[i]);
        }
        fprintf(stderr, "\n");
        fprintf(stderr, "         |");//9 is to make it beautyful
        for (int i = 0; i < (MAX_LEN_OF_NUM + 2) * list->capacity; i++) {
            if ((i + 1) % (MAX_LEN_OF_NUM + 2) == 0) fprintf(stderr, "|");
            else                               fprintf(stderr, "_");
        }
        fprintf(stderr, "\n");



        fprintf(stderr, "Prev:    |");
        for (int i = 0; i < list->capacity; i++) {
            fill_to_max_len( (list->prev)[i]);
            fprintf(stderr, " %d|", (list->prev)[i]);
        }
        fprintf(stderr, "\n");
        fprintf(stderr, "         |");//9 is to make it beautyful
        for (int i = 0; i < (MAX_LEN_OF_NUM + 2) * list->capacity; i++) {
            if ((i + 1) % (MAX_LEN_OF_NUM + 2) == 0) fprintf(stderr, "|");
            else                               fprintf(stderr, "_");
        }
        fprintf(stderr, "\n");
    }

    fprintf(stderr, "Sequence:");

    int pere_list = (list->next)[0];

    while ((list->next)[pere_list] != 0) {
        fill_to_max_len( (list->data)[pere_list]);

        fprintf(stderr, "  %d", (list->data)[pere_list]);
        pere_list = (list->next)[pere_list];
    }
    
    fill_to_max_len( (list->data)[pere_list]);
    fprintf(stderr, "  %d\n", (list->data)[pere_list]);
};



void fill_to_max_len(int a) {// todo change algorythm later as it only works with the integer part of the number
    int amount_of_digits = 0;

    if (abs(a) != a)
        amount_of_digits ++;
    if (a == 0)
        amount_of_digits ++;

    a = abs(a);

    while (a > 0) {
        amount_of_digits ++;
        a = a / 10;
    }

    for (int i = amount_of_digits; i < MAX_LEN_OF_NUM; i++) {
        fprintf(stderr, " ");
    }
}