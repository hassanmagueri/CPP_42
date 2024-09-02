#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact *contacts[8];
        uint8_t size;
        int     index;
    public:
        PhoneBook();
        bool     getContactByIndex(int index);
        void    add(Contact *contact);
        void    toString(void);
        uint8_t getSize(void) {return this->size;}
        Contact **getContacts(void) {return this->contacts;}
};