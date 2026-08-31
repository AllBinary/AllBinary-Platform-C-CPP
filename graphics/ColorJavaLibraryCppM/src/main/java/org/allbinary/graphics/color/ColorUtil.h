
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

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Math.h"
        
#include <java/awt.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Color.h"

class ColorUtil
            : public Object
         {
        

    private: static const instance: ColorUtil = new ColorUtil();

    public static ColorUtil getInstance();

    public bool isGreyishOrWhiteLike(Color color);

    public bool isDark(Color color);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_COLOR_COLORUTIL_H
