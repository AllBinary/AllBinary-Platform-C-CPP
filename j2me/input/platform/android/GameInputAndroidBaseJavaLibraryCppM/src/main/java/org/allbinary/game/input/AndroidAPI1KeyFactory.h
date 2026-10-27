
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI1KEYFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI1KEYFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class NullUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/AndroidKeyFactory.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AndroidAPI1KeyFactory: public AndroidKeyFactory {

    private: static Object* instance;

    public: static AndroidAPI1KeyFactory* getInstance();

/*protected*/ public: AndroidAPI1KeyFactory();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI1KEYFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI1KEYFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI1KEYFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include("org/allbinary/game/input/AndroidKeyFactory.h")
#include "org/allbinary/game/input/AndroidKeyFactory.h"
#endif

        #endif
    
