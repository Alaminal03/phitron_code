
#include <stdio.h>

int main() {

    char name[100000];
    scanf("%s", name);
    int count=0,count1=0;

    for (int i = 0; name[i] !='\0';i++)
    {
        if(name[i]>='a' && name[i]<='z')
        {
           if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
        {
            count1++;
        }
        else
        {
            count++;
        }
        }
    }
    printf("%d", count);

    return 0;
}