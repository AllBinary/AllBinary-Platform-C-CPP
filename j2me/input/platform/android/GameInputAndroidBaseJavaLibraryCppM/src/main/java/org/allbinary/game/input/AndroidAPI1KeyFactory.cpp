
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI1KEYFACTORY_CPP
        #define ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI1KEYFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/AndroidAPI1KeyFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/AndroidKeyFactory.h"

Object* AndroidAPI1KeyFactory::instance = NullUtil::getInstance()->NULL_OBJECT;

    auto AndroidAPI1KeyFactory::getInstance() -> AndroidAPI1KeyFactory*{

                        if(AndroidAPI1KeyFactory::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    AndroidAPI1KeyFactory::instance= new AndroidAPI1KeyFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<AndroidAPI1KeyFactory*>(AndroidAPI1KeyFactory::instance);
    
}


AndroidAPI1KeyFactory::AndroidAPI1KeyFactory(){
}




        #endif //ORG_ALLBINARY_GAME_INPUT_ANDROIDAPI1KEYFACTORY_CPP
