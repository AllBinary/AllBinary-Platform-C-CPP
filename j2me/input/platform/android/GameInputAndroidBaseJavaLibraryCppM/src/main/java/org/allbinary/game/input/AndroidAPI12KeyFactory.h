
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI12KEYFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI12KEYFACTORY_H

#include <android/view/KeyEvent.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AndroidAPI9KeyFactory.h"
#include "AndroidGameKey.h"

class AndroidAPI12KeyFactory: public AndroidAPI9KeyFactory {

    private: static Object* instance12 = NullUtil::getInstance().NULL_OBJECT;

    public: static AndroidAPI12KeyFactory getAPI12Instance();

private: AndroidAPI12KeyFactory();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI12KEYFACTORY_H
