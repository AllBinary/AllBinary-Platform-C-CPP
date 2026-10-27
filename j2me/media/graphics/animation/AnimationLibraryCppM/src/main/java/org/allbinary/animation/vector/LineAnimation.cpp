
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTOR_LINEANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_VECTOR_LINEANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/vector/LineAnimation.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>

      
#include <org/allbinary/layer/PositionInterface.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

LineAnimation::LineAnimation(BasicColor* basicColor) : newLine(std::vector<std::vector<int32_t>>(2, std::vector<int32_t>(2))), tempLine(NullUtil::getInstance()->NULL_INT_ARRAY_ARRAY), line(std::vector<std::vector<int32_t>>(2, std::vector<int32_t>(2))){
this->setBasicColorP(basicColor);
    
}


    auto LineAnimation::init(int32_t x, int32_t y) -> void{
this->newLine[0][0]= x;
    
this->newLine[0][1]= y;
    
this->newLine[1][0]= x;
    
this->newLine[1][1]= y;
    
this->tempLine= this->line;
    
this->line= this->newLine;
    
this->newLine= this->tempLine;
    
}


    auto LineAnimation::setPosition(int32_t x, int32_t y, int32_t z) -> void{
this->newLine[0][0]= this->line[1][0];
    
this->newLine[0][1]= this->line[1][1];
    
this->newLine[1][0]= x;
    
this->newLine[1][1]= y;
    
this->tempLine= this->line;
    
this->line= this->newLine;
    
this->newLine= this->tempLine;
    
}


    auto LineAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{

    std::vector<std::vector<int32_t>> currentLine = this->line;;
    
this->basicSetColorUtil->setBasicColorP3(graphics, this->getBasicColorP(), this->getColor());
    
graphics->drawLine(currentLine[0][0], currentLine[0][1], currentLine[1][0], currentLine[1][1]);
    
}


    auto LineAnimation::nextFrame() -> void{
}




        #endif //ORG_ALLBINARY_ANIMATION_VECTOR_LINEANIMATION_CPP
