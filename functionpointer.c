#include<stdio.h>

void callfunc(void (*func)()) {
    func();
}
void hello() {
    printf("Hello\n");
}

int main() {
    
    callfunc(hello);
}
