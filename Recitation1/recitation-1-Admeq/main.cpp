#include "addEmployee.hpp"

int main(int argc, char *argv[])
{
    
    if (argc < 2)
    {
        cout << "file name missing" << endl;
        return -1;
    }

    string fileName = argv[1]; 
    employee array[4];
    // open the file
    ifstream myfile;
    myfile.open(fileName);

    string line;
    string name;
    string emailid;
    string birthday;
    int length = 0;

    if (myfile.is_open())
    {
        
        while (getline(myfile, line))
        {
            
            
            size_t namepos;
            size_t emailpos;
            size_t birthpos;
            int i = 0;
            int ei = 0;
            int bi = 0;
            if(namepos = line.find(",") - )
            {
              name = line.substr(0, namepos);
              i++;
            }
            if(emailpos = line.find("u,"))
            {
               emailid = line.substr(namepos, emailpos + 1);
               ei++;
            }
            if(birthpos = line.find(" "))
            {
               birthday = line.substr(emailpos + 1, birthpos + 3);
               bi++;
            }
            if(ei == i && i == bi)
            {
                addAnEmployee(array, name, birthday, emailid, i);
            }
        }
    }
    else
    {
        cout << "err: can not open file" << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        cout << "name:" << array[i].name << " email:" << array[i].email << " bday:" << array[i].birthday << endl;
    }

    return 0;
}