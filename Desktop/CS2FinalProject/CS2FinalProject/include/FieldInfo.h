#ifndef FIELDINFO_H
#define FIELDINFO_H
#include <string>


class FieldInfo
{
    public:
        FieldInfo(std::string field);
        std::string Getfield() { return field; }
        void Setfield(std::string val) { field = val; }
    std::string createResumeList();
    std::string createSourceList();
    std::string createPayList();
    std::string createProjects();

    protected:

    private:
                std::string field;

};

#endif // FIELDINFO_H
