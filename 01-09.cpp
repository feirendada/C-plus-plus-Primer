#include <iostream>
int main()
{
    int sum = 0, val = 50;
    //只要val的值小于等于100，while循环就会持续执行
    while (val <= 100)
    {
        sum += val; //将sum + val赋予sum
        ++val; //将val加1
    }
    std::cout << "Sum of 1 to 10 inclusive is "
        << sum << std::endl;
    return 0;
}
