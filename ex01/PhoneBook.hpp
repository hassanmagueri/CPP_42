#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact *contacts[8];
    public:
        PhoneBook(){};
        void add(Contact *contact);
        Contact **getContacts(void) {return this->contacts;}
        // void search(Contact cont);
        // void exit();
};