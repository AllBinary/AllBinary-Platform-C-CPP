
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORSETUTIL_CPP
        #define ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORSETUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/color/BasicColorSetUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/color/BasicColor.h"

auto BasicColorSetUtil::instance_owner() -> BasicColorSetUtil* { static std::unique_ptr<BasicColorSetUtil> value(new BasicColorSetUtil()); return value.get(); }
BasicColorSetUtil* BasicColorSetUtil::instance = BasicColorSetUtil::instance_owner();

    auto BasicColorSetUtil::getInstance() -> BasicColorSetUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicColorSetUtil::instance;
    
}


BasicColorSetUtil::BasicColorSetUtil(){
}


    auto BasicColorSetUtil::setBasicColorP(Graphics* graphics, BasicColor* basicColor) -> void{
graphics->setColor(basicColor->intValue());
    
}


    auto BasicColorSetUtil::setBasicColorP3(Graphics* graphics, BasicColor* basicColor, int32_t value) -> void{
graphics->setColor(value);
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORSETUTIL_CPP
