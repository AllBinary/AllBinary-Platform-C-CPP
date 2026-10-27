
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_LINEPATHANIMATION_CPP
        #define ORG_ALLBINARY_GAME_LAYER_LINEPATHANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/LinePathAnimation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/layer/Layer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

LinePathAnimation::LinePathAnimation() {
        }
        auto LinePathAnimation::instance_owner() -> LinePathAnimation* { static std::unique_ptr<LinePathAnimation> value(new LinePathAnimation()); return value.get(); }
LinePathAnimation* LinePathAnimation::instance = LinePathAnimation::instance_owner();

    auto LinePathAnimation::getInstance() -> LinePathAnimation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LinePathAnimation::instance;
    
}


    auto LinePathAnimation::paint(Graphics* graphics, GPoint* point, GPoint* nextPoint, Layer* tiledLayer) -> void{
graphics->drawLine(nextPoint->getX(), nextPoint->getY(), point->getX(), point->getY());
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_LINEPATHANIMATION_CPP
