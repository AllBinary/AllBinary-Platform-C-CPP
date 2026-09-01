
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI9KEYFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI9KEYFACTORY_H

#include <android/view/KeyEvent.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AndroidKeyFactory.h"
#include "AndroidGameKey.h"

class AndroidAPI9KeyFactory: public AndroidKeyFactory {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static AndroidAPI9KeyFactory getInstance();

protected: AndroidAPI9KeyFactory();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI9KEYFACTORY_H
