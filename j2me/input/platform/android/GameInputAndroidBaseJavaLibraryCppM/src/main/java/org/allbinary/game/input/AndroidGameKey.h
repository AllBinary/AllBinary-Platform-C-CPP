
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_ANDROIDGAMEKEY_H
        #define ORG_ALLBINARY_GAME_INPUT_ANDROIDGAMEKEY_H

#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Input.h"
#include "InputFactory.h"

class AndroidGameKey: public Input {

    public: static std::string getString(int32_t keyCode);

: AndroidGameKey(int32_t keyCode, std::string name);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_ANDROIDGAMEKEY_H
