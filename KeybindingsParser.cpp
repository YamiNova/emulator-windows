#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include <cctype>

#include "Controller.h"
#include "Log.h"

namespace sn{
    inline std::string ltrim(const std::string &str){
        std::string s(str);
        s.erase(s.begin(),
                std::find_if_not<decltype(s.begin()), int(int)>(s.begin(), s.end(), std::isspace));
        return s;
    }

    inline std::string rtrim(const std::string &str){
        std::string s(str);
        s.erase(std::find_if_not<decltype(s.rbegin()), int(int)>(s.rbegin(), s.rend(), std::isspace).base(),
                s.end());
        return s;
    }

    void parseControllerConf(std::string filepath){

    }   
    
}
