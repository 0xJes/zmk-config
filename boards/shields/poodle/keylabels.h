/*          30 Keys Hummingbird-like
    ╭─────────────╮         ╭─────────────╮
╭───╯ 0   1   2   ╰───╮ ╭───╯ 3   4   5   ╰───╮
│ 6   7   8   9   10  │ │ 11  12  13  14  15  │
│ 16  17  18  19  20  │ │ 21  22  23  24  25  │
╰───────────╮ 26  27  │ │ 28  29  ╭───────────╯
            ╰─────────╯ ╰─────────╯
    ╭─────────────╮         ╭─────────────╮
╭───╯ LT3 LT2 LT1 ╰───╮ ╭───╯ RT1 RT2 RT3 ╰───╮
│ LM4 LM3 LM2 LM1 LM0 │ │ RM0 RM1 RM2 RM3 RM4 │
│ LB4 LB3 LB2 LB1 LB0 │ │ RB0 RB1 RB2 RB3 RB4 │
╰───────────╮ LH1 LH0 │ │ RH0 RH1 ╭───────────╯
            ╰─────────╯ ╰─────────╯          */

#pragma once

#define LT1  2  // left-top row
#define LT2  1
#define LT3  0

#define RT1  3 // right-top row
#define RT2  4
#define RT3  5

#define LM0 10  // left-middle row
#define LM1  9
#define LM2  8
#define LM3  7
#define LM4  6

#define RM0 11  // right-middle row
#define RM1 12
#define RM2 13
#define RM3 14
#define RM4 15

#define LB0 20  // left-bottom row
#define LB1 19
#define LB2 18
#define LB3 17
#define LB4 16

#define RB0 21  // right-bottom row
#define RB1 22
#define RB2 23
#define RB3 24
#define RB4 25

#define LH0 26 // thumb keys
#define RH0 27
