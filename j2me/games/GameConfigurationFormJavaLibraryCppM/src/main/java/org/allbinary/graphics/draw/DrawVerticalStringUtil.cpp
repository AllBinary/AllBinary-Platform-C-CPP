
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DRAW_DRAWVERTICALSTRINGUTIL_CPP
        #define ORG_ALLBINARY_GRAPHICS_DRAW_DRAWVERTICALSTRINGUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/draw/DrawVerticalStringUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/AndroidUtil.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureUtil.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

DrawVerticalStringUtil::DrawVerticalStringUtil() : EMPTY_STRING(StringUtil::getInstance()->EMPTY_STRING), anchor(Anchor::TOP_LEFT), offsetXArray(NullUtil::getInstance()->NULL_INT_ARRAY) {
        }
        auto DrawVerticalStringUtil::instance_owner() -> DrawVerticalStringUtil* { static std::unique_ptr<DrawVerticalStringUtil> value(new DrawVerticalStringUtil()); return value.get(); }
DrawVerticalStringUtil* DrawVerticalStringUtil::instance = DrawVerticalStringUtil::instance_owner();

    auto DrawVerticalStringUtil::getInstance() -> DrawVerticalStringUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return DrawVerticalStringUtil::instance;
    
}


    auto DrawVerticalStringUtil::updateMeasurement(Graphics* graphics, std::string string) -> void{

    OpenGLFeatureUtil* openGLFeatureUtil = OpenGLFeatureUtil::getInstance();;
    

    Font* font = graphics->getFont();;
    
this->charHeight= font->getHeight();
    
this->offsetY= 0;
    

                        if(J2MEUtil::isHTML())
                        
                                    {
                                    this->charHeight += 1;
    

                                    }
                                
                             else 
                        if(openGLFeatureUtil->isAnyThreed())
                        
                                    {
                                    this->charHeight += 2;
    

                        if(AndroidUtil::isAndroid())
                        
                                    {
                                    
                                    }
                                
                        else {
                            this->offsetY= 2 +(this->charHeight *2 /3);
    

                        }
                            

                                    }
                                

    int32_t size = string.size();;
    

    char aChar;;
    

    std::vector<int32_t> offsetXArray = std::vector<int32_t>(size);;
    




                        for (
    int32_t index = size -1;index >= 0; index--)
        {
aChar= string[index];
    

                        if(openGLFeatureUtil->isAnyThreed())
                        
                                    {
                                    offsetXArray[index]= font->charWidth(aChar) /2;
    

                                    }
                                
}

this->offsetXArray= offsetXArray;
    
}


    auto DrawVerticalStringUtil::paintVerticle(Graphics* graphics, std::string string, int32_t x, int32_t y, int32_t anchor) -> void{

    int32_t size = string.size();;
    

    char aChar;;
    




                        for (
    int32_t index = size -1;index >= 0; index--)
        {
aChar= string[index];
    
graphics->drawChar(aChar, x +this->offsetXArray[index], y +(this->charHeight *index) +this->offsetY, anchor);
    
}

}


    auto DrawVerticalStringUtil::drawCenterString(Graphics* graphics, std::string string, int32_t offset, int32_t length, int32_t x, int32_t y) -> void{

    int32_t width = (graphics->getFont()->substringWidth(string, offset, length)>>1);;
    

        try {
            graphics->drawSubstring(string, offset, length, x -width, y, this->anchor);
    

                //: 
} catch(Exception& e) 
            {
PreLogUtil::put((new StringMaker())->append("Exception: stringLength: ")->appendint(string.size())->append(" offset: ")->appendint(offset)->append(" currentLength: ")->appendint(length)->toString(), this, "drawCenterString");
    
}

}


    auto DrawVerticalStringUtil::drawCenterStrings(Graphics* graphics, std::vector<std::string> stringArray, int32_t maxWidth, int32_t x, int32_t y) -> void{

    int32_t extraLines = 0;;
    




                        for (
    int32_t index = 0;index < stringArray.size(); index++)
        {

    std::string string = stringArray[index];;
    

                        if(string != this->EMPTY_STRING)
                        
                                    {
                                    
    int32_t width = graphics->getFont()->stringWidth(string);;
    

    int32_t minTotalLines = 1;;
    

                        if(width > maxWidth)
                        
                                    {
                                    minTotalLines= (width /maxWidth) +1;
    

                                    }
                                

    int32_t linePortion = string.size() /minTotalLines;;
    

    int32_t offset = 0;;
    

    int32_t currentLength = linePortion;;
    

    int32_t size = string.size();;
    

        while(offset < size)
        {

                        if(offset +currentLength > size)
                        
                                    {
                                    currentLength= size -offset;
    

                                    }
                                

                        if(offset +currentLength != size)
                        
                                    {
                                    
        while(currentLength > 0 && stringArray[index][offset +currentLength] != ' ')
        {
currentLength--;
    
}


                        if(currentLength <= 4)
                        
                                    {
                                    currentLength= linePortion;
    

                                    }
                                

                                    }
                                
this->drawCenterString(graphics, string, offset, currentLength, x, y +((index +extraLines++) *this->charHeight));
    
offset= offset +currentLength;
    
currentLength= linePortion;
    
}

extraLines--;
    

                                    }
                                
}

}




        #endif //ORG_ALLBINARY_GRAPHICS_DRAW_DRAWVERTICALSTRINGUTIL_CPP
