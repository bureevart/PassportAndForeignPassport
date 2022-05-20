/*
Создайте класс Passport (паспорт), который будет содержать
паспортную информацию о гражданине.
С помощью механизма наследования, реализуйте класс
ForeignPassport (загран.паспорт) производный от Passport.
Напомним, что заграничный паспорт содержит помимо па-
спортных данных, также данные о визах, номер заграничного па-
спорта.
 */

#include <iostream>

using namespace std;

class Passport{
public:
    string nameOfPerson;
    string passportInfo;
private:
    int numberOfPassport;

public:
    Passport(int numberOfPassport, string nameOfPerson, string passportInfo){
        this->nameOfPerson = nameOfPerson;
        this->passportInfo = passportInfo;
        this->numberOfPassport = numberOfPassport;
        cout << "Passport constructor completed" << endl;
    }

    const string &getNameOfPerson() const;

    const string &getPassportInfo() const;

    int getNumberOfPassport() const;

};

class ForeignPassport : public Passport {

public:
    string infoAboutVisa;
    int numberOfForeignPassport;

public:
    ForeignPassport(int numberOfPassport, string nameOfPerson, string passportInfo, string infoAboutVisa
                    , int numberOfForeignPassport) : Passport(numberOfPassport, nameOfPerson, passportInfo) {
        this->infoAboutVisa = infoAboutVisa;
        this->numberOfForeignPassport = numberOfForeignPassport;
    }

    const string &getInfoAboutVisa() const;

    int getNumberOfForeignPassport() const;
};

const string &ForeignPassport::getInfoAboutVisa() const {
    return infoAboutVisa;
}

const string &Passport::getNameOfPerson() const {
    return nameOfPerson;
}

const string &Passport::getPassportInfo() const {
    return passportInfo;
}

int Passport::getNumberOfPassport() const {
    return numberOfPassport;
}

int ForeignPassport::getNumberOfForeignPassport() const {
    return numberOfForeignPassport;
}


int main() {
    ForeignPassport fp = ForeignPassport(123, "Andrew", "[passportInfo]", "[infoAboutVisa]", 321);
    cout << "ForeignPassport constructor completed" << endl;

    cout << fp.getNameOfPerson() << endl;
    cout << fp.getNumberOfForeignPassport() << endl;
    cout << fp.getInfoAboutVisa() << endl;

    return 0;
}

