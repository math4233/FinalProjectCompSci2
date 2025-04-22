#ifndef NETWORKING_H
#define NETWORKING_H
#include <string>

#include <Fields.h>


class networking : public Fields
{
    public:
        networking();
        ~networking();

        std::string Getrole() { return role; }
        void Setrole(std::string val) { role = val; }

    protected:

    private:
        std::string role;
};

#endif // NETWORKING_H
