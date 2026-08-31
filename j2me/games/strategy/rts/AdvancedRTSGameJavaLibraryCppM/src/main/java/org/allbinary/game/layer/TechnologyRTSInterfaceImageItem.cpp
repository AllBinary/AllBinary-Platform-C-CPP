
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
        



            #include "../../../../java/lang/Exception.h"
        
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

class TechnologyRTSInterfaceImageItem: public ABCustomImageItem: public UpdateMyFontInterface {
        

    private: const rtsInterface: RTSInterface;

    private: const primitiveLongUtil: PrimitiveLongUtil = PrimitiveLongUtil.createPowerOfTen(10000)!;

    private: const LEVEL: string = "Level";

    private: const COST: string = "Cost";

    private: const DOLLAR: string = "$";

    private: myFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    private: costString: std::vector<char> = CharArrayFactory.getInstance()!.getZeroCharArray()!;

    private: costLength: int32_t= 0;

    private: levelString: std::vector<char> = CharArrayFactory.getInstance()!.getZeroCharArray()!;

    private: levelLength: int32_t= 0;

    private: adjustedCostLabelY: int32_t= 0;

    private: adjustedCostX: int32_t= 0;

    private: adjustedCostY: int32_t= 0;

    private: adjustedLevelX: int32_t= 0;

    private: adjustedLevelY: int32_t= 0;

public constructor (string label, Image img, int32_t layout, string altText, BasicColor basicColor, RTSInterface rtsInterface){
            super(label, img, layout, altText, basicColor, 0);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.rtsInterface= rtsInterface;
    
this.update();
    
}


    public updateMeasurement(Graphics graphics){

    font: Font = graphics.getFont()!;;
    

    fontHeight: int32_t = font.getHeight()!;;
    

    imageHeight: int32_t = 0;;
    

    image: Image = this.getImage()!;;
    

                        if(image != NullImage.NULL_IMAGE)
                        
                                    {
                                    imageHeight= image.getHeight();
    

                                    }
                                
this.adjustedCostLabelY=  -this.yOffset +imageHeight -(3 *fontHeight);
    
this.adjustedCostY=  -this.yOffset +imageHeight -(2 *fontHeight);
    
this.adjustedCostX= 2 +(this.DOLLAR.length *(fontHeight -1));
    
this.adjustedLevelY=  -this.yOffset +imageHeight -fontHeight;
    
this.adjustedLevelX= 2 +(this.LEVEL.length *(fontHeight -1));
    
this.myFontProcessor= MyFontProcessor.getInstance();
    
}


    public RTSInterface getRtsInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.rtsInterface;
    
}


    public update(){
this.costString= this.primitiveLongUtil!.getCharArray(this.getRtsInterface()!.getUpgradeCost());
    
this.levelString= this.primitiveLongUtil!.getCharArray(this.getRtsInterface()!.getLevel());
    
}


    public paintXY(Graphics graphics, int32_t x, int32_t y){
this.myFontProcessor!.process(graphics);
    
super.paintXY(graphics, x, y);
    

    xa: int32_t = x +2;;
    
graphics.drawString(this.COST, xa, y +this.adjustedCostLabelY, 0);
    
graphics.drawString(this.DOLLAR, xa, y +this.adjustedCostY, 0);
    
graphics.drawChars(this.costString, 0, this.costLength, x +this.adjustedCostX, y +this.adjustedCostY, 0);
    
graphics.drawString(this.LEVEL, xa, y +this.adjustedLevelY, 0);
    
graphics.drawChars(this.levelString, 0, this.levelLength, x +this.adjustedLevelX, y +this.adjustedLevelY, 0);
    
}


};

            

