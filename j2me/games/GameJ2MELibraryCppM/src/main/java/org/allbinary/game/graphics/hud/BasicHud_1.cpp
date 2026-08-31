
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorSetUtil.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HudGraphicsPosition.h"
#include "BasicHudFactory.h"

class BasicHud_1
            : public Object
        : public UpdateMyFontInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    const canvasStrings: CanvasStrings = CanvasStrings.getInstance()!;

    const basicSetColorUtil: BasicColorSetUtil = BasicColorSetUtil.getInstance()!;

    private: const displayInfo: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;

    private: const updateMyFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    private: myFontProcessor: MyFontProcessor = this.updateMyFontProcessor;

    private: location: int32_t= 0;

    private: direction: int32_t= 0;

    private: bufferZone: int32_t= 0;

    private: hudGraphicsPosition: HudGraphicsPosition = HudGraphicsPosition.NULL_HUD_GRAPHICS_POSITION;

    private: x: int32_t= 0;

    private: y: int32_t= 0;

    private: basicColor: BasicColor = BasicColorFactory.getInstance()!.BLACK;

    private: color: int32_t;

    updateMaxWidth: int32_t= 0;

    updateMaxHeight: int32_t= 0;

public constructor (int32_t location, int32_t direction, int32_t bufferZone, BasicColor basicColor){

            super();
        this.setLocation(location);
    
this.setDirection(direction);
    
this.setBufferZone(bufferZone);
    
this.onDisplayChangeEvent(DisplayInfoSingleton.getInstance()!.displayChangeEvent);
    
this.setBasicColorP(basicColor);
    
this.color= basicColor!.intValue();
    
}


    public updateMeasurement(Graphics graphics){

        try {
            this.hudGraphicsPosition= this.getHudGraphicsPositionWH(this.displayInfo!.getLastWidth(), this.displayInfo!.getLastHeight(), this.updateMaxWidth, this.updateMaxHeight);
    
this.x= this.hudGraphicsPosition!.getPoint()!.getX();
    
this.setY(this.hudGraphicsPosition!.getPoint()!.getY());
    

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, this.canvasStrings!.ON_DISPLAY_CHANGE_EVENT, e);
    
}

