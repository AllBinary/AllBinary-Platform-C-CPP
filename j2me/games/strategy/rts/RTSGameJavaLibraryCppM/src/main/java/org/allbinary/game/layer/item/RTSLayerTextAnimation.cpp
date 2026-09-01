
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RTSLayerTextAnimation: public Animation, public UpdateMyFontInterface {

    private: Image image;

    private: std::string text;

    private: MyFontProcessor myFontProcessor = UpdateMyFontProcessor(this);

    private: int32_t fontHeight = 0;

public: RTSLayerTextAnimation(std::string text, Image image){
this->text= text;
    
this->image= image;
    
}


    public: void updateMeasurement(Graphics graphics){

    Font font = graphics.getFont();;
    
this->fontHeight= font.getHeight();
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    public: void paintXY(Graphics graphics, int32_t x, int32_t y){
this->myFontProcessor.process(graphics);
    
super.paintXY(graphics, x, y);
    

    int32_t adjustedCostY = this->image.getHeight() -this->fontHeight;;
    
graphics.drawString(this->text, x, y +adjustedCostY, 0);
    
}


};

            

