#ifndef FIELDS_H
#define FIELDS_H
#include <string>
#include <algorithm>
class Fields
{
    public:
        Fields();
        //kickstarts everything/whole program
        int beginProcess();
        //default getter/setters
        std::string getName();
        std::string getDescrip();
        void setName(std::string name);
        void setDescrip(std::string descrip);
        //depracated, up for removal
        std::string dontKnowButt(std::string phrase);
    private:
        //description for the field
        std::string descrip;
        //name for the field
        std::string name;

};

#endif // FIELDS_H
