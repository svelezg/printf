# Printf

## Description
This team project is part of the first year curriculum of Holberton School.
_printf replicates the C standard library printf() function.

## Authors
* **Cesar Velez** 
* **Santiago Velez**

## Task
### Task 0
I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life

Function that produces output according to a format.

Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. 
Handles the following conversion specifiers:
c
s
%


### Task 1
Education is when you read the fine print. Experience is what you get if you don't 

Handles the following conversion specifiers:
d
i


### Task 2
Just because it's in print doesn't mean it's the gospel

Man page for the function.

### Task 3
With a face like mine, I do better in print.

Handles the following custom conversion specifiers:

b: the unsigned int argument is converted to binary 


### Task 4
What one has not experienced, one will never understand in print 

Handls the following conversion specifiers:
u
o
x
X

### Task 5
Nothing in fine print is ever good news

Uses a local buffer in order to call write as little as possible.



### Task 14
Print is the sharpest and the strongest weapon of our party

Handles the following custom conversion specifier:

r : prints the reversed string


### Task 15
The flood of print has turned reading into a process of gulping rather than savoring

Handles the following custom conversion specifier:

R: prints the rot13'ed string
