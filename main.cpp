#include "vector.hpp"

int main()
{
    CoolerVector<int> myVector{};

    // myVector.push_back(13);
    myVector.pop_back();
    // myVector.push_back(24);
    // myVector.push_back(92);
    // myVector.pop_back();
    // myVector.push_back(74);
    // myVector.push_back(34);
    // myVector.push_back(75);
    // myVector.pop_back();
    // myVector.pop_back();
    // myVector.push_back(75);
    // myVector.push_back(123);
    // myVector.push_back(17);

    // IGNORE: this is for later if we have time:>
    // myVector.push_back(13);
    // myVector.push_back(34);
    // myVector.push_back(65);
    // myVector.push_back(75);
    // myVector.push_back(77);
    // myVector.push_back(85);
    // myVector.push_back(99);
    // myVector.push_back(100);

    myVector.display();

    return 0;
}