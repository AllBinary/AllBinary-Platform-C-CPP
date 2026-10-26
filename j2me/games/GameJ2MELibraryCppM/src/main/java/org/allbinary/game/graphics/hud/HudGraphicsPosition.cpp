
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
        



            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HudGraphicsPosition
            : public Object
         {

    public: static const HudGraphicsPosition NULL_HUD_GRAPHICS_POSITION = HudGraphicsPosition(PointFactory::getInstance().ZERO_ZERO, 9);

    private: int32_t anchor= 0;

    private: GPoint point = PointFactory::getInstance().ZERO_ZERO;

public: HudGraphicsPosition(GPoint point, int32_t anchor){
this->setAnchor(anchor);
    
this->setPoint(point);
    
}


    public: int32_t getAnchor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->anchor;
    
}


    private: void setAnchor(int32_t anchor){
this->anchor= anchor;
    
}


    public: GPoint getPoint(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->point;
    
}


    public: void setPoint(GPoint point){
this->point= point;
    
}


};

            

