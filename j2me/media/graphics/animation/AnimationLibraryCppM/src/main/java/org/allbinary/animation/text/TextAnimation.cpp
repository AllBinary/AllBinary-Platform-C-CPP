
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_TEXT_TEXTANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_TEXT_TEXTANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/text/TextAnimation.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/threed/SWTJOGLProcessor.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/text/TextChangeListener.h"


TextAnimation::TextAnimation(std::string text, AnimationBehavior* animationBehavior) : IndexedAnimation(animationBehavior), updateMyFontProcessor(new UpdateMyFontProcessor(this)), myFontProcessor(this->updateMyFontProcessor), textArrayP(StringUtil::getInstance()->ONE_EMPTY_STRING_ARRAY), anchor(Anchor::TOP_LEFT), textChangeListener(TextChangeListener::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setText(text);
    
}


    auto TextAnimation::updateMeasurement(Graphics* graphics) -> void{

    Font* font = graphics->getFont();;
    
this->fontHeight= font->getHeight();
    

    int32_t adjustedFontHeight = static_cast<int32_t>( -(this->fontHeight *2.00));;
    
this->offsetY= SWTJOGLProcessor::getInstance()->isJOGL()
                        ?       
                                adjustedFontHeight
                                :

                            0;

    ;
    
this->textChangeListener->onMeasure();
    
this->textChangeListener= TextChangeListener::getInstance();
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


                //@Throws(Exception.constructor)
            
    auto TextAnimation::nextFrame() -> void{
}


    auto TextAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
this->myFontProcessor->process(graphics);
    
this->paintXYNoUpdate(graphics, x, y);
    
}


    auto TextAnimation::paintXYNoUpdate(Graphics* graphics, int32_t x, int32_t y) -> void{
this->basicSetColorUtil->setBasicColorP3(graphics, this->getBasicColorP(), this->getColor());
    

    int32_t size = this->textArrayP.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
graphics->drawString(this->textArrayP[index], x, y +this->offsetY +(index *this->fontHeight), this->anchor);
    
}

}


    auto TextAnimation::setTextWithOnMeasure(std::string text, TextChangeListener* textChangeListener) -> void{
this->setText(text);
    
this->textChangeListener= textChangeListener;
    
}


    auto TextAnimation::setText(std::string text) -> void{

    BasicArrayList* list = new BasicArrayListD();;
    

                        if(true && text.size() > 0)
                        
                                    {
                                    
    int32_t index = 0;;
    

    int32_t startIndex = 0;;
    

    int32_t endIndex = 0;;
    

        while(index >= 0)
        {
startIndex= index;
    
index= JavaString::indexOf(text, '\n', startIndex);
    
endIndex= index;
    

                        if(index < 0)
                        
                                    {
                                    endIndex= text.size();
    

                                    }
                                
list->add(JavaString::substring(text, startIndex, endIndex));
    

                        if(index < 0)
                        
                                    {
                                    break;

                    

                                    }
                                
index++;
    
}


                                    }
                                

                        if(list->size() > 0)
                        
                                    {
                                    
    std::vector<std::string> textArray = std::vector<std::string>(list->size());;
    

    int32_t size = list->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
textArray[index]= list->get(index);
    
}

this->textArrayP= textArray;
    

                                    }
                                
                        else {
                            this->textArrayP= StringUtil::getInstance()->ONE_EMPTY_STRING_ARRAY;
    

                        }
                            
this->myFontProcessor= this->updateMyFontProcessor;
    
}


    auto TextAnimation::getTextArray() -> std::vector<std::string>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->textArrayP;
    
}


    auto TextAnimation::getFontHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->fontHeight;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_TEXT_TEXTANIMATION_CPP
