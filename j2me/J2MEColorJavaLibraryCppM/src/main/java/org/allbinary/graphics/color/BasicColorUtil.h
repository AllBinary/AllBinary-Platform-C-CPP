
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/color/BasicColor.h"

class BasicColorUtil
            : public Object
         {

    private: static BasicColorUtil* instance() { static std::unique_ptr<BasicColorUtil> value(new BasicColorUtil()); return value.get(); }

    public: static BasicColorUtil* getInstance();

    public: const std::vector<BasicColor*> ZERO_ARRAY = {};

    public: const int32_t ALPHA = static_cast<int32_t>(0xFF000000);

    public: const bool isAlpha = true;

    public: const bool ffOpaque = true;

    public: int32_t getRGB(int32_t red, int32_t green, int32_t blue);

    public: int32_t getARGB(int32_t alphaValue, int32_t r, int32_t g, int32_t b);

    public: int32_t get(int32_t alphaValue, int32_t color);

    public: int32_t invert(int32_t color);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORUTIL_H
