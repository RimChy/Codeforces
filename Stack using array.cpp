#include <stdio.h>
#define sz 3
int arr[sz], n = sz;
int top = 0;

void push(int x)
{
    if(top>=n)
    {
        puts("Overflow!");
        return;
    }
    arr[top++]=x;
    printf("%d successfully pushed, top = %d!\n", x, top);
    return;
}

void pop()
{
    int x;
    if(top==0)
    {
        puts("Underflow!");
        return;
    }
    x = arr[--top];
    printf("%d successfully popped!, top = %d\n", x, top);
    return;
}


int main()
{


    push(3);
    push(6);
    push(9);
    pop();
    pop();
    pop();
    pop();
    push(43);
    push(19);
    push(6);
    push(4);

    return 0;

}
