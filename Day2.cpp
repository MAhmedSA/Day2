using namespace std;
#include<string.h>
#include <iostream>

string name;
int quantity;
int result1 = 1;
int result2 = 1;


struct item {
    int number;
    string name;
};

struct inventory {
    string playerName;
    item storage[5];

    void getStorage() {


        for (int i = 0;i < 5;i++) {
            cout << "Item Name is " << storage[i].name << "\n";
            cout << "Item Quantities is " << storage[i].number << "\n";

        }

    }
    void setStorage() {
        for (int i = 0;i < 5;i++) {
            cout << "Please enter name for item >> \n";
            cin >> name;
            storage[i].name = name;
            cout << "Please enter Quantity for >> " << storage[i].name << "\n";
            cin >> quantity;
            storage[i].number = quantity;

        }

    }
};

inventory s;
void mul_table(int N, int i)
{

    if (i > 10)
        return;


    cout << N << " * " << i << " = " << N * i << "\n";


    return mul_table(N, i + 1);
}




void factFunction(int x) {

    if (x < 1)
        return;
    result1 *= x;
    x--;
    factFunction(x);

}

int NumberPower(int x, int power) {
    if (power == 0)
        return 1;
    return x * NumberPower(x, power - 1);
}


int factFunctionWithPointer(int* x, int x_number) {

    if (x_number <= 1)
        return 1;
    *x *= x_number;
    factFunctionWithPointer(x, x_number - 1);
    return *x;

}


int main()
{


    int n = 5;
    int n_ = 1;
    factFunctionWithPointer(&n_, n);
    cout << n_ << "\n";

    s.playerName = "Mostafa";
    s.setStorage();
    s.getStorage();
    cout << s.storage->name << "\n";


    cout << NumberPower(5, 2) << "\n";


    factFunction(5);
    cout << result1 << "\n";

    mul_table(5, 1);

}

