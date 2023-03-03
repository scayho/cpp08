#include "easyfind.hpp"

// using namespace std;

int main(void)
{
    // int a[] = {1,2,3,4,5};
    // vector<int> a = {1,2,3,4,5};
    try{
        std::vector<int> ar;
        ar.push_back(1);
        ar.push_back(54);
        ar.push_back(3);
        ar.push_back(39);
        ar.push_back(9);
        ar.push_back(65);
        std::cout << easyfind(ar, 3) << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}