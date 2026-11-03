
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FONT_FONTDEBUGFACTORY_CPP
        #define ORG_ALLBINARY_GRAPHICS_FONT_FONTDEBUGFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/font/FontDebugFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

FontDebugFactory::FontDebugFactory() {
        }
        auto FontDebugFactory::instance_owner() -> FontDebugFactory* { static std::unique_ptr<FontDebugFactory> value(new FontDebugFactory()); return value.get(); }
FontDebugFactory* FontDebugFactory::instance = FontDebugFactory::instance_owner();

    auto FontDebugFactory::getInstance() -> FontDebugFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return FontDebugFactory::instance;
    
}


    auto FontDebugFactory::setFont(Font* font, Graphics* graphics) -> void{
graphics->setFont(font);
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_FONT_FONTDEBUGFACTORY_CPP