this.myFontProcessor= MyFontProcessor.getInstance();
    
}


    public int32_t getLocation(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.location;
    
}


    public int32_t getDirection(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.direction;
    
}


                //@Throws(Exception.constructor)
            
    HudGraphicsPosition getHudGraphicsPositionWH(int32_t width, int32_t height, int32_t maxWidth, int32_t maxHeight){

    x: int32_t = 0;;
    

    y: int32_t = 0;;
    

    anchor: int32_t = 0;;
    

    basicHudFactory: BasicHudFactory = BasicHudFactory.getInstance()!;;
    

                        if(basicHudFactory!.BOTTOMLEFT == this.getLocation())
                        
                                    {
                                    x= this.bufferZone +2;
    
y= height -maxHeight -this.bufferZone;
    
anchor= Graphics.BOTTOM&Graphics.LEFT;
    

                                    }
                                
                             else 
                        if(basicHudFactory!.BOTTOMRIGHT == this.getLocation())
                        
                                    {
                                    x= width -maxWidth;
    
y= height -maxHeight -this.bufferZone;
    
anchor= Graphics.BOTTOM&Graphics.RIGHT;
    

                                    }
                                
                             else 
                        if(basicHudFactory!.TOPLEFT == this.getLocation())
                        
                                    {
                                    x= this.bufferZone +2;
    
y= this.bufferZone +5;
    
anchor= Anchor.TOP_LEFT;
    

                                    }
                                
                             else 
                        if(basicHudFactory!.TOPRIGHT == this.getLocation())
                        
                                    {
                                    x= width -maxWidth;
    
y= this.bufferZone +5;
    
anchor= Graphics.TOP&Graphics.RIGHT;
    

                                    }
                                
                             else 
                        if(basicHudFactory!.TOPCENTER == this.getLocation())
                        
                                    {
                                    x= ((width -maxWidth) /2);
    
y= this.bufferZone +5;
    
anchor= Graphics.TOP&Graphics.HCENTER;
    

                                    }
                                
                             else 
                        if(basicHudFactory!.BOTTOMCENTER == this.getLocation())
                        
                                    {
                                    x= ((width -maxWidth) /2);
    
y= height -maxHeight -this.bufferZone;
    
anchor= Graphics.BOTTOM&Graphics.HCENTER;
    

                                    }
                                
                             else 
                        if(basicHudFactory!.ABSOLUTE == this.getLocation())
                        
                                    {
                                    x= maxHeight;
    
y= maxWidth;
    
anchor= 0;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new HudGraphicsPosition(this.getPoint(x, y), anchor);
    
}


    public onEvent(AllBinaryEventObject eventObject){
ForcedLogUtil.log(EventStrings.getInstance()!.PERFORMANCE_MESSAGE, this);
    
}


    public onDisplayChangeEvent(DisplayChangeEvent displayChangeEvent){
this.myFontProcessor= this.updateMyFontProcessor;
    
}


    GPoint getPoint(int32_t x, int32_t y){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PointFactory.getInstance()!.createXY(x, y);;
    
}


    public int32_t getBufferZone(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.bufferZone;
    
}


    public setBufferZone(int32_t bufferZone){
this.bufferZone= bufferZone;
    
}


    public setLocation(int32_t location){
this.location= location;
    
}


    public setDirection(int32_t direction){
this.direction= direction;
    
}


    HudGraphicsPosition getHudGraphicsPosition(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.hudGraphicsPosition;
    
}


    public int32_t getColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.color;
    
}


    public int32_t getX(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.x;
    
}


    public setX(int32_t x){
this.x= x;
    
}


    public setBasicColorP(BasicColor basicColor){
this.basicColor= basicColor;
    
}


    public BasicColor getBasicColorP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.basicColor;
    
}


    setY(int32_t y){
this.y= y;
    
}


    int32_t getY(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.y;
    
}


    public paintSSO(Graphics graphics, string string, string string2, int32_t offset){
this.myFontProcessor!.process(graphics);
    
this.basicSetColorUtil!.setBasicColorP(graphics, this.getBasicColorP());
    
graphics.drawString(string, this.x, this.getY(), this.hudGraphicsPosition!.getAnchor());
    
graphics.drawString(string2, this.x +offset, this.getY(), this.hudGraphicsPosition!.getAnchor());
    
}


    public paintSSOO(Graphics graphics, string string, string string2, int32_t offset, int32_t offset2){
this.myFontProcessor!.process(graphics);
    
graphics.setColor(this.getColor());
    
graphics.drawString(string, this.x +offset, this.getY(), this.hudGraphicsPosition!.getAnchor());
    
graphics.drawString(string2, this.x +offset2, this.getY(), this.hudGraphicsPosition!.getAnchor());
    
}


    public paintDXY(Graphics graphics, std::vector<char> charArray, int32_t offset, int32_t len, std::vector<char> charArray2, int32_t offset2, int32_t len2, int32_t xOffset, int32_t xOffset2){
this.myFontProcessor!.process(graphics);
    
this.basicSetColorUtil!.setBasicColorP(graphics, this.getBasicColorP());
    

    y: int32_t = this.getY()!;;
    
graphics.drawChars(charArray, offset, len, this.x +xOffset, y, this.hudGraphicsPosition!.getAnchor());
    
graphics.drawChars(charArray2, offset2, len2, this.x +xOffset2, y, this.hudGraphicsPosition!.getAnchor());
    
}


    public paintDX(Graphics graphics, std::vector<char> charArray, int32_t offset, int32_t len, std::vector<char> charArray2, int32_t offset2, int32_t len2, int32_t xOffset){
this.myFontProcessor!.process(graphics);
    
this.basicSetColorUtil!.setBasicColorP(graphics, this.getBasicColorP());
    

    y: int32_t = this.getY()!;;
    
graphics.drawChars(charArray, offset, len, this.x, y, this.hudGraphicsPosition!.getAnchor());
    
graphics.drawChars(charArray2, offset2, len2, this.x +xOffset, y, this.hudGraphicsPosition!.getAnchor());
    
}


    public paintOffsetAndLength(Graphics graphics, std::vector<char> charArray, int32_t offset, int32_t len){
this.myFontProcessor!.process(graphics);
    
this.basicSetColorUtil!.setBasicColorP(graphics, this.getBasicColorP());
    

    y: int32_t = this.getY()!;;
    
graphics.drawChars(charArray, offset, len, this.x, y, this.hudGraphicsPosition!.getAnchor());
    
}


    offsetY: int32_t= 0;

    public paintString(Graphics graphics, string string){
this.myFontProcessor!.process(graphics);
    
this.basicSetColorUtil!.setBasicColorP(graphics, this.getBasicColorP());
    

    y: int32_t = this.getY() +this.offsetY;;
    
graphics.drawString(string, this.x, y, this.hudGraphicsPosition!.getAnchor());
    
}


};

            

