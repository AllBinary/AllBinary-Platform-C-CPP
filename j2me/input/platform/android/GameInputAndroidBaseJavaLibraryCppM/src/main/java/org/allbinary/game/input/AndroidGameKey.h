
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_ANDROIDGAMEKEY_H
        #define ORG_ALLBINARY_GAME_INPUT_ANDROIDGAMEKEY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/Input.h"
class InputFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AndroidGameKey: public Input {

    public: static std::string getString(int32_t keyCode);

public: AndroidGameKey(int32_t keyCode, std::string name);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_ANDROIDGAMEKEY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_ANDROIDGAMEKEY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_ANDROIDGAMEKEY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/game/input/Input.h")
#include "org/allbinary/game/input/Input.h"
#endif
#if __has_include("org/allbinary/game/input/InputFactory.h")
#include "org/allbinary/game/input/InputFactory.h"
#endif

        #endif
    
