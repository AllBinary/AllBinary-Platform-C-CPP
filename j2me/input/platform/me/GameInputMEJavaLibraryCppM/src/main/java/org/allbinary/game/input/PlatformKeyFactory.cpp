
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/J2MEGameKey.h"
#include "org/allbinary/game/input/J2MEKeyFactory.h"
#include "org/allbinary/game/input/Input.h"

class PlatformKeyFactory
            : public Object
         {

    private: static inline Object* instance = NullUtil::getInstance()->NULL_OBJECT;

    public: static PlatformKeyFactory* getInstance(){

                        if(PlatformKeyFactory::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    PlatformKeyFactory::instance= new PlatformKeyFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<PlatformKeyFactory*>(PlatformKeyFactory::instance);
    
}


    public: std::string getString(int32_t keyCode){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return J2MEGameKey::getString(keyCode);;
    
}


    public: bool isSubmission(Input* input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return J2MEKeyFactory::getInstance()->isSubmission(input);;
    
}


    public: bool isDelete(Input* input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return J2MEKeyFactory::getInstance()->isDelete(input);;
    
}


    public: bool isBackSpace(Input* input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return J2MEKeyFactory::getInstance()->isBackSpace(input);;
    
}


    public: bool isLeft(Input* input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return J2MEKeyFactory::getInstance()->isLeft(input);;
    
}


    public: bool isRight(Input* input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return J2MEKeyFactory::getInstance()->isRight(input);;
    
}


    public: bool isUp(Input* input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return J2MEKeyFactory::getInstance()->isUp(input);;
    
}


    public: bool isDown(Input* input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return J2MEKeyFactory::getInstance()->isDown(input);;
    
}


    public: bool isEnter(Input* input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return J2MEKeyFactory::getInstance()->isEnter(input);;
    
}


};

            

