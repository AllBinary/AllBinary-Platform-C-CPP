
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
        #include "org/allbinary/game/input/ActivityFractureControllerUtilFactory.h"
#include "org/allbinary/game/input/AndroidKeyFactory.h"
#include "org/allbinary/game/input/AndroidGameKey.h"
#include "org/allbinary/game/input/Input.h"


PlatformKeyFactory::PlatformKeyFactory() : androidKeyFactory(ActivityFractureControllerUtilFactory::getInstance()) {
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
                        
                        
                        return AndroidGameKey::getString(keyCode);;
    
}


    auto PlatformKeyFactory::isSubmission(Input* input) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->androidKeyFactory->isSubmission(input);;
    
}


    auto PlatformKeyFactory::isDelete(Input* input) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->androidKeyFactory->isDelete(input);;
    
}


    auto PlatformKeyFactory::isBackSpace(Input* input) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->androidKeyFactory->isBackSpace(input);;
    
}


    auto PlatformKeyFactory::isLeft(Input* input) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->androidKeyFactory->isLeft(input);;
    
}


    auto PlatformKeyFactory::isRight(Input* input) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->androidKeyFactory->isRight(input);;
    
}


    auto PlatformKeyFactory::isUp(Input* input) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->androidKeyFactory->isUp(input);;
    
}


    auto PlatformKeyFactory::isDown(Input* input) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->androidKeyFactory->isDown(input);;
    
}


    auto PlatformKeyFactory::isEnter(Input* input) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->androidKeyFactory->isEnter(input);;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_PLATFORMKEYFACTORY_CPP
