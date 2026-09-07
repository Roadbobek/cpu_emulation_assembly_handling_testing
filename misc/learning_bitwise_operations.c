//
// Created by Roadb on 6/09/2026.
// first c code ong
// long ago i did a very shitty c++ course on w3school or wtv so i think i can do c with no other knowledge.
// gonna try and do this because ai told me i should learn this before trying to code an assembly interpreter.
// https://www.geeksforgeeks.org/c/bitwise-operators-in-c-cpp/
// i understand that a bitwise operation is just an operation directly on the individual bits of some data, either actual bits or the bits of an integer for eg,
// if im correct it is somewhat what the actual cpu it is very efficient, a very low form of data manipulation.
// ive heard of the operations but ive never really used them in depth so im gonna practice them here alongside general c.
// for general things i dont know i will refer to https://www.learn-c.org/ mainly, for eg in the geeksforgeeks bitwise operators tutorial
// they use formating in the printf function which i dont understand.
// well they dont really explain everything in depth since its fore begginers so i will just search it up and use geeksforgeeks for eg,
//https://www.geeksforgeeks.org/c/printf-in-c/ + https://www.geeksforgeeks.org/c/format-specifiers-in-c/
//
//

#include <stdio.h>

int main(void)
{
    // syntax: int printf(const char *format, ...)
    // the printf function returns an integer, it returns the number of characters printed
    // (excluding the null byte used to end a string) if successful. on error, it returns a negative value.
    // unlike other languages with built-in string data types c simply implements strings as a one-dimensional
    // array of characters terminated by a special null character ( \0 ). it is just an array of the char data type
    // with the null terminator at the end. but what is a char in c, a char is semantically (commonly) used to represent
    // a single text character (ascii/utf-8, which are encodings for text). but thats just an
    // implied use case, really a char is just an integral data type (whole number, integer) just like an int, but
    // it differs to an int in its size and range. a char is 1 byte / 8 bits while an int is minimum 2 bytes / 16 bits
    // but commonly 4 bytes / 32 bits on desktop platforms. a chars range is -128 to 127 (signed) or 0 to 255 (unsigned),
    // where as a 4 byte signed ints range is -2,147,483,648 to 2,147,483,647.
    // a char is the smallest addressable unit / data type in c. thats the technical explenation of a char,
    // but a common use case for it is to represent a single text character, when used like this the char ofc still
    // stores an integral, but it represents a characters numeric code in a text encoding standard like ascii/utf-8.
    // for example in ascii the letter a corresponds to 97:
    printf("%c\n", 97); // printing the int 97 as a char results in the letter a.
    printf("%d\n", 'a'); // printing the char a results in the int 97, since thats what it stores under the hood.
    // the compiler looks up 'a' in the execution character set (ascii/utf-8 on a modern desktop system) and replaces
    // it with the integer 97, this is compile-time substitution.
    // its worth noting for any operations on or using a char the compiler automatically applies integral promotion to it,
    // converting the char to an int. this happens for any operation as in reads, evaluations / calculations, writes.
    // when writing to a variable, as long as it is a char it will always be converted and stored back as a 1 byte char.
    // it applies to any expression context: +, -, *, ==, <<, the ternary operator, printf function arguments, etc.
    // the rule is simply, whenever a small integer type is used in an expression,
    // its value is converted to int for the purpose of that operation.
    const char test = 97; // here if we wrote 'a' the compiler would automatically substitute 97 in its place.
    printf("%c\n", test); // we can see the char 97 still prints to the character a.
    return 0;
}