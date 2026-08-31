
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
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/graphics/color/ColorCacheFactory.h>

      
#include <org/allbinary/graphics/color/ColorCacheable.h>

      
#include <org/allbinary/logic/util/cache/AutomaticCacheInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Color.h"

class GraphicsAnalysisUtil
            : public Object
         {
        

    private: static const MAX: int32_t = 122;

                //@Throws(Exception.constructor)
            
    public static double getNominator(BufferedImage bufferedImage, Integer min_x, Integer max_x, Integer y){




                        for (
    index: int32_t = max_x.intValue()!;index > min_x.intValue(); )
        {

    colorInteger: Integer = Integer.valueOf(bufferedImage!.getRGB(index, y.intValue()))!;;
    

    automaticCacheInterface: AutomaticCacheInterface = ColorCacheFactory.getInstance()!;;
    

    colorCacheable: ColorCacheable = automaticCacheInterface!.get(colorInteger) as ColorCacheable;;
    

    color: Color = colorCacheable!.getColor()!;;
    

                        if(color.getRed() < GraphicsAnalysisUtil.MAX && color.getGreen() < GraphicsAnalysisUtil.MAX && color.getBlue() < GraphicsAnalysisUtil.MAX)
                        
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


private constructor (){

            super();
        }


};

            

