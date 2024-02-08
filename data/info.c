#include <stdio.h>
#include <limits.h>

void print_info(char type_name[], char format_specifier[], size_t size,
                long long min_signed, long long max_signed,
                char format_unsigned[], unsigned long long max_unsigned)
{
    printf("%-20s %-10s %-10zu %-20lld %-20lld %-10s %-20llu\n",
           type_name, format_specifier, size, min_signed, max_signed, format_unsigned, max_unsigned);
}

int main()
{

    print_info("char", "%c", sizeof(char), CHAR_MIN, CHAR_MAX, "%c", UCHAR_MAX);
    print_info("short", "%hu", sizeof(short), SHRT_MIN, SHRT_MAX, "%hu", USHRT_MAX);
    print_info("int", "%d", sizeof(int), INT_MIN, INT_MAX, "%u", UINT_MAX);
    print_info("long", "%ld", sizeof(long), LONG_MIN, LONG_MAX, "%lu", ULONG_MAX);
    print_info("long long", "%lld", sizeof(long long), LLONG_MIN, LLONG_MAX, "%llu", ULLONG_MAX);

    return 0;
}
