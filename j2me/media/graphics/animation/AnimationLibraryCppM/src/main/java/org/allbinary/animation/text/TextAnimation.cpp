
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
        



            #include <vector>
        
            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/threed/SWTJOGLProcessor.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TextChangeListener.h"

class TextAnimation: public IndexedAnimation, public UpdateMyFontInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const MyFontProcessor updateMyFontProcessor = UpdateMyFontProcessor(this);

    protected: MyFontProcessor myFontProcessor = this->updateMyFontProcessor;

    protected: std::vector<std::string> textArrayP = StringUtil::getInstance().ONE_EMPTY_STRING_ARRAY;

    private: int32_t anchor = Anchor::TOP_LEFT;

    private: int32_t fontHeight = 0;

    private: int32_t offsetY = 0;

    private: TextChangeListener textChangeListener = TextChangeListener::getInstance();

public: TextAnimation(std::string text, AnimationBehavior animationBehavior){
            super(animationBehavior);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setText(text);
    
}


    public: void updateMeasurement(Graphics graphics){

    Font font = graphics.getFont();;
    
this->fontHeight= font.getHeight();
    

    int32_t adjustedFontHeight = static_cast<int32_t>( -(this->fontHeight *2.00));;
    
this->offsetY= SWTJOGLProcessor::getInstance().isJOGL()
                        ?       
                                adjustedFontHeight
                                :

                            0;

    ;
    
this->textChangeListener.onMeasure();
    
this->textChangeListener= TextChangeListener::getInstance();
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


                //@Throws(Exception.constructor)
            
    public: void nextFrame(){
}


    public: void paintXY(Graphics graphics, int32_t x, int32_t y){
this->myFontProcessor.process(graphics);
    
this->paintXYNoUpdate(graphics, x, y);
    
}


    public: void paintXYNoUpdate(Graphics graphics, int32_t x, int32_t y){
this->basicSetColorUtil.setBasicColorP3(graphics, this->getBasicColorP(), this->getColor());
    

    int32_t size = this->textArrayP.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
graphics.drawString(this->textArrayP[index]!, x, y +this->offsetY +(index *this->fontHeight), this->anchor);
    
}

}


    public: void setTextWithOnMeasure(std::string text, TextChangeListener textChangeListener){
this->setText(text);
    
this->textChangeListener= textChangeListener;
    
}


    public: void setText(std::string text){

    BasicArrayList list = BasicArrayListD();;
    

                        if(true && text.size() > 0)
                        
                                    {
                                    
    int32_t index = 0;;
    

    int32_t startIndex = 0;;
    

    int32_t endIndex = 0;;
    

        while(index >= 0)
        {
startIndex= index;
    
index= text.indexOf('\n', startIndex);
    
endIndex= index;
    

                        if(index < 0)
                        
                                    {
                                    endIndex= text.size();
    

                                    }
                                
list.add(text.substring(startIndex, endIndex));
    

                        if(index < 0)
                        
                                    {
                                    break;

                    

                                    }
                                
index++;
    
}


                                    }
                                

                        if(list.size() > 0)
                        
                                    {
                                    
    std::vector<std::string> textArray = new Array(list.size());;
    

    int32_t size = list.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
textArray[index]= list.get(index) as string;
    
}

this->textArrayP= textArray;
    

                                    }
                                
                        else {
                            this->textArrayP= StringUtil::getInstance().ONE_EMPTY_STRING_ARRAY;
    

                        }
                            
this->myFontProcessor= this->updateMyFontProcessor;
    
}


    public: std::vector<std::string> getTextArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->textArrayP;
    
}


    public: int32_t getFontHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->fontHeight;
    
}


};

            

