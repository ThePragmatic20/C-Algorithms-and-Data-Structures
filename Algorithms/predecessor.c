// predecessor.c: Rafael Moura
// Description: Read a number and print the predecessor and the 

#include <stdio.h>

int main()
{
    int num, pre, suc;

    printf("type a number: ");
    scanf("%d", &num);

    pre = num - 1;
    
    suc = num+ 1;

    printf("\n the predecessor it's %d", pre);
    printf("\n the successor it's %d\n", suc);

}