#include <iostream>
#include <string>
using namespace std;
struct SalesRecord {
    string month;
    float amount;
};
int main() {
    SalesRecord sales[12]; 
    cout << "Enter month name and sales amount for 12 months:\n";
    for (int i = 0; i < 12; i++) {
        cout << "Month " << i + 1 << " name: ";
        cin >> sales[i].month;
        cout << "Sales amount for " << sales[i].month << ": ";
        cin >> sales[i].amount;
    }
    float maxAmount = sales[0].amount;
    float minAmount = sales[0].amount;
    string maxMonth = sales[0].month;
    string minMonth = sales[0].month;
    for (int i = 1; i < 12; i++) {
    if (sales[i].amount > maxAmount) {
            maxAmount = sales[i].amount;
            maxMonth = sales[i].month;}
            
    if (sales[i].amount < minAmount) {
            minAmount = sales[i].amount;
            minMonth = sales[i].month;}
    }
    cout << "____ Sales summary ____\n";
    cout << "Month with max sales: " << maxMonth << " (" << maxAmount << ")\n";
    cout << "Month with min sales: " << minMonth << " (" << minAmount << ")\n";
       return 0;
}
