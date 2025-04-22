#ifndef FIELDS_H
#define FIELDS_H
#include <string>

class Fields
{
    public:
        Fields();
int beginProcess();
std::string getName();
std::string getDescrip();
void setName(std::string name);
void setDescrip(std::string descrip);

    private:
        std::string descrip;
        std::string name;

};

#endif // FIELDS_H
