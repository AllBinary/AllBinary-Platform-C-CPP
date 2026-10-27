
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_COLOR_COLORTEMPERATUREUTIL_H
        #define ORG_ALLBINARY_GRAPHICS_COLOR_COLORTEMPERATUREUTIL_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"

class ColorTemperatureUtil
            : public Object
         {

    private: static ColorTemperatureUtil* instance() { static std::unique_ptr<ColorTemperatureUtil> value(new ColorTemperatureUtil()); return value.get(); }

    public: static ColorTemperatureUtil* getInstance();

    private: BasicColorFactory* basicColorFactory = BasicColorFactory::getInstance();

    public: BasicColor* getBasicColor(int32_t thirdTemp);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_COLOR_COLORTEMPERATUREUTIL_H
