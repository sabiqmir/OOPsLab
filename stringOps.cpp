#include <iostream>
using namespace std;

int stringLength(const char *str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

void stringReverse(char *str)
{
    int start = 0;
    int end = stringLength(str) - 1;
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void stringConcatenate(char *dest, const char *src)
{
    int destLen = stringLength(dest);
    int i = 0;
    while (src[i] != '\0')
    {
        dest[destLen + i] = src[i];
        i++;
    }
    dest[destLen + i] = '\0';
}

void getSubstring(const char *src, char *dest, int start, int length)
{
    int i;
    for (i = 0; i < length && src[start + i] != '\0'; ++i)
    {
        dest[i] = src[start + i];
    }
    dest[i] = '\0';
}

int charFrequency(const char *str, char ch)
{
    int count = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            count++;
        }
        i++;
    }
    return count;
}
