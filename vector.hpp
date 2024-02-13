#include <iostream>
#include <stdexcept>
#include <vector>

template <typename T>
class CoolerVector
{
public:
    CoolerVector() : size_(1), capacity_(1), container_(nullptr) {}

    void pop_back()
    {
        try{
            if ( size_ != 0) {
                container_->at(size_-1) = {};
                size_ = size_ - 1;
            } else {
                throw std::out_of_range("Cannot pop back empty vector 😡");
            }
        } catch (std::out_of_range e) {
            std::cout << "ERROR: " << e.what() << std::endl;
        }
        
        
    }

    void push_back(T value)
    {
        // ⭐TODO: Without using the prebuilt .push_back() function, finish this function so that it always removes the last element in container_
        // 💡 Dont forget about size_ and capacity_
        container_->push_back(value);
    }

    void display()
    {
        // for (auto value : container_)
        // {
        //     std::cout << value << " " << std::endl;
        // }
    }

private:
    int size_;
    int capacity_;
    std::vector<T>* container_;
};