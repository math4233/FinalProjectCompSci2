#ifndef SOFTWAREDEV_H
#define SOFTWAREDEV_H
#include <string>
#include <Fields.h>


class softwareDev : public Fields
{
    public:
        softwareDev();
        std::string GettypeDevelopmnt() { return typeDevelopmnt; }
        void SettypeDevelopmnt(std::string val);
        void invokeDescrip();
    protected:

    private:
        std::string typeDevelopmnt;
};
#endif // SOFTWAREDEV_H
