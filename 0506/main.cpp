#include <iostream>

// Polymophie

class Tier {
public:
    virtual void laut() const  {
        std::cout << "Tier" << std::endl;
    }
};
class Hund: public Tier {
public:
    void laut() const override {
        std::cout << "Wuff" << std::endl;
    }
};

class Katze: public Tier {
public:
    void laut() const override {
        std::cout << "Miau" << std::endl;
    }
};

int main() {
    const Tier& meinTier = Tier();
    const Tier& meinHund = Hund();
    const Tier& meinKatze = Katze();

    meinTier.laut();
    meinHund.laut();
    meinKatze.laut();

    return 0;
}
