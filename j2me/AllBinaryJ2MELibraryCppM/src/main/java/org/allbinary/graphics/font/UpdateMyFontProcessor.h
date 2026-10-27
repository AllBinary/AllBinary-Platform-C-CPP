
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FONT_UPDATEMYFONTPROCESSOR_H
        #define ORG_ALLBINARY_GRAPHICS_FONT_UPDATEMYFONTPROCESSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Graphics;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/font/MyFontProcessor.h"
class UpdateMyFontInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UpdateMyFontProcessor: public MyFontProcessor {

    private: UpdateMyFontInterface* updateMeasurementProcessor;

public: UpdateMyFontProcessor(UpdateMyFontInterface* keyValueDrawCharArray);

    public: void process(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FONT_UPDATEMYFONTPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_FONT_UPDATEMYFONTPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_FONT_UPDATEMYFONTPROCESSOR_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include("org/allbinary/graphics/font/MyFontProcessor.h")
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#endif
#if __has_include("org/allbinary/graphics/font/UpdateMyFontInterface.h")
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#endif

        #endif
    
