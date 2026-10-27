
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/paint/InitUpdatePaintable.h>

      
#include <org/allbinary/input/motion/button/CommonButtons.h>

      
#include <org/allbinary/input/motion/button/TouchButtonLocationHelper.h>

      
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SelectionHudPaintable: public InitUpdatePaintable, public UpdateMyFontInterface {

    protected: const int32_t y = CommonButtons::getInstance()->STANDARD_BUTTON_SIZE +17;

    private: PrimitiveLongUtil* primitiveLongUtil;

    protected: MyFontProcessor* updateMyFontProcessor = new UpdateMyFontProcessor(this);

    protected: MyFontProcessor* myFontProcessor = updateMyFontProcessor;

    private: int32_t x= 0;

    protected: int32_t textX= 0;

    protected: int32_t imageX= 0;

    private: BasicColor* basicColor = BasicColorFactory::getInstance()->BLACK;

    private: int32_t color= 0;

    private: int32_t width= 0;

    private: int32_t height= 0;

    private: std::string name = StringUtil::getInstance()->EMPTY_STRING;

    private: Animation* animationInterface = NullAnimationFactory::getFactoryInstance()->getInstance(0);

    private: const int32_t backgroundColor = BasicColorFactory::getInstance()->GREY.intValue();

protected: SelectionHudPaintable(){
this->update();
    
this->primitiveLongUtil= PrimitiveLongUtil::createPowerOfTen(10000);
    
}


    public: void updateMeasurement(Graphics* graphics){

    CommonButtons* commonButtons = CommonButtons::getInstance();;
    

    Font* font = graphics->getFont();;
    
this->setHeight(commonButtons->STANDARD_BUTTON_SIZE +font->getHeight());
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    public: void update(){

    CommonButtons* commonButtons = CommonButtons::getInstance();;
    

    TouchButtonLocationHelper* touchButtonLocationHelper = new TouchButtonLocationHelper();;
    

    DisplayInfoSingleton* displayInfoSingleton = DisplayInfoSingleton::getInstance();;
    
this->x= commonButtons->STANDARD_BUTTON_SIZE +touchButtonLocationHelper->getColumnsRemainderHalf();
    
this->textX= this->getX() +4;
    
this->width= displayInfoSingleton->getLastWidth() -this->getX() *2;
    
this->imageX= this->getWidth() +touchButtonLocationHelper->getColumnsRemainderHalf() -10;
    
this->myFontProcessor= this->updateMyFontProcessor;
    
}


    public: void updateSelectionInfo(){
}


    public: void updateInfo(){
}


    protected: PrimitiveLongUtil* getPrimitiveLongUtil(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->primitiveLongUtil;
    
}


    protected: void setAnimationInterface(Animation* animationInterface){
this->animationInterface= animationInterface;
    
}


    protected: Animation* getAnimationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animationInterface;
    
}


    protected: void setName(std::string name){
this->name= name;
    
}


    protected: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: void setBasicColorP(BasicColor* basicColor){
this->basicColor= basicColor;
    
this->setColor(basicColor->intValue());
    
}


    protected: BasicColor* getBasicColorP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicColor;
    
}


    public: void setColor(int32_t color){
this->color= color;
    
}


    public: int32_t getColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->color;
    
}


    protected: int32_t getWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->width;
    
}


    protected: void setHeight(int32_t height){
this->height= height;
    
}


    protected: int32_t getHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->height;
    
}


    protected: int32_t getX(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->x;
    
}


    public: void paint(Graphics* graphics){
this->myFontProcessor->process(graphics);
    
graphics->setColor(this->backgroundColor);
    
graphics->drawRect(this->getX(), this->y, this->getWidth(), this->getHeight());
    
graphics->setColor(this->getColor());
    
graphics->drawString(this->getName(), this->textX, this->y, 0);
    
}


};

            

