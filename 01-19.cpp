#include <iostream>
int main()
{
    int start, end;
    std::cin >> start >> end;
    if (start > end)
    {
        std::cout << "Input Error" << std::endl;
    }
    while (start <= end)
    {
        std::cout << start << std::endl;
        ++start;
    }
    return 0;
}
