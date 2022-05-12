/*
 * CS 152, Spring 2022
 * Book Data Structure Implementation
 * 
 * You will modify this file.
 */

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#include "order.h"
#include "book.h"
#include "util.h"
 
/* These types are not visible outside this file.
 * Do NOT move them.
 */
typedef struct order_list order_list_t;


struct order_list {
  // ADD THE FIELDS YOU WANT FOR YOUR LIST HERE
};

struct book {
    enum book_type type;     // BUY_BOOK or SELL_BOOK
    order_list_t *pending;   // orders still in play.
};

// YOUR FUNCTIONS GO HERE
