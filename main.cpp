#include <iostream>

using namespace std;

class Home{
    public:
        int NofH,NofR;
        int LofH,WofH,HofH;
        int LofR,WofR,HofR;

        int AofH(){
            return LofH*WofH*HofH;
        }
        int AofR(){
            return LofR*WofR*HofR;
        }
};

int main()
{
    Home home1;
    cout << "Enter the Number of house : ";
    cin >> home1.NofH;
    cout << endl << "Enter the Length of house : ";
    cin >> home1.LofH;
    cout << endl << "Enter the Width of house : ";
    cin >> home1.WofH;
    cout << endl << "Enter the Height of house : ";
    cin >> home1.HofH;

    cout << endl << "How many Rooms : ";
    cin >> home1.NofR;
    cout << endl << "Enter the Length of Rooms : ";
    cin >> home1.LofR;
    cout << endl << "Enter the Width of Rooms : ";
    cin >> home1.WofR;
    cout << endl << "Enter the Height of Rooms : ";
    cin >> home1.WofR;

    cout << "Area of House : ";
    cout << home1.AofH() << endl;
    cout << "Area of Room : ";
    cout << home1.AofR() << endl;
    return 0;
}
