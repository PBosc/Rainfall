#include <iostream>
#include <cstring>
#include <cstdlib>

class Vulnerable {
public:
    Vulnerable(int initial_value);
    void setBuffer(char *input);
    void (*func_ptr)();

    int value;
};

void dummyFunction() {
}

Vulnerable::Vulnerable(int initial_value) {
    value = initial_value;
    func_ptr = &dummyFunction;
}

void Vulnerable::setBuffer(char *input) {
    size_t length = strlen(input);
    memcpy((char*)this + 16, input, length);
}

int main(int argc, char **argv) {
    if (argc < 2) {
        exit(1);
    }

    Vulnerable *vulnObj = new Vulnerable(5);
    vulnObj->setBuffer(argv[1]);

    vulnObj->func_ptr();

    delete vulnObj;

    return 0;
}
