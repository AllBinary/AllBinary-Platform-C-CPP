
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
        



        #ifndef ORG_ALLBINARY_CANVAS_GAMEGLOBALSFACTORY_CPP
        #define ORG_ALLBINARY_CANVAS_GAMEGLOBALSFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/canvas/GameGlobalsFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

GameGlobalsFactory::GameGlobalsFactory() : newDisplaybleTime(Integer.MIN_VALUE), point(PointFactory::getInstance()->ZERO_ZERO) {
        }
        auto GameGlobalsFactory::instance_owner() -> GameGlobalsFactory* { static std::unique_ptr<GameGlobalsFactory> value(new GameGlobalsFactory()); return value.get(); }
GameGlobalsFactory* GameGlobalsFactory::instance = GameGlobalsFactory::instance_owner();

    auto GameGlobalsFactory::getInstance() -> GameGlobalsFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GameGlobalsFactory::instance;
    
}




        #endif //ORG_ALLBINARY_CANVAS_GAMEGLOBALSFACTORY_CPP
