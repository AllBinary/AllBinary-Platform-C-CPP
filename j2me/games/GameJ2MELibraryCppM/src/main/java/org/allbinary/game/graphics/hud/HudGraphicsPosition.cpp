
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
        



        #ifndef ORG_ALLBINARY_GAME_GRAPHICS_HUD_HUDGRAPHICSPOSITION_CPP
        #define ORG_ALLBINARY_GAME_GRAPHICS_HUD_HUDGRAPHICSPOSITION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/graphics/hud/HudGraphicsPosition.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto HudGraphicsPosition::NULL_HUD_GRAPHICS_POSITION_owner() -> HudGraphicsPosition* { static std::unique_ptr<HudGraphicsPosition> value(new HudGraphicsPosition(PointFactory::getInstance()->ZERO_ZERO, 9)); return value.get(); }
HudGraphicsPosition* HudGraphicsPosition::NULL_HUD_GRAPHICS_POSITION = HudGraphicsPosition::NULL_HUD_GRAPHICS_POSITION_owner();

HudGraphicsPosition::HudGraphicsPosition(GPoint* point, int32_t anchor) : point(PointFactory::getInstance()->ZERO_ZERO){
this->setAnchor(anchor);
    
this->setPoint(point);
    
}


    auto HudGraphicsPosition::getAnchor() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->anchor;
    
}


    auto HudGraphicsPosition::setAnchor(int32_t anchor) -> void{
this->anchor= anchor;
    
}


    auto HudGraphicsPosition::getPoint() -> GPoint*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->point;
    
}


    auto HudGraphicsPosition::setPoint(GPoint* point) -> void{
this->point= point;
    
}




        #endif //ORG_ALLBINARY_GAME_GRAPHICS_HUD_HUDGRAPHICSPOSITION_CPP
