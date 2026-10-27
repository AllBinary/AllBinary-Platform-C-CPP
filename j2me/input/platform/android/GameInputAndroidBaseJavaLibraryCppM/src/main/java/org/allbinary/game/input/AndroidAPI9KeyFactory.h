
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI9KEYFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI9KEYFACTORY_H

        
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
        #include "org/allbinary/game/input/AndroidKeyFactory.h"
class AndroidGameKey;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AndroidAPI9KeyFactory: public AndroidKeyFactory {

    private: static Object* instance;

    public: static AndroidAPI9KeyFactory* getInstance();

/*protected*/ public: AndroidAPI9KeyFactory();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI9KEYFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI9KEYFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI9KEYFACTORY_H_COMPLETE
        #if __has_include(<android/view/KeyEvent.h>)
#include <android/view/KeyEvent.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include("org/allbinary/game/input/AndroidKeyFactory.h")
#include "org/allbinary/game/input/AndroidKeyFactory.h"
#endif
#if __has_include("org/allbinary/game/input/AndroidGameKey.h")
#include "org/allbinary/game/input/AndroidGameKey.h"
#endif

        #endif
    
