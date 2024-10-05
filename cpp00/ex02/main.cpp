#include <iostream>

int main()
{
    int arr[] = { 5, 765, 5, 765, 5, 765, 5, 765};
    int	const *d = arr;
    std::cout << sizeof(d) << std::endl;
    std::cout << sizeof(arr) << std::endl;
    
}