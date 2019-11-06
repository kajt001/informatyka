#include <iostream>

using namespace std;






int main(int argc, char const *argv[])
{
    int wymiar_x, wymiar_y;
    
    int ** board = new int * [wymiar_x];
    for(int i = 0; i<wymiar_x;i++)
    {
        board[i] = new int[wymiar_y];    
    }
    cout<<"Wpisz wymiar x tablicy: ";
    cin>>wymiar_x;
    cout<<"Wpisz wymiar y tablicy: ";
    cin>>wymiar_y;
//
//
//
//
    return 0;
}
