CS 152, Spring 2022
Stock Exchange Project - Part 2
Test Files

This directory contains the orders, times, and expected results for
the autograder tests for Part 1.

Each test has three files (TN is the test number).

     testTN_orders.csv: -- the order strings for the test, one order string per line.

     testTN_times.csv -- the times used for the orders.  With the
       exception of test 7, the times are in increasing order.  Test 7
       contains a delayed order.  It should not be used to test
       simulate.c, since we specified increasing time for
       `simulate.c`.  test7_actions_expected.csv contains the
       results that you can expect to get using simulate.  test7_actions_expected_using_times.csv
       results you would expect using the times in test7_times.csv.

       The first line in the file is the number of times.  The rest of
       the lines are the actual times used.

      testTN_actions_expected.csv -- the expected action report results
       for the orders.  Each line contains an action. The first value
       in each line is the number of the corresponding order. For
       example, this action from expected_test0_actions.csv
       corresponds to the first order (order 0) in test0_orders.csv.

           0,BOOKED_SELL,4000,550000,100


Mapping from files to tests:

Exchange Distribution Test: exchange/test0 from test_exchange.c
Cancel Distribution Tests: cancel/test0 from test_exchange.c

For these tests, our code reads the orders from a file and calls
process_order.

Exchange Add/Trade Tests #1:
  Test 0
  Test 1
  Test 3
  Test 4
  Test 5
  Test 6
  Test 7
  Test 8
  Test 9
  Test 10
  Test 11

Exchange Add/Trade Tests #1:
  Test 20
  Test 21
  Test 22
  Test 23
  Test 24
  Test 30
  Test 31
  Test 32
  Test 33
  Test 34

Cancel Tests:
  Test 50
  Test 51
  Test 51
  Test 53
  Test 54
  Test 55
  Test 56
  Test 60
  Test 61
  Test 61
  Test 63
  Test 64
  Test 65
  Test 66
  
========================
Leak check tests.  Our code calls `process_order` with:

- No orders
- One buy order
- One sell order
- Matching sell and buy orders
- Handout orders
- Orders from Test 24
- Orders from Test 34
- Orders from Test 51
- Orders from Test 61

Last leak check tests, calls `simulate 6`, which should fail with an error message.

========================
Simulate tests

- ./simulate UOCCS 6    # example from the writeup
- ./simulate UOCCS 8    # file that does not end in a newline
- ./simulate UOCCS 70   # empty file
- ./simulate UOCCS 80   # non-existant file
- simulate UOCCS        # missing command-line argument.
