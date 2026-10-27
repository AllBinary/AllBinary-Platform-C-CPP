
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FONT_UPDATEMYFONTPROCESSOR_CPP
        #define ORG_ALLBINARY_GRAPHICS_FONT_UPDATEMYFONTPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"


UpdateMyFontProcessor::UpdateMyFontProcessor(UpdateMyFontInterface* keyValueDrawCharArray){
this->updateMeasurementProcessor= keyValueDrawCharArray;
    
}


    auto UpdateMyFontProcessor::process(Graphics* graphics) -> void{
this->updateMeasurementProcessor->updateMeasurement(graphics);
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_FONT_UPDATEMYFONTPROCESSOR_CPP
