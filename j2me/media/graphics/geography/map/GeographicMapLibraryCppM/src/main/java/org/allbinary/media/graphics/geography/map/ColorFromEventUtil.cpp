
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_COLORFROMEVENTUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_COLORFROMEVENTUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/ColorFromEventUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"


ColorFromEventUtil::ColorFromEventUtil() : YELLOW(BasicColorFactory::getInstance()->YELLOW), COLOR_INT(this->YELLOW->intValue()) {
        }
        auto ColorFromEventUtil::instance_owner() -> ColorFromEventUtil* { static std::unique_ptr<ColorFromEventUtil> value(new ColorFromEventUtil()); return value.get(); }
ColorFromEventUtil* ColorFromEventUtil::instance = ColorFromEventUtil::instance_owner();

    auto ColorFromEventUtil::getInstance() -> ColorFromEventUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ColorFromEventUtil::instance;
    
}


    auto ColorFromEventUtil::getForegroundColor(AllBinaryGameCanvas* gameCanvasInterface) -> BasicColor*{

    BasicColor* color = this->YELLOW;;
    

    GeographicMapCompositeInterface* geographicMapCompositeInterface = dynamic_cast<GeographicMapCompositeInterface*>(gameCanvasInterface->getLayerManager());;
    

    BasicGeographicMap* geographicMapInterface = geographicMapCompositeInterface->getGeographicMapInterface()[0];;
    

                        if(geographicMapInterface != 
                                    nullptr
                                )
                        
                                    {
                                    
    BasicColor* foregroundBasicColor = geographicMapInterface->getForegroundBasicColor();;
    
color= foregroundBasicColor;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return color;
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_COLORFROMEVENTUTIL_CPP
