
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
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/J2MEUtil.h>

      
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

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HudGraphicsPosition.h"
#include "BasicHudFactory.h"

class BasicHud
            : public Object
        : public UpdateMyFontInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    protected: const CanvasStrings canvasStrings = CanvasStrings::getInstance();

    protected: const BasicColorSetUtil basicSetColorUtil = BasicColorSetUtil::getInstance();

    private: const DisplayInfoSingleton displayInfo = DisplayInfoSingleton::getInstance();

    protected: const MyFontProcessor updateMyFontProcessor = UpdateMyFontProcessor(this);

    protected: MyFontProcessor myFontProcessor = this->updateMyFontProcessor;

    private: int32_t location= 0;

    private: int32_t direction= 0;

    private: int32_t bufferZone= 0;

    private: int32_t bufferZoneY= 0;

    private: HudGraphicsPosition hudGraphicsPosition = HudGraphicsPosition::NULL_HUD_GRAPHICS_POSITION;

    private: int32_t x= 0;

    private: int32_t y= 0;

    private: BasicColor basicColor = BasicColorFactory::getInstance().BLACK;

    private: int32_t color;

    protected: int32_t updateMaxWidth= 0;

    protected: int32_t updateMaxHeight= 0;

    protected: int32_t offsetY= 0;

public: BasicHud(int32_t location, int32_t direction, int32_t bufferZone, BasicColor basicColor){
this->setLocation(location);
    
this->setDirection(direction);
    
this->setBufferZone(bufferZone);
    
this->onDisplayChangeEvent(DisplayInfoSingleton::getInstance().displayChangeEvent);
    
this->setBasicColorP(basicColor);
    
this->color= basicColor.intValue();
    
}


    public: void updateMeasurement(Graphics graphics){

        try {
            this->hudGraphicsPosition= this->getHudGraphicsPositionWH(this->displayInfo.getLastWidth(), this->displayInfo.getLastHeight(), this->updateMaxWidth, this->updateMaxHeight);
    
this->x= this->hudGraphicsPosition.getPoint().getX();
    
this->setY(this->hudGraphicsPosition.getPoint().getY());
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, this->canvasStrings.ON_DISPLAY_CHANGE_EVENT, e);
    
}

