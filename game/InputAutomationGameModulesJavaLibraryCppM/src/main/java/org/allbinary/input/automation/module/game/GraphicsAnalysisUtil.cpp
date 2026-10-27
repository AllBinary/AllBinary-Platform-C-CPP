
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
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/graphics/color/ColorCacheFactory.h>

      
#include <org/allbinary/graphics/color/ColorCacheable.h>

      
#include <org/allbinary/logic/util/cache/AutomaticCacheInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/game/Color.h"

class GraphicsAnalysisUtil
            : public Object
         {

    private: static inline const int32_t MAX = 122;

                //@Throws(Exception.constructor)
            
    public: static double getNominator(BufferedImage* bufferedImage, int32_t min_x, int32_t max_x, int32_t y){




                        for (
    int32_t index = max_x.intValue();index > min_x.intValue(); )
        {

    int32_t colorInteger = Integer.valueOf(bufferedImage->getRGB(index, y.intValue()));;
    

    AutomaticCacheInterface* automaticCacheInterface = ColorCacheFactory::getInstance();;
    

    ColorCacheable* colorCacheable = dynamic_cast<ColorCacheable*>(automaticCacheInterface->get(colorInteger));;
    

    Color* color = colorCacheable->getColor();;
    

                        if(color->getRed() < GraphicsAnalysisUtil::MAX && color->getGreen() < GraphicsAnalysisUtil::MAX && color->getBlue() < GraphicsAnalysisUtil::MAX)
                        
                                    {
                                    
                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return index -min_x.intValue();
    

                        }
                            
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


private: GraphicsAnalysisUtil(){
}


};

            

