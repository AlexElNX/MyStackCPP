#include <iostream>
#include "Stack.h"

int main()
{
    Stack stack(5);
    std::cout << "Empty: " << isEmpty(stack) << std::endl;
    push(stack, 'H');
    push(stack, 'e');
    push(stack, 'l');
    push(stack, 'l');
    push(stack, 'o');
    std::cout << "Full: " << isFull(stack) << std::endl;
    push(stack, 'W');
    push(stack, 'o');
    push(stack, 'r');
    push(stack, 'l');
    push(stack, 'd');
    push(stack, '!');
    show(stack);
    pop(stack);
    pop(stack);
    pop(stack);
    pop(stack);
    pop(stack);
    pop(stack);
    
    std::cout << "\n\n\n\n";
    show(stack);
    std::cout << "\n\n\n\n";
    std::cout << "Size: " << size(stack) << std::endl;
    std::cout << "Empty: " << isEmpty(stack) << std::endl;

    std::cout << "Top: " << top(stack) << std::endl;
    pop(stack);
    std::cout << "Top: " << top(stack) << std::endl;

    clear(stack);
    std::cout << "\n\n\n\n";
    show(stack);
    std::cout << "Size: " << size(stack) << std::endl;
    std::cout << "Empty: " << isEmpty(stack) << std::endl;

    std::cout << "Full: " << isFull(stack) << std::endl;
}
