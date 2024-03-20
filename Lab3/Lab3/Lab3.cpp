#include <iostream>

template <typename T>
class Rectangle 
{
private:
    T width;
    T length;

public:
    Rectangle(T w, T l) : width(w), length(l) {}

    T getWidth() const 
    {
        return width;
    }

    T getLength() const 
    {
        return length;
    }

    void setWidth(T w) 
    {
        width = w;
    }

    void setLength(T l) 
    {
        length = l;
    }
};

template <typename T>
T Area(const Rectangle<T>& rect) 
{
    return rect.getWidth() * rect.getLength();
}

int main() 
{
    Rectangle<int> rect1(5, 10);
    Rectangle<float> rect2(2.5f, 3.75f);

    std::cout << "Rectangle 1:" << std::endl;
    std::cout << "Width: " << rect1.getWidth() << ", Length: " << rect1.getLength() << std::endl;
    std::cout << "Area: " << Area(rect1) << std::endl;

    std::cout << "\nRectangle 2:" << std::endl;
    std::cout << "Width: " << rect2.getWidth() << ", Length: " << rect2.getLength() << std::endl;
    std::cout << "Area: " << Area(rect2) << std::endl;

    return 0;
}
