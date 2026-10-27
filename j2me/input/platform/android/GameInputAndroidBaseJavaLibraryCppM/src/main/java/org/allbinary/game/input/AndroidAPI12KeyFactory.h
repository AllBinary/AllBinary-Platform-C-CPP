
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI12KEYFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI12KEYFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class KeyEvent;
class NullUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/AndroidAPI9KeyFactory.h"
class AndroidGameKey;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AndroidAPI12KeyFactory: public AndroidAPI9KeyFactory {

    private: static Object* instance12;

    public: static AndroidAPI12KeyFactory* getAPI12Instance();

private: AndroidAPI12KeyFactory();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI12KEYFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI12KEYFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI12KEYFACTORY_H_COMPLETE
        #if __has_include(<android/view/KeyEvent.h>)
#include <android/view/KeyEvent.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include("org/allbinary/game/input/AndroidAPI9KeyFactory.h")
#include "org/allbinary/game/input/AndroidAPI9KeyFactory.h"
#endif
#if __has_include("org/allbinary/game/input/AndroidGameKey.h")
#include "org/allbinary/game/input/AndroidGameKey.h"
#endif

        #endif
    
