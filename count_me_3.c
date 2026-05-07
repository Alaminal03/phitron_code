
#include <stdio.h>

int main()
 {

    int n;
    scanf("%d", &n);
    
    while(n--)
    {
        
        char name[10001];
        scanf("%s", name);
        int cap = 0, small = 0, dig = 0;

         for (int i = 0; name[i] != '\0';i++)
         {
            if(name[i]>='A' && name[i]<='Z')
            {
                cap++;
            }
            else if(name[i]>='a' && name[i]<='z')
            {
                small++;
            }
            else if(name[i]>='0' && name[i]<='9')
            {
                dig++;
            }
        }
    printf("%d %d %d\n", cap, small, dig);
}
    
    return 0;
}