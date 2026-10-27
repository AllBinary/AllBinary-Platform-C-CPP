
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_PLATFORMKEYFACTORY_CPP
        #define ORG_ALLBINARY_GAME_INPUT_PLATFORMKEYFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/PlatformKeyFactory.h"
        

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


PlatformKeyFactory::PlatformKeyFactory() {
        }
        Object* PlatformKeyFactory::instance = NullUtil::getInstance()->NULL_OBJECT;

    auto PlatformKeyFactory::getInstance() -> PlatformKeyFactory*{

                        if(PlatformKeyFactory::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    PlatformKeyFactory::instance= new PlatformKeyFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<PlatformKeyFactory*>(PlatformKeyFactory::instance);
    
}


    auto PlatformKeyFactory::getString(int32_t keyCode) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return J2MEGameKey::getString(keyCode);;
    
}


    auto PlatformKeyFactory::isSubmission(Input* input) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return J2MEKeyFactory::getInstance()->isSubmission(input);;
    
}


    auto PlatformKeyFactory::isDelete(Input* input) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return J2MEKeyFactory::getInstance()->isDelete(input);;
    
}


    auto PlatformKeyFactory::isBackSpace(Input* input) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return J2MEKeyFactory::getInstance()->isBackSpace(input);;
    
}


    auto PlatformKeyFactory::isLeft(Input* input) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return J2MEKeyFactory::getInstance()->isLeft(input);;
    
}


    auto PlatformKeyFactory::isRight(Input* input) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return J2MEKeyFactory::getInstance()->isRight(input);;
    
}


    auto PlatformKeyFactory::isUp(Input* input) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return J2MEKeyFactory::getInstance()->isUp(input);;
    
}


    auto PlatformKeyFactory::isDown(Input* input) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return J2MEKeyFactory::getInstance()->isDown(input);;
    
}


    auto PlatformKeyFactory::isEnter(Input* input) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return J2MEKeyFactory::getInstance()->isEnter(input);;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_PLATFORMKEYFACTORY_CPP
