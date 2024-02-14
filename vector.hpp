#include <iostream>
#include <stdexcept>
#include <vector>

template <typename T>
class CoolerVector
{
public:
    CoolerVector() : size_(0), capacity_(1), container_({}) {
        container_.reserve(capacity_);
    }

    CoolerVector(const std::vector<T>& startVector) : size_(startVector.size()), capacity_(startVector.capacity()), container_(startVector) {}

    void pop_back()
    {
        try{
            if ( size_ == 0) {
                throw std::out_of_range("Cannot pop back empty vector 😡");
            } else {
                container_.resize(size_ - 1);
                size_ = size_ - 1;
            }
        } catch (std::out_of_range e) {
            std::cout << "ERROR: " << e.what() << std::endl;
        }
    }

    void push_back(T value)
    {
        // ⭐TODO: Without using the prebuilt .push_back() function, finish this function so that it always removes the last element in container_
        // 💡 Remember the 3 steps we just went over
    }

    void display()
    {
        std::cout << "CURRENT VECTOR: ";
        for (T value : container_)
        {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }

    T find(const T& target) {
        // ⭐TODO: WE WILL DISCUSS THIS LATER
    }

private:
    int size_;
    int capacity_;
    std::vector<T> container_;
};