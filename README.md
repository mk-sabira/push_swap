📊 Push Swap Project

Overview

The Push Swap project involves sorting a stack of integers using a set of stack operations. This implementation utilizes the TURK algorithm for efficient sorting.

Operations:

`sa`: Swap the top two elements of stack A.
`sb`: Swap the top two elements of stack B.
`ss`: Swap the top two elements of both stacks A and B.
`pa`: Push the top element of stack B onto stack A.
`pb`: Push the top element of stack A onto stack B.
`ra`: Rotate stack A (move the top element to the bottom).
`rb`: Rotate stack B (move the top element to the bottom).
`rr`: Rotate both stacks A and B.
`rra`: Reverse rotate stack A (move the bottom element to the top).
`rrb`: Reverse rotate stack B (move the bottom element to the top).
`rrr`: Reverse rotate both stacks A and B.

🎮 Requirements:

- C Compiler: GCC or any other C compiler.
- Make: For building the project.

🧩 Installation:
1) Clone the Repository: `git clone https://github.com/mk-sabira/push_swap.git`

2) Navigate to the Project Directory: `cd push_swap`

3) Build the Project: `make`

🕹️Usage: 
1) Run the Program: `./push_swap [list_of_numbers]`
2) Example: `./push_swap 3 5 1 4 2`
