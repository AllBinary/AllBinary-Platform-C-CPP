
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DRAW_KEYVALUEDRAWSTRING_CPP
        #define ORG_ALLBINARY_GRAPHICS_DRAW_KEYVALUEDRAWSTRING_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/draw/KeyValueDrawString.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

KeyValueDrawString::KeyValueDrawString(std::string label, int32_t x) : myFontProcessor(new UpdateMyFontProcessor(this)), value(StringUtil::getInstance()->EMPTY_STRING){
this->LABEL= label;
    
this->labelX= x;
    
}


    auto KeyValueDrawString::updateMeasurement(Graphics* graphics) -> void{

    int32_t labelWidth = graphics->getFont()->stringWidth(this->LABEL) -LABEL.size();;
    
this->valueX= labelWidth +this->labelX;
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    auto KeyValueDrawString::paint(Graphics* graphics, int32_t y) -> void{
this->myFontProcessor->process(graphics);
    
graphics->drawString(this->LABEL, this->labelX, y, 0);
    
graphics->drawString(this->value, this->valueX, y, 0);
    
}


    auto KeyValueDrawString::update(std::string value) -> void{

                        if(true)
                        
                                    {
                                    this->value= value;
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_GRAPHICS_DRAW_KEYVALUEDRAWSTRING_CPP
