#include "14Employee.h"

int main() {
    Employee E1, E2, E3;

    E1.get_data("Ali", 50000);
    E2.get_data("Sara", 75000);
    E3.get_data("Ahmed", 100000);

    E1.display();
    E2.display();
    E3.display();

    cout << "Updating tax to 3% for Ahmed\n";
    E3.update_tax_percentage(3);
    E3.display();

    return 0;
}
