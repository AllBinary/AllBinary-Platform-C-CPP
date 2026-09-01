
        /* Generated Code Do Not Modify */
        



#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AndroidKeyFactory.h"

class AndroidAPI1KeyFactory: public AndroidKeyFactory {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static AndroidAPI1KeyFactory getInstance(){

                        if(AndroidAPI1KeyFactory::instance() == NullUtil::getInstance().NULL_OBJECT)
                        
                                    {
                                    AndroidAPI1KeyFactory::instance= AndroidAPI1KeyFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AndroidAPI1KeyFactory::instance() as AndroidAPI1KeyFactory;
    
}


protected: AndroidAPI1KeyFactory(){
}


};

            

