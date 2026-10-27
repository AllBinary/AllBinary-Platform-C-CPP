
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/paint/Paintable.h"

class SimpleTextPaintable: public Paintable, public UpdateMyFontInterface {

    private: DisplayInfoSingleton* displayInfoSingleton = DisplayInfoSingleton::getInstance();

    private: MyFontProcessor* updateMyFontProcessor = new UpdateMyFontProcessor(this);

    private: MyFontProcessor* myFontProcessor = this->updateMyFontProcessor;

    private: std::string text;

    private: BasicColor* basicColor;

    private: int32_t topScoresWidth = 0;

    private: int32_t fontHeight = 0;

    private: int32_t anchor = Anchor::TOP_LEFT;

public: SimpleTextPaintable(std::string text, BasicColor* basicColor){
this->text= text;
    
this->basicColor= basicColor;
    
}


    public: void updateMeasurement(Graphics* graphics){

    Font* font = graphics->getFont();;
    
this->topScoresWidth= (font->stringWidth(this->text)>>1);
    
this->fontHeight= font->getHeight();
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    public: void paint(Graphics* graphics){
this->myFontProcessor->process(graphics);
    

    int32_t width = this->displayInfoSingleton->getLast()[this->displayInfoSingleton->WIDTH];;
    
graphics->setColor(this->getBasicColorP()->intValue());
    
graphics->drawString(this->text, (width>>1) -this->topScoresWidth, this->fontHeight, this->anchor);
    
}


    public: void setBasicColorP(BasicColor* basicColor){
this->basicColor= basicColor;
    
}


    private: BasicColor* getBasicColorP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicColor;
    
}


    public: void setText(std::string text){
this->text= text;
    
this->myFontProcessor= this->updateMyFontProcessor;
    
}


    public: std::string getText(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->text;
    
}


};

            

