// stars.cpp -- вывдит фигуру из звездочек
#include <iostream>
int main()
{
    using namespace std;
    int blank, star;
    for (int row = 1; row < 5; row++)                          //      ********
    {                                                               //  ******
        for (blank = 1; blank < row; blank++)               //           ****
        {                                                       //        **    
            cout << " ";
        }
        for (star = 1; star <= 5 - row; star++)
        {
            cout << "**";
        }
        cout << endl;
    }
    cout << endl;
    for (int row = 1; row < 5; row++)                      //    **
    {                                                      //   ****
        for (blank = 1; blank < 5 - row; blank++)         //   ******
            cout << " ";                                   // ********
        for(star = 1; star <= row; star++)                 // ********
            cout << "**";                                  //  ******
        cout << endl;                                     //    ****
    }                                                    //      **
    
    for (int row = 1; row < 5; row++)
    {
        for (blank = 1; blank < row; blank++)
            cout << " ";
        for (star = 1; star <= 5 - row; star++)
            cout << "**";
        cout << endl;
    }
    cout << endl;

    for (int row = 1; row < 5; row ++)
    {
        for (int blank = 1; blank < row; blank ++)
            cout << " ";
        for (int stars = 1; stars <= row; stars ++)
            cout << "#";
        for (int four_blank = 1; four_blank < 5 - row; four_blank ++)
            cout << "    ";
        for (int stars = 1; stars <= row; stars ++)
            cout << "#";
        cout << endl;
    }
    for (int row = 1; row < 5; row ++)
    {
        for (int blank = 1; blank < 5 - row; blank ++)
            cout << " ";
        for (int stars = 1; stars <= 5 - row; stars ++)
            cout << "#";
        for (int four_blank = 1; four_blank < row; four_blank ++)
            cout << "    ";
        for (int stars = 1; stars <= 5 - row; stars ++)
            cout << "#";
        cout << endl;
    }
    cin.get();
    return 0;
}
