
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_COLORFROMEVENTUTIL_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_COLORFROMEVENTUTIL_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeographicMapCompositeInterface.h"
#include "BasicGeographicMap.h"

class ColorFromEventUtil
            : public Object
         {

    private: static ColorFromEventUtil instance() { return ColorFromEventUtil(); }

    public: static ColorFromEventUtil getInstance();

    private: const BasicColor YELLOW = BasicColorFactory::getInstance().YELLOW;

    public: const int32_t COLOR_INT = this->YELLOW.intValue();

    public: BasicColor getForegroundColor(AllBinaryGameCanvas gameCanvasInterface);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_COLORFROMEVENTUTIL_H
