
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_COLOR_COLORUTIL_H
        #define ORG_ALLBINARY_GRAPHICS_COLOR_COLORUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Math.h"
        
#include <java/awt.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Color;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ColorUtil
            : public virtual Object
         {

    private: static ColorUtil* instance_owner();
    private: static ColorUtil* instance;

    public: static ColorUtil* getInstance();


            
    public: ColorUtil();
        
    public: bool isGreyishOrWhiteLike(Color* color);

    public: bool isDark(Color* color);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_COLOR_COLORUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_COLOR_COLORUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_COLOR_COLORUTIL_H_COMPLETE
        #if __has_include(<java/awt.h>)
#include <java/awt.h>
#endif
#if __has_include("org/allbinary/graphics/color/Color.h")
#include "org/allbinary/graphics/color/Color.h"
#endif

        #endif
    
