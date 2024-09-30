#include <iostream>

using namespace std;

int main (){
    float PHP, Dollar;
    float PhpDollarExchangeRate = 0.018, DollarPhpExchangeRate = 56.01;
    float DollarToPhp = 0.00, PhpToDollar = 0.00;
    
    cout << "Enter Dollar amount:$ ";
    cin >> Dollar;
    DollarToPhp = Dollar * DollarPhpExchangeRate;
    cout << "Php Amount:PHP " << DollarToPhp << endl;
    
    cout << "Enter PHP amount:PHP ";
    cin >> PHP;
    PhpToDollar = PHP * PhpDollarExchangeRate;
    cout << "Dollar Amount:$ " << PhpToDollar << endl;
    return 0;
    
}
