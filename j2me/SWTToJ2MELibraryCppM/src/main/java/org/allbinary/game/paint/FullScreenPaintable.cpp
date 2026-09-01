
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
        



#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //SwtToJ2ME
class FullScreenPaintable: public Paintable, public UpdateMyFontInterface {

    public: static FullScreenPaintable getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FullScreenPaintable();
    
}


    private: const DisplayInfoSingleton displayInfo = DisplayInfoSingleton::getInstance();

    private: MyFontProcessor myFontProcessor = UpdateMyFontProcessor(this);

    private: const std::string FULLSCREEN_TEXT = "F11 - Toggle Fullscreen";

    private: int32_t anchor = Anchor::TOP_LEFT;

    private: int32_t Y= 0;

    private: int32_t beginWidth= 0;

private: FullScreenPaintable(){
}


    public: void updateMeasurement(Graphics graphics){

    Font font = graphics.getFont();;
    
this->Y= 4 *font.getHeight();
    
this->beginWidth= (font.stringWidth(this->FULLSCREEN_TEXT)>>1);
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    public: void paint(Graphics graphics){
this->myFontProcessor.process(graphics);
    

    int32_t halfWidth = this->displayInfo.getLastHalfWidth();;
    

    int32_t height = this->displayInfo.getLastHeight();;
    
graphics.drawString(this->FULLSCREEN_TEXT, halfWidth -this->beginWidth, height -this->Y, this->anchor);
    
}


};

            

