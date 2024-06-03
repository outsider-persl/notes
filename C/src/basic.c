#include <stdio.h>
#include <limits.h>
#include <float.h>
#include "basic.h"

void print_type_ranges()
{
    // char
    printf("char:\n");
    printf("  Signed char min: %d\n", SCHAR_MIN);
    printf("  Signed char max: %d\n", SCHAR_MAX);
    printf("  Unsigned char max: %u\n", UCHAR_MAX);

    // short
    printf("short:\n");
    printf("  Signed short min: %d\n", SHRT_MIN);
    printf("  Signed short max: %d\n", SHRT_MAX);
    printf("  Unsigned short max: %u\n", USHRT_MAX);

    // int
    printf("int:\n");
    printf("  Signed int min: %d\n", INT_MIN);
    printf("  Signed int max: %d\n", INT_MAX);
    printf("  Unsigned int max: %u\n", UINT_MAX);

    // long
    printf("long:\n");
    printf("  Signed long min: %ld\n", LONG_MIN);
    printf("  Signed long max: %ld\n", LONG_MAX);
    printf("  Unsigned long max: %lu\n", ULONG_MAX);

    // long long
    printf("long long:\n");
    printf("  Signed long long min: %lld\n", LLONG_MIN);
    printf("  Signed long long max: %lld\n", LLONG_MAX);
    printf("  Unsigned long long max: %llu\n", ULLONG_MAX);

    // float
    printf("float:\n");
    printf("  Float min: %e\n", FLT_MIN);
    printf("  Float max: %e\n", FLT_MAX);
    printf("  Float epsilon: %e\n", FLT_EPSILON);

    // double
    printf("double:\n");
    printf("  Double min: %e\n", DBL_MIN);
    printf("  Double max: %e\n", DBL_MAX);
    printf("  Double epsilon: %e\n", DBL_EPSILON);

    // long double
    printf("long double:\n");
    printf("  Long double min: %Le\n", LDBL_MIN);
    printf("  Long double max: %Le\n", LDBL_MAX);
    printf("  Long double epsilon: %Le\n", LDBL_EPSILON);
}

#define PI 3.14159
void fun_const()
{
    const int const_integter = 10;
    printf("PI :\t\t %f\n", PI);
    printf("const_integter : %d\n", const_integter);
}

#define SQUARE(x) (x * x)
void fun_macro(int num)
{
    int square_resule = SQUARE(num);
    printf("%d\n", square_resule);
}