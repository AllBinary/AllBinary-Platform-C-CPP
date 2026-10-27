
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DRAW_CANVASDRAWLINESTRING_CPP
        #define ORG_ALLBINARY_GRAPHICS_DRAW_CANVASDRAWLINESTRING_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/draw/CanvasDrawLineString.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/draw/DrawStringUtil.h"

auto CanvasDrawLineString::NULL_CANVAS_DRAW_LINE_STRING_owner() -> CanvasDrawLineString* { static std::unique_ptr<CanvasDrawLineString> value(new CanvasDrawLineString(0, 0)); return value.get(); }
CanvasDrawLineString* CanvasDrawLineString::NULL_CANVAS_DRAW_LINE_STRING = CanvasDrawLineString::NULL_CANVAS_DRAW_LINE_STRING_owner();

CanvasDrawLineString::CanvasDrawLineString(int32_t x, int32_t y) : drawStringUtil(DrawStringUtil::getInstance()), myFontProcessor(new UpdateMyFontProcessor(this)){
this->x= x;
    
this->y= y;
    
}


    auto CanvasDrawLineString::updateMeasurement(Graphics* graphics) -> void{

    Font* font = graphics->getFont();;
    
this->fontHeight= font->getHeight();
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    auto CanvasDrawLineString::paint(Graphics* graphics, std::string string, int32_t line) -> void{
this->myFontProcessor->process(graphics);
    
this->drawStringUtil->drawCenterString(graphics, string, 0, string.size()this->x, this->y +(line *this->fontHeight));
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_DRAW_CANVASDRAWLINESTRING_CPP
