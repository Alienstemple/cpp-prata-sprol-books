// struct_box.cpp -- работает со структурой, передает по значению и адрес
#include <iostream>
using namespace std;
struct box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
} boox {"TetraPack", 20, 10, 5, };
void show (box);
void vol_mul (box *);
int main()
{
    cout << endl << "Our box: ";
    show(boox);
    vol_mul(&boox);
    cout << endl << "Now our box: ";
    show(boox);
    cout << endl;
    cin.get();
    return 0;
}
void show (box boxie)
{
    cout << endl << boxie.maker << "\nheight:" << boxie.height << "\nwidth: "
    << boxie.width << "\nlength: " << boxie.length << "\nvolume: " << boxie.volume;
}
void vol_mul(box * boxie)
{
    boxie->volume = boxie->height * boxie->length * boxie->width;
}