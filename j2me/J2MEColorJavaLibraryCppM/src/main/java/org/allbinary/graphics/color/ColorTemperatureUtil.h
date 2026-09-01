
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

            #include "../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicColorFactory.h"
#include "BasicColor.h"

class ColorTemperatureUtil
            : public Object
         {

    private: static ColorTemperatureUtil instance() { return ColorTemperatureUtil(); }

    public: static ColorTemperatureUtil getInstance();

    private: const BasicColorFactory basicColorFactory = BasicColorFactory::getInstance();

    public: BasicColor getBasicColor(int32_t thirdTemp);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_COLOR_COLORTEMPERATUREUTIL_H
