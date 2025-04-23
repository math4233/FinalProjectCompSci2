#ifndef FIELDINFO_H
#define FIELDINFO_H
#include <string>
class FieldInfo
{
    public:
        //constructor
        FieldInfo(std::string field);
        //standard getter/setter functions
        std::string Getfield() { return field; }
        //standard getter/setter functions
        void Setfield(std::string val) { field = val; }
        //accesses the resume example list, and displays it in the console
        std::string createResumeList();
         //accesses the sources list, and displays it in the console
        std::string createSourceList();
         //accesses the pay averages/scale list, and displays it in the console
        std::string createPayList();
         //accesses the project list, and displays it in the console
        std::string createProjects();
         //reads and accesses a provided file via parameter, and displays it from here.
        void readFile(std::string name);
    protected:
    private:
        //type of field the user would like
        std::string field;
};
#endif // FIELDINFO_H
