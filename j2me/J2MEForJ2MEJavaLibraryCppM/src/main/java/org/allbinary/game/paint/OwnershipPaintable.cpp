
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

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //J2MEForJ2ME
class OwnershipPaintable: public Paintable, public UpdateMyFontInterface {

    public: static OwnershipPaintable* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new OwnershipPaintable();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: DisplayInfoSingleton* displayInfo = DisplayInfoSingleton::getInstance();

    private: MyFontProcessor* myFontProcessor = new UpdateMyFontProcessor(this);

    private: const std::string COPYRIGHT = "AllBinary Copyright (c) 2011";

    private: BasicColor* basicColor = BasicColorFactory::getInstance()->WHITE;

    private: int32_t color = this->basicColor->intValue();

    private: int32_t anchor = Anchor::TOP_LEFT;

    private: int32_t COPYRIGHT_Y= 0;

    private: int32_t beginWidth= 0;

private: OwnershipPaintable(){
}


    public: void updateMeasurement(Graphics* graphics){

    Font* font = graphics->getFont();;
    
this->COPYRIGHT_Y= 2 *font->getHeight();
    
this->beginWidth= (font->stringWidth(this->COPYRIGHT)>>1);
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    public: void setBasicColorP(BasicColor* basicColor){
this->basicColor= basicColor;
    
this->color= basicColor->intValue();
    
}


    public: BasicColor* getBasicColorP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicColor;
    
}


    public: void paint(Graphics* graphics){
this->myFontProcessor->process(graphics);
    
graphics->setColor(this->color);
    

    int32_t halfWidth = this->displayInfo->getLastHalfWidth();;
    

    int32_t height = this->displayInfo->getLastHeight();;
    
graphics->drawString(this->COPYRIGHT, halfWidth -this->beginWidth, height -this->COPYRIGHT_Y, this->anchor);
    
}


};

            

