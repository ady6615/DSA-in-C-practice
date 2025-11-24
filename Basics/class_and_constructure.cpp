#include<iostream>

using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;

    // public:
    // Rectangle(){
    //     length=breadth=1;
    // }
    // // Rectangle(int l,int b);
    // Rectangle(int l, int b);
    
    // int area();
    // int perimeter();

    // int getLength()
    // {return length;}

    // void setLength(int l)
    // {
    //     length =l;
    // }

    // ~Rectangle();

    public:
    Rectangle() {
        length = breadth = 1;
    }

    Rectangle(int l, int b);   
    int area();
    int perimeter();         

    int getLength() { return length; }
 
    void setLength(int l) {    
        length = l;
    }

    ~Rectangle();
};
        


Rectangle::Rectangle(int l,int b)
{
    length=l;
    breadth=b;
}
// int Rectangle::area()
// {
//     return length*breadth;
// }

// int Rectangle::perimeter()
// {
//     return (length+breadth)*2;
// }
// Rectangle::~Rectangle()
// {}

int Rectangle::area() {
    return length * breadth;
}

int Rectangle::perimeter() {
    return 2 * (length + breadth);
}

Rectangle::~Rectangle() {}
int main(){
    Rectangle r(10,2);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;

}