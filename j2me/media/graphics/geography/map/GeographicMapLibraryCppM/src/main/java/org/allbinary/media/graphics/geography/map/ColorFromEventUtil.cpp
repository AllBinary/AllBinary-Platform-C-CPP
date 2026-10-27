
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

class ColorFromEventUtil
            : public Object
         {

    private: static ColorFromEventUtil* instance() { static std::unique_ptr<ColorFromEventUtil> value(new ColorFromEventUtil()); return value.get(); }

    public: static ColorFromEventUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ColorFromEventUtil::instance();
    
}


    private: BasicColor* YELLOW = BasicColorFactory::getInstance()->YELLOW;

    public: const int32_t COLOR_INT = this->YELLOW->intValue();

    public: BasicColor* getForegroundColor(AllBinaryGameCanvas* gameCanvasInterface){

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


};

            

