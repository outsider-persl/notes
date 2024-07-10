#include <stdio.h>
#include <stdlib.h> // Include stdlib.h for malloc
#include <ctype.h>  // 包含 ctype.h 头文件来使用 isspace 函数
#include <locale.h>
#include <string.h>
void func_c_type()
{
    typedef struct
    {
        char name[50];
        int age;
    } Person;

    Person *lm = malloc(sizeof(Person));
    // Check if malloc succeeded
    if (lm == NULL)
    {
        fprintf(stderr, "Failed to allocate memory\n");
        return;
    }

    strcpy(lm->name, "John Doe");
    lm->age = 10;
    printf("%s %d\n", lm->name, lm->age);

    // Free allocated memory when done
    free(lm);

    char str[] = "你好 hello ! \t \n";
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]); // 直接打印字符本身
        i++;
    }
    printf("\n");
}

int *call()
{
    int num = 100;
    int *address = (int *)malloc(sizeof(int));
    if (address == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    *address = num; // 将 num 的值拷贝到动态分配的内存中
    printf("created var address is :%p  value: %d \n", (void *)address, *address);
    return address;
    
}
void call_back(int *address)
{
    printf("address: %p  value: %d\n", address, *address);
    free(address);
    printf("address: %p  value: %d\n", address, *address);
}

void function_test()
{
    setlocale(LC_ALL, "zh_CN.UTF-8"); // 设置本地化环境
    printf("Current locale for LC_ALL: %s\n", setlocale(LC_ALL, NULL));
    printf("Current locale for LC_TIME: %s\n", setlocale(LC_TIME, NULL));
    printf("Current locale for LC_NUMERIC: %s\n", setlocale(LC_NUMERIC, NULL));
    func_c_type();
    call_back(call());
}