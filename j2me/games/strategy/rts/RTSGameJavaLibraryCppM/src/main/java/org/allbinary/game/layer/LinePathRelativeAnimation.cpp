
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_LINEPATHRELATIVEANIMATION_CPP
        #define ORG_ALLBINARY_GAME_LAYER_LINEPATHRELATIVEANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/LinePathRelativeAnimation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/layer/Layer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/LinePathAnimation.h"


LinePathRelativeAnimation::LinePathRelativeAnimation() {
        }
        auto LinePathRelativeAnimation::instanceC_owner() -> LinePathRelativeAnimation* { static std::unique_ptr<LinePathRelativeAnimation> value(new LinePathRelativeAnimation()); return value.get(); }
LinePathRelativeAnimation* LinePathRelativeAnimation::instanceC = LinePathRelativeAnimation::instanceC_owner();

    auto LinePathRelativeAnimation::getInstance() -> LinePathAnimation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return LinePathRelativeAnimation::instanceC;
    
}


    auto LinePathRelativeAnimation::paint(Graphics* graphics, GPoint* point, GPoint* nextPoint, Layer* tiledLayer) -> void{
graphics->drawLine(nextPoint->getX() -tiledLayer->getXP(), nextPoint->getY() -tiledLayer->getYP(), point->getX() -tiledLayer->getXP(), point->getY() -tiledLayer->getYP());
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_LINEPATHRELATIVEANIMATION_CPP
