#ifndef _OWNED_ENGIMON_HPP_
#define _OWNED_ENGIMON_HPP_

#include <string>
#include <iterator>
#include <map>
#include "Position.hpp"
#include "Engimon.hpp"
// using namespace EngimonUtil;
//using namespace Position;
//using namespace std;

// == ACTIVE ENGIMON

// namespace OwnedEngimon{
    class OwnedEngimon : public Engimon {
    private:
        string *parentName;
        string status;
        Position position;
        //mapping species dengan message unik pake stl
        static map<string, string> percakapan;
        
        

    public:
        OwnedEngimon();
        OwnedEngimon(string name, string species);
        OwnedEngimon(const OwnedEngimon& oe);
        OwnedEngimon& operator=(const OwnedEngimon& oe);
        ~OwnedEngimon();

        string* getParentName();
        void setParentName(string,string);

        string getStatus();
        void setStatus(string);

        Position getPosition();
        void setPosition(int, int);

        void interact();
        void moveActive(int x, int y);

        void displayDetail();

        bool fight(Engimon& enemy);
        
    };
// }


#endif