/*
Summarizing how to set, clear, toggle, and query bit flags:

To query bit states, we use bitwise AND:
if (flags & option4) ... // if option4 is set, do something

To set bits (turn on), we use bitwise OR:
flags |= option4; // turn option 4 on.
flags |= (option4 | option5); // turn options 4 and 5 on.

To clear bits (turn off), we use bitwise AND with bitwise NOT:
flags &= ~option4; // turn option 4 off
flags &= ~(option4 | option5); // turn options 4 and 5 off

To flip bit states, we use bitwise XOR:
flags ^= option4; // flip option4 from on to off, or vice versa
flags ^= (option4 | option5); // flip options 4 and 5

*/
