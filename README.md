# _printf
The _printf function (the name comes from print formatted) prints a string on the screen using a format string that includes the instructions to mix several strings and produce the final string to be printed on the screen.
Prototype: int _printf(const char *, ...);
# Examples
•String

Input: _printf("Let's try to printf a simple sentence.\n");
Output: Let's try to printf a simple sentence.

•Character

Input: _printf("Character:[%c]\n", 'H');
Output: Character:[H]

•Integer
Input: _printf("Length:[%d, %i]\n", len, len);
Output: Length:[39, 39]
