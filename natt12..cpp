//Write a program for a hardware store. Read N items and price per item. If price < 100 mark it as “Small Item”.
// At the end print total revenue and number of small items sold. Use variables, input/output, loops and conditions. 
#include <iostream>
using namespace std;
int main() {
    int N; 
    int smallItemCount = 0; 
    double price; 
    double totalRevenue = 0;  
    cout << "Enter number of items: ";
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cout << "Enter price for item " << i << ": ";
        cin >> price;
        totalRevenue += price;  
        if (price < 100) {
            cout << "Item " << i << " is a Small Item" << endl;
            smallItemCount++;
        }
    }
    cout << "\nTotal revenue: " << totalRevenue << endl;
    cout << "Number of small items sold: " << smallItemCount << endl;
    return 0;
}

