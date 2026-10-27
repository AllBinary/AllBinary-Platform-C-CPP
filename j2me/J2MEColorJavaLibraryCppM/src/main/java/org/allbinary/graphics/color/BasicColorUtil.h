
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORUTIL_H
        #define ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasicColor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicColorUtil
            : public virtual Object
         {

    private: static BasicColorUtil* instance_owner();
    private: static BasicColorUtil* instance;

    public: static BasicColorUtil* getInstance();


            
    public: BasicColorUtil();
        
    public: std::vector<BasicColor*> ZERO_ARRAY;

    public: const int32_t ALPHA;

    public: const bool isAlpha = true;

    public: const bool ffOpaque = true;

    public: int32_t getRGB(int32_t red, int32_t green, int32_t blue);

    public: int32_t getARGB(int32_t alphaValue, int32_t r, int32_t g, int32_t b);

    public: int32_t get(int32_t alphaValue, int32_t color);

    public: int32_t invert(int32_t color);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORUTIL_H_COMPLETE
        #if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif

        #endif
    