this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    public: int32_t getLocation(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->location;
    
}


    public: int32_t getDirection(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->direction;
    
}


                //@Throws(Exception.constructor)
            
    protected: HudGraphicsPosition getHudGraphicsPositionWH(int32_t width, int32_t height, int32_t maxWidth, int32_t maxHeight){

    int32_t x = 0;;
    

    int32_t y = 0;;
    

    int32_t anchor = 0;;
    

    BasicHudFactory basicHudFactory = BasicHudFactory::getInstance();;
    

                        if(basicHudFactory.BOTTOMLEFT == this->getLocation())
                        
                                    {
                                    x= this->bufferZone +2;
    
y= height -maxHeight -this->bufferZone;
    
anchor= Graphics::BOTTOM&Graphics::LEFT;
    

                                    }
                                
                             else 
                        if(basicHudFactory.BOTTOMRIGHT == this->getLocation())
                        
                                    {
                                    x= width -maxWidth;
    
y= height -maxHeight -this->bufferZone;
    
anchor= Graphics::BOTTOM&Graphics::RIGHT;
    

                                    }
                                
                             else 
                        if(basicHudFactory.TOPLEFT == this->getLocation())
                        
                                    {
                                    x= this->bufferZone +2;
    
y= this->bufferZoneY;
    
anchor= Anchor::TOP_LEFT;
    

                                    }
                                
                             else 
                        if(basicHudFactory.TOPRIGHT == this->getLocation())
                        
                                    {
                                    x= width -maxWidth;
    
y= this->bufferZoneY;
    
anchor= Graphics::TOP&Graphics::RIGHT;
    

                                    }
                                
                             else 
                        if(basicHudFactory.TOPCENTER == this->getLocation())
                        
                                    {
                                    x= ((width -maxWidth) /2);
    
y= this->bufferZoneY;
    
anchor= Graphics::TOP&Graphics::HCENTER;
    

                                    }
                                
                             else 
                        if(basicHudFactory.BOTTOMCENTER == this->getLocation())
                        
                                    {
                                    x= ((width -maxWidth) /2);
    
y= height -maxHeight -this->bufferZone;
    
anchor= Graphics::BOTTOM&Graphics::HCENTER;
    

                                    }
                                
                             else 
                        if(basicHudFactory.ABSOLUTE == this->getLocation())
                        
                                    {
                                    x= maxHeight;
    
y= maxWidth;
    
anchor= 0;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HudGraphicsPosition(this->getPoint(x, y), anchor);
    
}


    public: void onEvent(AllBinaryEventObject eventObject){
ForcedLogUtil::log(EventStrings::getInstance().PERFORMANCE_MESSAGE, this);
    
}


    public: void onDisplayChangeEvent(DisplayChangeEvent displayChangeEvent){
this->myFontProcessor= this->updateMyFontProcessor;
    
}


    protected: GPoint getPoint(int32_t x, int32_t y){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PointFactory::getInstance().createXY(x, y);;
    
}


    public: int32_t getBufferZone(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->bufferZone;
    
}


    public: void setBufferZone(int32_t bufferZone){
this->bufferZone= bufferZone;
    

                        if(J2MEUtil::isHTML())
                        
                                    {
                                    this->bufferZoneY= this->bufferZone;
    

                                    }
                                
                        else {
                            this->bufferZoneY= this->bufferZone +5;
    

                        }
                            
}


    public: void setLocation(int32_t location){
this->location= location;
    
}


    public: void setDirection(int32_t direction){
this->direction= direction;
    
}


    protected: HudGraphicsPosition getHudGraphicsPosition(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hudGraphicsPosition;
    
}


    public: int32_t getColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->color;
    
}


    public: int32_t getX(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->x;
    
}


    public: void setX(int32_t x){
this->x= x;
    
}


    public: void setBasicColorP(BasicColor basicColor){
this->basicColor= basicColor;
    
}


    public: BasicColor getBasicColorP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicColor;
    
}


    protected: void setY(int32_t y){
this->y= y;
    
}


    protected: int32_t getY(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->y;
    
}


    public: void paintSSO(Graphics graphics, std::string string, std::string string2, int32_t offset){
this->myFontProcessor.process(graphics);
    
this->basicSetColorUtil.setBasicColorP(graphics, this->getBasicColorP());
    
graphics.drawString(string, this->x, this->getY(), this->hudGraphicsPosition.getAnchor());
    
graphics.drawString(string2, this->x +offset, this->getY(), this->hudGraphicsPosition.getAnchor());
    
}


    public: void paintSSOO(Graphics graphics, std::string string, std::string string2, int32_t offset, int32_t offset2){
this->myFontProcessor.process(graphics);
    
graphics.setColor(this->getColor());
    
graphics.drawString(string, this->x +offset, this->getY(), this->hudGraphicsPosition.getAnchor());
    
graphics.drawString(string2, this->x +offset2, this->getY(), this->hudGraphicsPosition.getAnchor());
    
}


    public: void paintDXY(Graphics graphics, std::vector<char> charArray, int32_t offset, int32_t len, std::vector<char> charArray2, int32_t offset2, int32_t len2, int32_t xOffset, int32_t xOffset2){
this->myFontProcessor.process(graphics);
    
this->basicSetColorUtil.setBasicColorP(graphics, this->getBasicColorP());
    

    int32_t y = this->getY();;
    
graphics.drawChars(charArray, offset, len, this->x +xOffset, y, this->hudGraphicsPosition.getAnchor());
    
graphics.drawChars(charArray2, offset2, len2, this->x +xOffset2, y, this->hudGraphicsPosition.getAnchor());
    
}


    public: void paintDX(Graphics graphics, std::vector<char> charArray, int32_t offset, int32_t len, std::vector<char> charArray2, int32_t offset2, int32_t len2, int32_t xOffset){
this->myFontProcessor.process(graphics);
    
this->basicSetColorUtil.setBasicColorP(graphics, this->getBasicColorP());
    

    int32_t y = this->getY();;
    
graphics.drawChars(charArray, offset, len, this->x, y, this->hudGraphicsPosition.getAnchor());
    
graphics.drawChars(charArray2, offset2, len2, this->x +xOffset, y, this->hudGraphicsPosition.getAnchor());
    
}


    public: void paintOffsetAndLength(Graphics graphics, std::vector<char> charArray, int32_t offset, int32_t len){
this->myFontProcessor.process(graphics);
    
this->basicSetColorUtil.setBasicColorP(graphics, this->getBasicColorP());
    

    int32_t y = this->getY();;
    
graphics.drawChars(charArray, offset, len, this->x, y, this->hudGraphicsPosition.getAnchor());
    
}


    public: void paintString(Graphics graphics, std::string string){
this->myFontProcessor.process(graphics);
    
this->basicSetColorUtil.setBasicColorP(graphics, this->getBasicColorP());
    

    int32_t y = this->getY() +this->offsetY;;
    
graphics.drawString(string, this->x, y, this->hudGraphicsPosition.getAnchor());
    
}


};

            

