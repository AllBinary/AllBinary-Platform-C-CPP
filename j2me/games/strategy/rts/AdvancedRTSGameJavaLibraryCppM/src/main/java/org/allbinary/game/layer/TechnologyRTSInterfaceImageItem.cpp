
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/graphics/form/item/ABCustomImageItem.h>

      
#include <org/allbinary/logic/java/character/CharArrayFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RTSInterface.h"

class TechnologyRTSInterfaceImageItem: public ABCustomImageItem, public UpdateMyFontInterface {

    private: RTSInterface rtsInterface;

    private: const PrimitiveLongUtil primitiveLongUtil = PrimitiveLongUtil::createPowerOfTen(10000);

    private: const std::string LEVEL = "Level";

    private: const std::string COST = "Cost";

    private: const std::string DOLLAR = "$";

    private: MyFontProcessor myFontProcessor = UpdateMyFontProcessor(this);

    private: std::vector<char> costString = CharArrayFactory::getInstance().getZeroCharArray();

    private: int32_t costLength= 0;

    private: std::vector<char> levelString = CharArrayFactory::getInstance().getZeroCharArray();

    private: int32_t levelLength= 0;

    private: int32_t adjustedCostLabelY= 0;

    private: int32_t adjustedCostX= 0;

    private: int32_t adjustedCostY= 0;

    private: int32_t adjustedLevelX= 0;

    private: int32_t adjustedLevelY= 0;

public: TechnologyRTSInterfaceImageItem(std::string label, Image img, int32_t layout, std::string altText, BasicColor basicColor, RTSInterface rtsInterface) : ABCustomImageItem(label, img, layout, altText, basicColor, 0){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->rtsInterface= rtsInterface;
    
this->update();
    
}


    public: void updateMeasurement(Graphics graphics){

    Font font = graphics.getFont();;
    

    int32_t fontHeight = font.getHeight();;
    

    int32_t imageHeight = 0;;
    

    Image image = this->getImage();;
    

                        if(image != NullImage::NULL_IMAGE)
                        
                                    {
                                    imageHeight= image.getHeight();
    

                                    }
                                
this->adjustedCostLabelY=  -this->yOffset +imageHeight -(3 *fontHeight);
    
this->adjustedCostY=  -this->yOffset +imageHeight -(2 *fontHeight);
    
this->adjustedCostX= 2 +(DOLLAR.size() *(fontHeight -1));
    
this->adjustedLevelY=  -this->yOffset +imageHeight -fontHeight;
    
this->adjustedLevelX= 2 +(LEVEL.size() *(fontHeight -1));
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    public: RTSInterface getRtsInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rtsInterface;
    
}


    public: void update(){
this->costString= this->primitiveLongUtil.getCharArray(this->getRtsInterface().getUpgradeCost());
    
this->levelString= this->primitiveLongUtil.getCharArray(this->getRtsInterface().getLevel());
    
}


    public: void paintXY(Graphics graphics, int32_t x, int32_t y){
this->myFontProcessor.process(graphics);
    
super.paintXY(graphics, x, y);
    

    int32_t xa = x +2;;
    
graphics.drawString(this->COST, xa, y +this->adjustedCostLabelY, 0);
    
graphics.drawString(this->DOLLAR, xa, y +this->adjustedCostY, 0);
    
graphics.drawChars(this->costString, 0, this->costLength, x +this->adjustedCostX, y +this->adjustedCostY, 0);
    
graphics.drawString(this->LEVEL, xa, y +this->adjustedLevelY, 0);
    
graphics.drawChars(this->levelString, 0, this->levelLength, x +this->adjustedLevelX, y +this->adjustedLevelY, 0);
    
}


};

            

