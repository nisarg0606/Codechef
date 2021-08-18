#include<stdio.h>

int main()
{
    char s[7] = {'j','i', 'm', 'y', 'a', 'a', 'n'};
    int i = 0;
    int count = 0;
    while(i < 7)    
    {
        if(s[i] == 'a'|| s[i] == 'e' || s[i] == 'o' || s[i] == 'u'|| s[i] =='A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'U')
        {
            count++;//count = count + 1;
        }
        i++;//i = i + 1;
    }
    printf("The count of vowels in the string is %d", count);
}