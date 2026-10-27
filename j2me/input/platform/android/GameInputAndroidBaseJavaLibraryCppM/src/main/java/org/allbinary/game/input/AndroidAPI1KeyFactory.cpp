
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/AndroidKeyFactory.h"

class AndroidAPI1KeyFactory: public AndroidKeyFactory {

    private: static inline Object* instance = NullUtil::getInstance()->NULL_OBJECT;

    public: static AndroidAPI1KeyFactory* getInstance(){

                        if(AndroidAPI1KeyFactory::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    AndroidAPI1KeyFactory::instance= new AndroidAPI1KeyFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<AndroidAPI1KeyFactory*>(AndroidAPI1KeyFactory::instance);
    
}


protected: AndroidAPI1KeyFactory(){
}


};

            

