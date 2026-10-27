
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_COLOR_COLORUTIL_CPP
        #define ORG_ALLBINARY_GRAPHICS_COLOR_COLORUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/color/ColorUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Math.h"
        
#include <java/awt.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/color/Color.h"


ColorUtil::ColorUtil() {
        }
        auto ColorUtil::instance_owner() -> ColorUtil* { static std::unique_ptr<ColorUtil> value(new ColorUtil()); return value.get(); }
ColorUtil* ColorUtil::instance = ColorUtil::instance_owner();

    auto ColorUtil::getInstance() -> ColorUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ColorUtil::instance;
    
}


    auto ColorUtil::isGreyishOrWhiteLike(Color* color) -> bool{

                        if(Math::abs(color->getRed() -color->getGreen()) > 20 || Math::abs(color->getRed() -color->getBlue()) > 20 || Math::abs(color->getGreen() -color->getBlue()) > 20)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    auto ColorUtil::isDark(Color* color) -> bool{

                        if(color->getRed() < 0x77 && color->getRed() < 0x77 && color->getRed() < 0x77)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_COLOR_COLORUTIL_CPP
