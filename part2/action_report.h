/*
 * CS 152, Spring 2022
 * Action Report Interface.
 *
 * Updates: Added a function for writing action reports to a file.
 * 
 * Do NOT modify this file
 */

#ifndef ACTION_REPORT_H
#define ACTION_REPORT_H

/* The type for an action report.  This type is opaque, which means
 * that the client cannot reach into the implementation and make
 * changes directly.
 */
typedef struct action_report action_report_t;

enum action {BOOKED_BUY, BOOKED_SELL, EXECUTE, CANCEL_BUY, CANCEL_SELL};

/*
 * mk_action_report: make an empty action report
 *
 * ticker: the ticker symbol for the report
 *
 * Returns: an empty action report
 */
action_report_t *mk_action_report(char *ticker);


/* 
 * free_action_report: frees up the space associated with a action
 * report.
 *
 * ar: the action report
 */
void free_action_report(action_report_t *ar);


/*
 * add_action: add a action to the report
 *
 * ar: the action report
 * oref: the order's oref
 * price; the price of the action
 * num_shares: the number of shares actions
 */
void add_action(action_report_t *ar, enum action action,
		long long oref, long long price, int num_shares);


/*
 * print_action_report: print the contents of the action report
 *
 * ar: the action report
 */
void print_action_report(action_report_t *ar);


/* 
 * write_action_report_to_file: write the action report to a file, one action
 *   per line.
 *
 * ar: the action report
 * fp: a file pointer
 * index: a number that will be added to every output line to identify action report
 */
void write_action_report_to_file(action_report_t *ar, FILE *fp, int index);
#endif  // ends ACTION_REPORT_H
