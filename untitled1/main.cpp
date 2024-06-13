#include <iostream>

class Mitarbeiter {
public:
    virtual void print()const{
        std::cout << "Mitarbeiter" << std::endl;
    }

};

class Manager:public Mitarbeiter {
public:
    void print()const{
        std::cout << "Manager" << std::endl;
    }
};

int main() {
    const Mitarbeiter& meinMitarbeiter = Mitarbeiter();
    const Mitarbeiter& meinManager = Manager();
    meinMitarbeiter.print();
    meinManager.print();
    return 0;
}
