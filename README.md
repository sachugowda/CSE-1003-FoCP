# CSE-1003 · FoCP
**Fundamentals of Computer Programming**
 
Course resources for B.Tech first-year students, IIIT Bhopal.
 
**Instructor:** Dr Sachin D N, Assistant Professor, Department of CSE, IIIT Bhopal<br>
📧 [sachin.dn@iiitbhopal.ac.in](mailto:sachin.dn@iiitbhopal.ac.in)
 
🌐 **Course website:** <https://sachugowda.github.io/CSE-1003-FoCP/><br>
Slides, practice, the course assistant and resources for every module in one place. Works best on phones.

**Jump to:** [📘 Module 1: Fundamentals](#module-1) · [📗 Module 2: Control statements](#module-2) · [📙 Module 3: Functions and recursion](#module-3) · [📚 Free courses](#free-courses)

---

<a id="module-3"></a>
<details open>
<summary><h2>📙 Module 3: Modular Programming and Recursion</h2></summary>

### ⭐ Start here

| Class | Topics | Slides | Code |
|---|---|---|---|
| **Class 1: Build with Blocks** | Functions, declaration, definition, call and return | [Open slides (PDF)](https://github.com/sachugowda/CSE-1003-FoCP/blob/main/Module-3/class1/FoCP%20Module%203%20%C2%B7%20Class%201%20%E2%80%94%20Build%20with%20Blocks.pdf) | [Code](https://github.com/sachugowda/CSE-1003-FoCP/tree/main/Module-3/class1/code) |
| **Class 2: Copy or Key?** | Call by value, call by reference, the stack (shown with a debugger), scope of variables, storage classes | [Open slides (PDF)](https://github.com/sachugowda/CSE-1003-FoCP/blob/main/Module-3/class2/FoCP%20Module%203%20%C2%B7%20Class%202%20%E2%80%94%20Copy%20or%20Key.pdf) | [Code](https://github.com/sachugowda/CSE-1003-FoCP/tree/main/Module-3/class2/code) |
| **Class 3: The Function That Calls Itself** | Recursive functions, recursion versus iteration | [Open slides (PDF)](https://github.com/sachugowda/CSE-1003-FoCP/blob/main/Module-3/class3/FoCP%20Module%203%20%C2%B7%20Class%203%20%E2%80%94%20The%20Function%20That%20Calls%20Itself.pdf) | [Code](https://github.com/sachugowda/CSE-1003-FoCP/tree/main/Module-3/class3/code) |

🧪 **[Play with Concepts](https://sachugowda.github.io/CSE-1003-FoCP/practice/module3-playground.html)**: predict it, run it, break it, fix it, for all three classes  ·  🤖 **[Module 3 assistant](https://notebook.google.com/notebook/c4868271-7a90-4008-b751-02390816c359)**: type *hi* to start, ask any doubt, or paste a Play with Concepts question for a hint

### ▶️ Run the class programs in your browser

Open a link, type any input in the input box, then press **Run**.

**Class 1: Build with Blocks:** [bill_fn.c](https://onlinegdb.com/21VyCsqft) (Riya's bill built from functions)

**Class 2: Copy or Key?:** [canteen_v2.c](https://onlinegdb.com/9kiVY7a9P) (value, reference, static and global in one program)

**Class 3: The Function That Calls Itself:** [recursion_lab.c](https://onlinegdb.com/i-mooUt_Zq) (five small recursions) · [countdown.c](https://onlinegdb.com/xlqcZ3SEH) (change one line and predict the output)

**Tip:** to watch a function call and the stack step by step, paste a program into [Python Tutor for C](https://pythontutor.com/c.html).

### ✍️ Exam-style questions

1. Write a function `int is_leap(int year)` that returns 1 for a leap year and 0 otherwise. In `main`, read a year and print "Leap year" or "Not a leap year".
2. Explain call by value and call by reference. For `int a = 4, b = 9;`, write the `swap` function for each and show the values of `a` and `b` after the call.
3. Write a function `void divide(int a, int b, int *q, int *r)` that stores the quotient and the remainder. Call it from `main` for 17 and 5.
4. What is the difference between an `auto` and a `static` variable? Write a function that returns how many times it has been called, and show the output of three calls.
5. Write a recursive function for the sum of the digits of a number. Trace it for 472 and show the calls on the stack. Write the loop version too, and say which uses more memory and why.

**Check your work:** run your program with two or three different inputs, including a boundary value. For recursion, draw the stack on paper first.

### 📚 Go deeper

| Class | Read (W3Schools) | Watch |
|---|---|---|
| Class 1 | [C Functions](https://www.w3schools.com/c/c_functions.php) · [Function Parameters](https://www.w3schools.com/c/c_functions_parameters.php) · [Function Declaration](https://www.w3schools.com/c/c_functions_decl.php) | [NPTEL: Problem Solving through Programming in C](https://nptel.ac.in/courses/106105171) |
| Class 2 | [Function Parameters](https://www.w3schools.com/c/c_functions_parameters.php) · [Scope](https://www.w3schools.com/c/c_scope.php) · [Storage Classes](https://www.w3schools.com/c/c_storage_classes.php) | [NPTEL: Problem Solving through Programming in C](https://nptel.ac.in/courses/106105171) |
| Class 3 | [C Recursion](https://www.w3schools.com/c/c_functions_recursion.php) | [NPTEL: Problem Solving through Programming in C](https://nptel.ac.in/courses/106105171) |

</details>

<a id="module-2"></a>
<details>
<summary><h2>📗 Module 2: Basic Programming and Control Statements</h2></summary>

### ⭐ Start here

| Class | Topics | Slides | Code |
|---|---|---|---|
| **Class 1: From Code to Program** | Structure of a C program, life cycle, keywords, identifiers, data types, variables, constants, input/output | [Open slides (PDF)](https://github.com/sachugowda/CSE-1003-FoCP/blob/main/Module-2/class1/FoCP%20Module%202%20%C2%B7%20Class%201%20%E2%80%94%20From%20Code%20to%20Program.pdf) | [Code](https://github.com/sachugowda/CSE-1003-FoCP/tree/main/Module-2/class1) |
| **Class 2: Calculate and Decide** | Operators, type conversion and type casting, conditional branching (if, else-if, switch) | [Open slides (PDF)](https://github.com/sachugowda/CSE-1003-FoCP/blob/main/Module-2/class2/FoCP%20Module%202%20%C2%B7%20Class%202%20%E2%80%94%20Calculate%20and%20Decide.pdf) | [Code](https://github.com/sachugowda/CSE-1003-FoCP/tree/main/Module-2/class2/code) |
| **Class 3: Repeat Until Done** | Iterative statements (while, for, do-while), nested loops, break and continue | [Open slides (PDF)](https://github.com/sachugowda/CSE-1003-FoCP/blob/main/Module-2/class3/FoCP%20Module%202%20%C2%B7%20Class%203%20%E2%80%94%20Repeat%20Until%20Done.pdf) | [Code](https://github.com/sachugowda/CSE-1003-FoCP/tree/main/Module-2/class3/code) |

🧪 **[Play with Concepts](https://sachugowda.github.io/CSE-1003-FoCP/practice/module2-playground.html)**: predict it, run it, break it, fix it, for all three classes  ·  🤖 **[Module 2 assistant](https://notebook.google.com/notebook/d659fdb6-bb4f-4165-b843-cfd6d64b1b61)**: type *hi* to start, ask any doubt, or paste a Play with Concepts question for a hint

### ▶️ Run the class programs in your browser

Open a link, type any input in the input box, then press **Run**.

**Class 1: From Code to Program:** [bill.c](https://www.onlinegdb.com/r0IkkMjzI) (Canteen bill) · [bill_blanks.c](https://onlinegdb.com/sio4ZG1L6) (Fill in the blanks) · [task1_broken.c](https://onlinegdb.com/rVU0IAlIQ) (Fix 3 bugs)

**Class 2: Calculate and Decide:** [ops_blanks.c](https://onlinegdb.com/v5nx6m5Pa) (Operators fill-in) · [tc_blanks.c](https://onlinegdb.com/QD8AGNrgP) (Type conversion fill-in) · [bill2.c](https://onlinegdb.com/rUwfGyteW) (Bill with discount) · [menu.c](https://onlinegdb.com/vytRSpLVMZ) (switch menu) · [bill2_blanks.c](https://onlinegdb.com/VRSF3kAW4) (Final fill-in)

**Class 3: Repeat Until Done:** [collatz.c](https://onlinegdb.com/zF1-YZZV3) (3n + 1 puzzle) · [miss_sum.c](https://onlinegdb.com/XTp09_nnB) (Missing line) · [miss_pattern.c](https://onlinegdb.com/mO4omS1u2) (Missing line) · [broken_table.c](https://onlinegdb.com/aAWDAk8fH) (Fix 3 bugs) · [canteen3.c](https://onlinegdb.com/fEd5M0-HI) (Canteen counter) · [seats.c](https://onlinegdb.com/_zOm6Xm2Y) (Cinema seats) · [canteen3_missing.c](https://onlinegdb.com/oG63uc1EI) (3 missing lines) · [grains.c](https://onlinegdb.com/DVDy76PPW) (Chessboard puzzle)

### ✍️ Exam-style questions

1. Write a C program to read marks in 3 subjects and print the total and the average with 2 decimal places. Explain why `(float)` is needed.
2. What do `7 / 2`, `7 % 2`, `7 / 2.0` and `(float)(7 / 2)` give? Explain each answer.
3. Write a program using `switch` for a canteen menu: 1 Chai ₹10, 2 Samosa ₹15, 3 Maggi ₹40, anything else prints "No such item". What happens if one `break` is missing?
4. Write a program to print the multiplication table of a number using a `for` loop. Rewrite it using `while`.
5. Print a star triangle with n rows using nested loops. Explain the difference between `break` and `continue` with one example each.

**Check your work:** run your program in OnlineGDB with two or three different inputs, including a boundary value.

### 📚 Go deeper

| Class | Read (W3Schools) | Watch |
|---|---|---|
| Class 1 | [C Syntax](https://www.w3schools.com/c/c_syntax.php) · [Output](https://www.w3schools.com/c/c_output.php) · [Variables](https://www.w3schools.com/c/c_variables.php) · [Data Types](https://www.w3schools.com/c/c_data_types.php) · [Constants](https://www.w3schools.com/c/c_constants.php) · [User Input](https://www.w3schools.com/c/c_user_input.php) | [NPTEL: Problem Solving through Programming in C](https://nptel.ac.in/courses/106105171) |
| Class 2 | [Operators](https://www.w3schools.com/c/c_operators.php) · [Type Conversion](https://www.w3schools.com/c/c_type_conversion.php) · [If...Else](https://www.w3schools.com/c/c_conditions.php) · [Switch](https://www.w3schools.com/c/c_switch.php) | [NPTEL: Problem Solving through Programming in C](https://nptel.ac.in/courses/106105171) |
| Class 3 | [While Loop](https://www.w3schools.com/c/c_while_loop.php) · [For Loop](https://www.w3schools.com/c/c_for_loop.php) · [Break/Continue](https://www.w3schools.com/c/c_break_continue.php) | [NPTEL: Problem Solving through Programming in C](https://nptel.ac.in/courses/106105171) |

</details>

<a id="module-1"></a>
<details>
<summary><h2>📘 Module 1: Fundamentals of Programming</h2></summary>

### ⭐ Start here

| | What it is | Link |
|---|---|---|
| 📊 **Slides** | Class 1: Why learn the fundamentals in the AI era | [Open slides](https://github.com/sachugowda/CSE-1003-FoCP/tree/main/CS1) |
| 📊 **Slides** | Module 1 recap: the canteen bill | [Open recap](https://github.com/sachugowda/CSE-1003-FoCP/tree/main/Module-1-Recap) |
| 🧪 **Play with Concepts** | Binary switches, name the error, trace the loop, algorithms and flowcharts | [Start playing](https://sachugowda.github.io/CSE-1003-FoCP/practice/module1-practice.html) |
| 🤖 **Assistant** | Your Module 1 study partner: ask any doubt, get concepts explained simply, revise before exams, or get a hint when stuck in Play with Concepts | [Module 1 assistant](https://notebook.google.com/notebook/d21e64a6-0d1c-4e65-ac2d-39fe2dfde9be) |

**How to study:** go through the slides, then practise. Use the assistant any time you want to understand something better. For example:
- "Explain the difference between a compiler and an interpreter with an example."
- "Show me how to convert 45 to binary, step by step."
- "Give me 5 questions to test myself on flowcharts."
- Stuck in Play with Concepts? Tap **Copy question** and paste it into the assistant for a hint.

### ✍️ Exam-style questions

Play with Concepts checks quick answers. These questions practise what exams ask you to **write and draw**. Solve them on paper first.

1. Convert 75 to binary, octal and hexadecimal.
2. Write the word CHAI in ASCII codes, then in binary.
3. Name the four types of errors in C and give one example of each.
4. Write an algorithm and draw a flowchart to find the largest of three numbers. Test it with 3 equal numbers.
5. An auto charges ₹30 for the first 2 km and ₹15 per km after that. Write the algorithm and pseudocode, and test it for 1 km, 2 km and 10 km.

**Check your work:** type your answer into the assistant and ask *"Is my answer correct? What did I miss?"* For flowcharts, describe each box in order, or draw it in [draw.io](https://app.diagrams.net/) or [Flowgorithm](http://www.flowgorithm.org/).

### 📚 Go deeper: additional resources by topic

| # | Topic | 📖 Notes | 🎥 Watch | 🧪 Play area |
|---|---|---|---|---|
| 1 | Brief history of computing and computers | [History of Computers (GfG)](https://www.geeksforgeeks.org/computer-science-fundamentals/history-of-computers/) · [Generations of Computers (GfG)](https://www.geeksforgeeks.org/computer-science-fundamentals/generations-of-computers-computer-fundamentals/) | [Crash Course CS #1: Early Computing](https://www.youtube.com/watch?v=O5nskjZ_GoI) · [#2: Electronic Computing](https://www.youtube.com/watch?v=LN0ucKNX0hc) | — |
| 2 | Basic organisation of a computer | [Block Diagram of a Computer](https://artoftesting.com/block-diagram-of-computer) | [Crash Course CS #7: The Central Processing Unit](https://www.youtube.com/watch?v=FZGugFqdr60) | — |
| 3 | Representing information as bit patterns | [ASCII table](https://www.asciitable.com/) | [Crash Course CS #4: Representing Numbers and Letters with Binary](https://www.youtube.com/watch?v=1GSjbWt0c9M) | [CS Unplugged: Binary Numbers](https://classic.csunplugged.org/binary-numbers/) |
| 4 | Number systems | [Base Conversions for Number Systems (GfG)](https://www.geeksforgeeks.org/digital-logic/number-system-and-base-conversions/) | [Crash Course CS #4](https://www.youtube.com/watch?v=1GSjbWt0c9M) | [Cisco Binary Game](https://learningnetwork.cisco.com/s/binary-game) (free sign-up) |
| 5 | Basics of computer languages | [Language Processors: Assembler, Compiler, Interpreter (GfG)](https://www.geeksforgeeks.org/computer-science-fundamentals/language-processors-assembler-compiler-and-interpreter/) | [Crash Course CS #11: The First Programming Languages](https://www.youtube.com/watch?v=RU1u-js7db8) | [Compiler Explorer](https://godbolt.org/): see your C turn into assembly |
| 6 | Generations of programming languages | [Generations of Programming Languages (GfG)](https://www.geeksforgeeks.org/blogs/generation-programming-languages/) | [Crash Course CS #11](https://www.youtube.com/watch?v=RU1u-js7db8) | — |
| 7 | Compilers | [Compiler vs Interpreter (GfG)](https://www.geeksforgeeks.org/compiler-design/difference-between-compiler-and-interpreter/) | [NPTEL: Problem Solving through Programming in C, Week 1](https://nptel.ac.in/courses/106105171) | [Compiler Explorer](https://godbolt.org/) |
| 8 | Interpreters | [Compiled vs Interpreted Languages (GfG)](https://www.geeksforgeeks.org/compiler-design/compiler-vs-interpreter-2/) | [NPTEL Week 1](https://nptel.ac.in/courses/106105171) | — |
| 9 | Programming environments | [W3Schools: C Get Started](https://www.w3schools.com/c/c_getstarted.php) | [NPTEL Week 1](https://nptel.ac.in/courses/106105171) | [W3Schools C editor](https://www.w3schools.com/c/c_compiler.php) · [OnlineGDB](https://www.onlinegdb.com/) |
| 10 | Types of errors and debugging techniques | [Errors in C/C++ (GfG)](https://www.geeksforgeeks.org/cpp/errors-in-cc/) | [NPTEL Week 1: syntax and semantic errors](https://nptel.ac.in/courses/106105171) | [OnlineGDB](https://www.onlinegdb.com/) (use **Debug**) · [Python Tutor for C](https://pythontutor.com/c.html) |
| 11 | Problem-solving aspects | [Algorithm vs Pseudocode vs Program (GfG)](https://www.geeksforgeeks.org/dsa/difference-between-algorithm-pseudocode-and-program/) | [Crash Course CS #12: Programming Basics](https://www.youtube.com/watch?v=l26oaHV7D40) | — |
| 12 | Introduction to algorithms | [Algorithm vs Pseudocode vs Program (GfG)](https://www.geeksforgeeks.org/dsa/difference-between-algorithm-pseudocode-and-program/) | [Crash Course CS #13: Intro to Algorithms](https://www.youtube.com/watch?v=rL8X2mlNHPM) | [Python Tutor for C](https://pythontutor.com/c.html) |
| 13 | Flowcharts | [Algorithm vs Flowchart (GfG)](https://www.geeksforgeeks.org/dsa/difference-between-algorithm-and-flowchart/) | [NPTEL Week 1: flowcharts](https://nptel.ac.in/courses/106105171) | [Flowgorithm](http://www.flowgorithm.org/) (runs your flowchart, Windows) · [draw.io](https://app.diagrams.net/) |
| 14 | Pseudocode | [What is Pseudocode (GfG)](https://www.geeksforgeeks.org/dsa/what-is-pseudocode-a-complete-tutorial/) | [NPTEL Week 1: pseudocode](https://nptel.ac.in/courses/106105171) | [Flowgorithm](http://www.flowgorithm.org/): shows the code for your flowchart |

</details>

---

<a id="free-courses"></a>
## 📚 Full online courses (free)

| Course | Why take it |
|---|---|
| [NPTEL: Problem Solving through Programming in C](https://nptel.ac.in/courses/106105171), Prof. Anupam Basu, IIT Kharagpur | Follows this course's syllabus closely; great for revision |
| [NPTEL: The Joy of Computing using Python](https://nptel.ac.in/courses/106106182), Prof. Sudarshan Iyengar, IIT Ropar · *optional* | A fun, story-driven first course in computational thinking. It uses Python, not C, but the logic you learn carries over |
| [Crash Course Computer Science](https://www.youtube.com/playlist?list=PL8dPuuaLjXtNlUrzyH5r6jN9ulIgZBpdo) | Short, visual videos on how computers work |

> NPTEL lectures are free to watch any time.

---

*Links checked October 2026. If a link breaks, please open an issue.*
