
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORCOMPOSITESETTERINTERFACE_H
        #define ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORCOMPOSITESETTERINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class JsType;
class JsMethod;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasicColor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicColorCompositeSetterInterface
            : public virtual Object
         {

    public: virtual void setBasicColorP(BasicColor* basicColor) = 0;

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORCOMPOSITESETTERINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORCOMPOSITESETTERINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORCOMPOSITESETTERINTERFACE_H_COMPLETE
        #if __has_include(<jsinterop/annotations/JsType.h>)
#include <jsinterop/annotations/JsType.h>
#endif
#if __has_include(<jsinterop/annotations/JsMethod.h>)
#include <jsinterop/annotations/JsMethod.h>
#endif
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif

        #endif
    
