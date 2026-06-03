#include<iostream>
using namespace std;

class Complex {
    int img, real;
public:
    // Default Constructor: এটি প্রয়োজন কারণ আপনি আর্গুমেন্ট ছাড়া অবজেক্ট তৈরি করছেন
    Complex() {
        real = 0;
        img = 0;
    }
    // Parameterized Constructor
    Complex(int r, int i) {
        real = r;
        img = i;
    }

    void print() {
        cout << real << " + " << img << "i" << endl;
    }
    // Operator Overloading
    Complex operator + (Complex c) {
        Complex temp; // এখানে Default Constructor কল হবে
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
};

int main() {
    // লজিক ঠিক রাখতে real এবং img এর মানগুলো কনস্ট্রাক্টর অনুযায়ী পাস করা হয়েছে
    Complex c1(4, 5); 
    Complex c2(5, 2);
    Complex c3(1, 1);
    
    Complex c4; // Default constructor ব্যবহার করবে
    c4 = c1 + c2 + c3; 
    
    c4.print();

    return 0;
}