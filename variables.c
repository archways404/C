data_type variable_name;
data_type variable_name = initial_value;

char c = 'a';
int integer = 24;
float f = 24.32;
double d = 24.3435;
void v;

unsigned int var1;
long double var2;
long int var3;

PRINT:
printf("formatted-string", ...{arguments-list});

INPUT:
scanf("formatted-string", {address-argument-list});

FORMAT SPECIFIERS
%c For b type.
%d For signed integer type.
%f For float type.
%lf Double
%p Pointer
%s String
%u Unsigned int
%% Prints % character

\b 	Backspace 	It is used to move the cursor backward.
\n 	New Line 	It moves the cursor to the start of the next line.
\r 	Carriage Return 	It moves the cursor to the start of the current line.
\t 	Horizontal Tab 	It inserts some whitespace to the left of the cursor and moves the cursor accordingly.
\v 	Vertical Tab 	It is used to insert vertical space.
\\ 	Backlash 	Use to insert backslash character.
\” 	Double Quote 	It is used to display double quotation marks.
\0 	NULL 	It represents the NLL character.


Operator Type 	Description 	Example
1. Arithmetic Operators 	Operators that perform arithmetic operations. 	+, -, *, /, %
2. Relational Operators 	They are used to compare two values. 	<, >, <=, >=, ==, !=
3. Bitwise Operators 	They are used to perform bit-level operations on integers. 	&, ^, |, <<, >>, ~
4. Logical Operators 	They perform logical operations such as logical AND, logical OR, etc. 	&&, ||, !
5. Conditional Operators 	The conditional Operator is used to insert conditional code. 	? :
6. Assignment Operators 	They are used to assign some value to the variables. 	=, +=, -=, <<=
7. Miscellaneous Operators 	comma, addressof, sizeof, etc. are some other types of operators. 	 , sizeof, &, *, ->, .


if (condition) {
    // statements
}

if (expression) {
    // if block
} else {
     // else block
}

if (expression) {
    // block 1
} else if (expression) {
    // block 1
} else {
    // else block
}


switch (expression) {
    case value1:
        // statements
        break;
    case value2:
        // statements
        break;
    default:
        // defualt block
        break;
}


(condition) ? (true-exp) : (false-exp);


for (initialization; condition; updation) {
    // statements
}

while (condition) {
    // initialization
}

do {
    // statements
} while (condition);

break;
continue;
goto x;


data_type arr_name [size1];   // 1D array
data_type arr_name [size1][size2];   // 2D array
data_type arr_name [size1][size2][size3];    // 3D array


char string_name [] = "any_text";


S. No.
	

Function
	

Description

1. strlen() 	Find the length of the string.
2. strcmp() 	Compares two strings.
3. strcpy() 	Copy one string to another.
4. strcat() 	Concatenate one string with another.
5. strchr() 	Find the given character in the string.
6. strstr() 	Find the given substring in the string.


data_type * ptr_name;
Note: The addressof (&) operator is used to get the address of a variable.


// C program to illustrate Pointers 
#include <stdio.h> 
  
// Driver program 
int main() 
{ 
    int var = 10; 
  
    // declare pointer variable 
    int* ptr; 
  
    // note that data type of ptr and var must be same 
    ptr = &var; 
  
    // assign the address of a variable to a pointer 
    printf("Value at ptr = %p \n", ptr); 
    printf("Value at var = %d \n", var); 
    printf("Value at *ptr = %d \n", *ptr); 
    return 0; 
}



return_type function_name ( parameter_type_list... );

return_type function_name ( parameter_type_name_list... ) {
    // block of statements
    .
    .
}

function_name (arguments);



malloc (size_t size);

calloc (size_t num, size_t size);

realloc (void *ptr, size_t new_size);

free (ptr);



// C program to illustrate the dynamic memory allocation 
#include <stdio.h> 
#include <stdlib.h> 
  
int main() 
{ 
    // using malloc to allocate the int array of size 10 
    int* ptr = (int*)malloc(sizeof(int) * 10); 
  
    // allocating same array using calloc 
    int* ptr2 = (int*)calloc(10, sizeof(int)); 
  
    printf("malloc Array Size: %d\n", 10); 
    printf("calloc Array Size: %d\n", 10); 
  
    // reallocating the size of first array 
    ptr = realloc(ptr, sizeof(int) * 5); 
    printf("malloc Array Size after using realloc: %d", 5); 
  
    // freeing all memory 
    free(ptr); 
  
    return 0; 
}



  
