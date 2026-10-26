
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
        



        #ifndef ORG_ALLBINARY_GAME_GRAPHICS_HUD_HUDGRAPHICSPOSITION_H
        #define ORG_ALLBINARY_GAME_GRAPHICS_HUD_HUDGRAPHICSPOSITION_H

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

public: HudGraphicsPosition(GPoint point, int32_t anchor);

    public: int32_t getAnchor();

    private: void setAnchor(int32_t anchor);

    public: GPoint getPoint();

    public: void setPoint(GPoint point);

};

            


        #endif //ORG_ALLBINARY_GAME_GRAPHICS_HUD_HUDGRAPHICSPOSITION_H
