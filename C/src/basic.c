#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <sys/time.h>
#include "basic.h"
#include <string.h>

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

// const and #define
#define PI 3.14159
void fun_const()
{
    const int const_integter = 10;
    printf("PI :\t\t %f\n", PI);
    printf("const_integter : %d\n", const_integter);
}

// macro
#define SQUARE(x) (x * x)
void fun_macro(int num)
{
    int square_resule = SQUARE(num);
    printf("%d\n", square_resule);
}
void func_without_register()
{
    int sum = 0;

    struct timeval start, end;
    float elapsed_time;

    gettimeofday(&start, NULL); // 记录开始时间

    long count = 1000000000;
    for (int i = 0; i < count; i++)
    {
        sum += i;
        sum -= i;
        sum -= i;
    }

    gettimeofday(&end, NULL); // 记录结束时间
    // 计算耗时（秒为单位）
    elapsed_time = (end.tv_sec - start.tv_sec) + (end.tv_usec - start.tv_usec) / 1000000.0;
    printf("计算 %ld 次（不使用 register）所用时间：%f 秒\n", count, elapsed_time);
}

void func_with_register()
{
    register int sum = 0;

    struct timeval start, end;
    float elapsed_time;

    gettimeofday(&start, NULL); // 记录开始时间

    long count = 1000000000;
    for (register int i = 0; i < count; i++)
    {
        sum += i;
        sum -= i;
        sum -= i;
    }

    gettimeofday(&end, NULL); // 记录结束时间
    // 计算耗时（秒为单位）
    elapsed_time = (end.tv_sec - start.tv_sec) + (end.tv_usec - start.tv_usec) / 1000000.0;
    printf("计算 %ld 次（使用 register）所用时间：%f 秒\n", count, elapsed_time);
}

void count_int(int count)
{
    static int integer = 3;
    for (int i = 0; i < count; i++)
    {
        printf("count:  %d\t integer: %d\n", i, integer++); /* code */
    }
}

extern int global_var;
// 存储类
void fun_auto()
{
    // 1. auto
    int num = 9;
    auto int auto_num = 9; // 和上面一样，auto是默认存储类

    // 2. register
    // func_without_register();
    // func_with_register();
    printf("auto num %d\n", auto_num);

    // 3. static
    printf("one --\n");
    count_int(5);
    printf("tow --\n");
    count_int(5);

    // 4. extern
    global_var += 1;
    static_var += 1;
    printf("global_var: %d!\n", global_var);
    printf("static_var: %d!\n", static_var);
}

// test
void test()
{
    printf("\n\t\t test \n");
    char string[] = "asdasd";
    printf("lengtn: %lu \n", strlen(string));
    // fun_auto();
}