#include <stdio.h>

union Data
{
    int i;
    float f;
    char str[50];
};

int main()
{
    union Data data;
    printf("Memory size occupide by data: %d\n", sizeof(data));

    return 0;
}
