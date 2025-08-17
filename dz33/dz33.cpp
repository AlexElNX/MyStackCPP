#include <iostream>
#include "Stack.h"

int main()
{
    Stack stack(5);
    std::cout << "Empty: " << stack.isEmpty() << std::endl;
    stack.push('H');
    stack.push('e');
    stack.push('l');
    stack.push('l');
    stack.push('o');
    std::cout << "Full: " << stack.isFull() << std::endl;
    stack.push('W');
    stack.push('o');
    stack.push('r');
    stack.push('l');
    stack.push('d');
    stack.push('!');
    stack.show();

    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    
    std::cout << "\n\n\n\n";
    stack.show();
    std::cout << "\n\n\n\n";
    std::cout << "Size: " << stack.size() << std::endl;
    std::cout << "Empty: " << stack.isEmpty() << std::endl;

    std::cout << "Top: " << stack.top() << std::endl;
    stack.pop();
    std::cout << "Top: " << stack.top() << std::endl;

    stack.clear();
    std::cout << "\n\n\n\n";
    stack.show();
    std::cout << "Size: " << stack.size() << std::endl;
    std::cout << "Empty: " << stack.isEmpty() << std::endl;

    std::cout << "Full: " << stack.isFull() << std::endl;


}
