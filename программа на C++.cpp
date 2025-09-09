//Task 2 создать стек на с++


//массив
#include <iostream>
int main() {
    const int size = 5;
    int numbers[size];
    std::cout << "Введите " << size << " целых чисел:\n";
    for(int i = 0; i < size; ++i) {
        std::cin >> numbers[i];
    }
    return 0;
}


//стек
#include <iostream>
#include <stack>
int main() {
    std::stack<std::string> stack; 
    stack.push("Tom");
    stack.push("Bob");
    stack.push("Sam");
    while (!stack.empty())  {
        std::cout << stack.top() << std::endl;
        stack.pop();
    }