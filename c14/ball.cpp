#include <string>
#include <iostream>
#include <string_view>

class Ball {
private:
    std::string m_color {"none"};
    double m_radius {0.0};
public:
    Ball(std::string_view color, double radius)
        : m_color {color}, m_radius {radius}
    {
    } 
    std::string_view getColor() {
        return m_color;
    }
    double getRadius() {
        return m_radius;
    }    
};

void print(Ball &ball) {
        std::cout << "Ball(" << ball.getColor() << ", " << ball.getRadius() << ")\n";
}



int main()
{
	Ball blue { "blue", 10.0 };
	print(blue);

	Ball red { "red", 12.0 };
	print(red);

	return 0;
}