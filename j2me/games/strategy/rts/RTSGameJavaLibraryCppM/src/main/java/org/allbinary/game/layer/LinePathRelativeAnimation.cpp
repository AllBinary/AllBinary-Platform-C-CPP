
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/layer/Layer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/LinePathAnimation.h"

class LinePathRelativeAnimation: public LinePathAnimation {

    private: static LinePathRelativeAnimation* instanceC() { static std::unique_ptr<LinePathRelativeAnimation> value(new LinePathRelativeAnimation()); return value.get(); }

    public: static LinePathAnimation* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LinePathRelativeAnimation::instanceC();
    
}


    public: void paint(Graphics* graphics, GPoint* point, GPoint* nextPoint, Layer* tiledLayer){
graphics->drawLine(nextPoint->getX() -tiledLayer->getXP(), nextPoint->getY() -tiledLayer->getYP(), point->getX() -tiledLayer->getXP(), point->getY() -tiledLayer->getYP());
    
}


};

            

