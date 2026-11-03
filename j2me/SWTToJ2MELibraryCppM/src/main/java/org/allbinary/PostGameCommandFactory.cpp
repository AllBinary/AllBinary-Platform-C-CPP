
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
        



        #ifndef ORG_ALLBINARY_POSTGAMECOMMANDFACTORY_CPP
        #define ORG_ALLBINARY_POSTGAMECOMMANDFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/PostGameCommandFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/configuration/feature/MultiPlayerGameFeatureFactory.h>

      
#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

PostGameCommandFactory::PostGameCommandFactory() {
        }
        auto PostGameCommandFactory::instance_owner() -> PostGameCommandFactory* { static std::unique_ptr<PostGameCommandFactory> value(new PostGameCommandFactory()); return value.get(); }
PostGameCommandFactory* PostGameCommandFactory::instance = PostGameCommandFactory::instance_owner();

    auto PostGameCommandFactory::getInstance() -> PostGameCommandFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PostGameCommandFactory::instance;
    
}


    auto PostGameCommandFactory::addCommands(MyCanvas* canvas) -> void{
MultiPlayerGameFeatureFactory::getInstance()->addCommands(canvas);
    
}




        #endif //ORG_ALLBINARY_POSTGAMECOMMANDFACTORY_CPP
