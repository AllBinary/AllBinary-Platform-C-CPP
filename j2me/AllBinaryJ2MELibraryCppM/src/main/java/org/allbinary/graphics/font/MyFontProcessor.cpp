
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FONT_MYFONTPROCESSOR_CPP
        #define ORG_ALLBINARY_GRAPHICS_FONT_MYFONTPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/font/MyFontProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

MyFontProcessor::MyFontProcessor() {
        }
        
    auto MyFontProcessor::defaultCharWidth(Font* font) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return font->charWidth('C');;
    
}


    auto MyFontProcessor::defaultStringWidth(Font* font, int32_t size) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MyFontProcessor::defaultCharWidth(font) *size;
    
}

auto MyFontProcessor::instance_owner() -> MyFontProcessor* { static std::unique_ptr<MyFontProcessor> value(new MyFontProcessor()); return value.get(); }
MyFontProcessor* MyFontProcessor::instance = MyFontProcessor::instance_owner();

    auto MyFontProcessor::getInstance() -> MyFontProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MyFontProcessor::instance;
    
}


    auto MyFontProcessor::process(Graphics* graphics) -> void{
}




        #endif //ORG_ALLBINARY_GRAPHICS_FONT_MYFONTPROCESSOR_CPP
