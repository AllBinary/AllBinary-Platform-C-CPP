
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

#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MyFontProcessor.h"
#include "UpdateMyFontInterface.h"

class UpdateMyFontProcessor: public MyFontProcessor {

    private: UpdateMyFontInterface updateMeasurementProcessor;

public: UpdateMyFontProcessor(UpdateMyFontInterface keyValueDrawCharArray);

    public: void process(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FONT_UPDATEMYFONTPROCESSOR_H
