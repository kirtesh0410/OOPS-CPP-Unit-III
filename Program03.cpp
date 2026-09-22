#include <cctype>
#include <iostream>
#include <string>
using namespace std;

class Validator {
public:
    bool validate(int marks) const {
        return marks >= 0 && marks <= 100;
    }

    bool validate(double amount) const {
        return amount > 0.0 && amount <= 1000000.0;
    }

    bool validate(const string& name) const {
        if (name.empty()) {
            return false;
        }

        for (char ch : name) {
            if (!isalpha(static_cast<unsigned char>(ch)) && ch != ' ') {
                return false;
            }
        }

        return true;
    }
};

int main() {
    Validator validator;

    cout << boolalpha;

    cout << "Marks 75 valid: "
         << validator.validate(75) << endl;

    cout << "Marks 115 valid: "
         << validator.validate(115) << endl;

    cout << "Amount 6500.75 valid: "
         << validator.validate(6500.75) << endl;

    cout << "Name Rahul Verma valid: "
         << validator.validate(string("Rahul Verma")) << endl;

    cout << "Name Rahul123 valid: "
         << validator.validate(string("Rahul123")) << endl;

    return 0;
}
