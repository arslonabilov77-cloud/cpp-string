#include <iostream>
#include <string>

using namespace std;

int main() {
    // String (matn) o'zgaruvchisi
    string ism = "Arslon";
    string familiya = "Abilov";
    
    // Matnlarni birlashtirish (Concatenation)
    string toliqIsm = ism + " " + familiya;
    
    cout << "Salom, " << toliqIsm << "!" << endl;
    
    // Matn uzunligini o'lchash
    cout << "Ismingizda " << ism.length() << " ta harf bor." << endl;
    
    // Birinchi harfni o'zgartirish
    ism[0] = 'O'; // "Orslon" bo'ladi
    cout << "O'zgargan ism: " << ism << endl;

    return 0;
}
