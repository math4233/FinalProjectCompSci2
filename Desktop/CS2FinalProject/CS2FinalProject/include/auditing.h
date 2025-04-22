#ifndef AUDITING_H
#define AUDITING_H
#include <string>

#include <Fields.h>


class auditing : public Fields
{
    public:
        auditing();
        ~auditing();

        std::string Getstandard() { return standard; }
        void Setstandard(std::string val) { standard = val; }

    protected:

    private:
        std::string standard;
};

#endif // AUDITING_H
