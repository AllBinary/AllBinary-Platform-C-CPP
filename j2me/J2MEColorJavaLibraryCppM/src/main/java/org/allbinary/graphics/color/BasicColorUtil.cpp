
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORUTIL_CPP
        #define ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/color/BasicColorUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/color/BasicColor.h"


BasicColorUtil::BasicColorUtil() : ZERO_ARRAY({}), ALPHA(static_cast<int32_t>(0xFF000000)) {
        }
        auto BasicColorUtil::instance_owner() -> BasicColorUtil* { static std::unique_ptr<BasicColorUtil> value(new BasicColorUtil()); return value.get(); }
BasicColorUtil* BasicColorUtil::instance = BasicColorUtil::instance_owner();

    auto BasicColorUtil::getInstance() -> BasicColorUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicColorUtil::instance;
    
}


    auto BasicColorUtil::getRGB(int32_t red, int32_t green, int32_t blue) -> int32_t{

    int32_t value = 0;;
    

                        if(this->isAlpha)
                        
                                    {
                                    
                        if(this->ffOpaque)
                        
                                    {
                                    value= this->ALPHA;
    

                                    }
                                

                                    }
                                
value= (red<<16) | value;
    
value= (green<<8) | value;
    
value= blue | value;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return value;
    
}


    auto BasicColorUtil::getARGB(int32_t alphaValue, int32_t r, int32_t g, int32_t b) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ((alphaValue<<24)&this->ALPHA) +((r<<16)&0x00FF0000) +((g<<8)&0x0000FF00) +(b&0x000000FF);
    
}


    auto BasicColorUtil::get(int32_t alphaValue, int32_t color) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ((alphaValue<<24)&this->ALPHA) +color;
    
}


    auto BasicColorUtil::invert(int32_t color) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (0xFFFFFF -color) | this->ALPHA;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORUTIL_CPP
