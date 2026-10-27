
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI12KEYFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI12KEYFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <android/view/KeyEvent.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/AndroidAPI9KeyFactory.h"
#include "org/allbinary/game/input/AndroidGameKey.h"

class AndroidAPI12KeyFactory: public AndroidAPI9KeyFactory {

    private: static inline Object* instance12 = NullUtil::getInstance()->NULL_OBJECT;

    public: static AndroidAPI12KeyFactory* getAPI12Instance();

private: AndroidAPI12KeyFactory();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI12KEYFACTORY_H
