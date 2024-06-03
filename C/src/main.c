#include <stdio.h>
#include "calculate.h"
#include "basic.h"

int main() {
    say_hello();
    // print_type_ranges();
    fun_const();
    fun_macro(5);
    return 0;
}

void say_hello() {
    printf("Hello, world!\n");
}
 