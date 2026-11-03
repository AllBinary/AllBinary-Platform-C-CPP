
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_GAMETICKDISPLAYINFOSINGLETON_CPP
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_GAMETICKDISPLAYINFOSINGLETON_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/displayable/GameTickDisplayInfoSingleton.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"


GameTickDisplayInfoSingleton::GameTickDisplayInfoSingleton() : displayInfoSingleton(DisplayInfoSingleton::getInstance()), lastWidth(this->displayInfoSingleton->getLastWidth()), lastHeight(this->displayInfoSingleton->getLastHeight()), lastHalfWidth(this->displayInfoSingleton->getLastHalfWidth()), lastHalfHeight(this->displayInfoSingleton->getLastHalfHeight()) {
        }
        auto GameTickDisplayInfoSingleton::instance_owner() -> GameTickDisplayInfoSingleton* { static std::unique_ptr<GameTickDisplayInfoSingleton> value(new GameTickDisplayInfoSingleton()); return value.get(); }
GameTickDisplayInfoSingleton* GameTickDisplayInfoSingleton::instance = GameTickDisplayInfoSingleton::instance_owner();

    auto GameTickDisplayInfoSingleton::getInstance() -> GameTickDisplayInfoSingleton*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GameTickDisplayInfoSingleton::instance;
    
}


    auto GameTickDisplayInfoSingleton::update() -> void{
this->lastWidth= this->displayInfoSingleton->getLastWidth();
    
this->lastHeight= this->displayInfoSingleton->getLastHeight();
    
this->lastHalfWidth= this->displayInfoSingleton->getLastHalfWidth();
    
this->lastHalfHeight= this->displayInfoSingleton->getLastHalfHeight();
    
}


    auto GameTickDisplayInfoSingleton::getLastWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->lastWidth;
    
}


    auto GameTickDisplayInfoSingleton::getLastHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->lastHeight;
    
}


    auto GameTickDisplayInfoSingleton::getLastHalfWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->lastHalfWidth;
    
}


    auto GameTickDisplayInfoSingleton::getLastHalfHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->lastHalfHeight;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_GAMETICKDISPLAYINFOSINGLETON_CPP
