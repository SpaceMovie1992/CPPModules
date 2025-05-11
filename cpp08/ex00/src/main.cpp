#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>

int main()
{
    std::vector<int> vec;
    for (int i = 1; i <= 5; ++i)
        vec.push_back(i * 10);

    std::cout << "=== Testing with vector ===" << std::endl;
    std::cout << "Vector contents: ";
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    try {
        std::vector<int>::iterator found = easyfind(vec, 30);
        std::cout << "Found value: " << *found << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try {
        std::vector<int>::iterator found = easyfind(vec, 42);
        std::cout << "Found value: " << *found << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::list<int> lst;
    for (int i = 5; i >= 1; --i)
        lst.push_back(i * 10);
    
    std::cout << "\n=== Testing with list ===" << std::endl;
    std::cout << "List contents: ";
    for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    try {
        std::list<int>::iterator found = easyfind(lst, 20);
        std::cout << "Found value: " << *found << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::deque<int> deq;
    for (int i = 1; i <= 5; ++i)
        deq.push_back(i * 5);

    std::cout << "\n=== Testing with deque ===" << std::endl;
    std::cout << "Deque contents: ";
    for (std::deque<int>::iterator it = deq.begin(); it != deq.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    try {
        std::deque<int>::iterator found = easyfind(deq, 15);
        std::cout << "Found value: " << *found << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
