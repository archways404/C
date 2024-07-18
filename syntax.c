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


struct struct_name {
    member_type1 name1;
    member_type1 name1;
    .
    .
};


/ C program to illustrate the use of structures 
#include <stdio.h> 
  
// declaring structure with name str1 
struct str1 { 
    int i; 
    char c; 
    float f; 
    char s[30]; 
}; 
  
// declaring structure with name str2 
struct str2 { 
    int ii; 
    char cc; 
    float ff; 
} var; // variable declaration with structure template 
  
// Driver code 
int main() 
{ 
    // variable declaration after structure template 
    // initialization with initializer list and designated 
    // initializer list 
    struct str1 var1 = { 1, 'A', 1.00, "GeeksforGeeks" }, 
                var2; 
    struct str2 var3 = { .ff = 5.00, .ii = 5, .cc = 'a' }; 
  
    // copying structure using assignment operator 
    var2 = var1; 
  
    printf("Struct 1:\n\ti = %d, c = %c, f = %f, s = %s\n", 
           var1.i, var1.c, var1.f, var1.s); 
    printf("Struct 2:\n\ti = %d, c = %c, f = %f, s = %s\n", 
           var2.i, var2.c, var2.f, var2.s); 
    printf("Struct 3\n\ti = %d, c = %c, f = %f\n", var3.ii, 
           var3.cc, var3.ff); 
  
    return 0; 
}


union union_name {
    // members
    .
    .
}



// C Program to demonstrate how to use union 
#include <stdio.h> 
  
// union template or declaration 
union un { 
    int member1; 
    char member2; 
    float member3; 
}; 
  
// driver code 
int main() 
{ 
  
    // defining a union variable 
    union un var1; 
  
    // initializing the union member 
    var1.member1 = 15; 
  
    printf("The value stored in member1 = %d", 
           var1.member1); 
  
    return 0; 
}


enum { name1, name2, name3 = value };

#include <stdio.h> 
  
enum week { Mon, Tue, Wed, Thur, Fri, Sat, Sun }; 
  
int main() 
{ 
    enum week day; 
    day = Wed; 
    printf("%d", day); 
    return 0; 
}


We can perform some set of operations on a file and C language provide some functions for it.

    Creating a new file – fopen() with attributes as “a” or “a+” or “w” or “w+”
    Opening an existing file – fopen()
    Reading from file – fscanf() or fgets()
    Writing to a file – fprintf() or fputs()
    Moving to a specific location in a file – fseek(), rewind()
    Closing a file – fclose()





C Math Functions

The <math.h> header file contains functions to perform the arithmetic operations. The following table contains some common maths functions in C:
S.No. 	

Function Name
	

Function Description

1. ceil(x) Returns the largest integer smaller than or equal to x.
2. floor(x) Returns the smallest integer larger than or equal to x.
3. fabs(x) Returns the absolute value of x.
4. sqrt(x) Returns the square root of x.
5. cbrt(x) Returns the cube root of x.
6. pow(x , y) Returns the value of x raised to the power y.
7. exp(x) Returns the value of e(Euler’s Number) raised to the power x.
8. fmod(x , y) Returns the remainder of x divided by y.
9. log(x) Returns the natural logarithm of x.
10. log10(x) Returns the common logarithm of x.
11. cos(x) Returns the cosine of radian angle x.
12. sin(x) Returns the sine of radian angle x.
13. tan(x) Returns the tangent of radian angle x.




  
