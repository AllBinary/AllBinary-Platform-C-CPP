
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
        



        #ifndef ORG_ALLBINARY_GAME_GRAPHICS_HUD_BASICHUDFACTORY_CPP
        #define ORG_ALLBINARY_GAME_GRAPHICS_HUD_BASICHUDFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/graphics/hud/BasicHudFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto BasicHudFactory::instance_owner() -> BasicHudFactory* { static std::unique_ptr<BasicHudFactory> value(new BasicHudFactory()); return value.get(); }
BasicHudFactory* BasicHudFactory::instance = BasicHudFactory::instance_owner();

    auto BasicHudFactory::getInstance() -> BasicHudFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BasicHudFactory::instance;
    
}


BasicHudFactory::BasicHudFactory(){
}




        #endif //ORG_ALLBINARY_GAME_GRAPHICS_HUD_BASICHUDFACTORY_CPP
