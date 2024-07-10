#include <stdio.h>
#include "calculate.h"
#include "basic.h"

void global_static();
extern void fun_error();
extern void fun_variable_arg();
extern void function_test();
int main()
{
    test();
    // fun_error();
    // fun_variable_arg();
    function_test();
    // global_static();
    // print_type_ranges();
    // fun_const();
    // fun_macro(5);
    return 0;
}
extern int global_var;
void global_static()
{
    global_var += 1;
    static_var += 1;
    printf("global_var: %d!\n", global_var);
    printf("static_var: %d!\n", static_var);
}
