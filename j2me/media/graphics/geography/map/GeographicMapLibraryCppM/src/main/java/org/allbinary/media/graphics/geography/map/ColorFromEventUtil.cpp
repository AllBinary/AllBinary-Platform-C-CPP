
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
        



            #include "../../../../../../java/lang/Object.h"
        
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeographicMapCompositeInterface.h"
#include "BasicGeographicMap.h"

class ColorFromEventUtil
            : public Object
         {
        

    private: static const instance: ColorFromEventUtil = new ColorFromEventUtil();

    public static ColorFromEventUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ColorFromEventUtil.instance;
    
}


    private: const YELLOW: BasicColor = BasicColorFactory.getInstance()!.YELLOW;

    public const COLOR_INT: int32_t = this.YELLOW.intValue()!;

    public BasicColor getForegroundColor(AllBinaryGameCanvas gameCanvasInterface){

    color: BasicColor = this.YELLOW;;
    

    geographicMapCompositeInterface: GeographicMapCompositeInterface = gameCanvasInterface!.getLayerManager() as GeographicMapCompositeInterface;;
    

    geographicMapInterface: BasicGeographicMap = geographicMapCompositeInterface!.getGeographicMapInterface()[0]!;;
    

                        if(geographicMapInterface != 
                                    null
                                )
                        
                                    {
                                    
    foregroundBasicColor: BasicColor = geographicMapInterface!.getForegroundBasicColor()!;;
    
color= foregroundBasicColor;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return color;
    
}


};

            

