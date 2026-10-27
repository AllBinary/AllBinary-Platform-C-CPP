
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTON_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTON_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/button/TouchButton.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>

      
#include <org/allbinary/graphics/CellPosition.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/RectangleFactory.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/TouchButtonInput.h"
#include "org/allbinary/input/motion/button/TouchButtonResource.h"


                //@Throws(Exception.constructor)
            
    auto TouchButton::createButton(TouchButtonInput* touchButtonInput, TouchButtonResource* touchButtonResource, Rectangle* rawRectangle, CellPosition* cellPosition, int32_t xBorder, int32_t yBorder) -> TouchButton*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new TouchButton(touchButtonInput, FeaturedAnimationInterfaceFactoryInterfaceFactory::getInstance()->get(touchButtonResource->RESOURCE)->getInstance(0), FeaturedAnimationInterfaceFactoryInterfaceFactory::getInstance()->get(touchButtonResource->HINT)->getInstance(0), rawRectangle, cellPosition, xBorder, yBorder);
    
}


TouchButton::TouchButton(TouchButtonInput* touchButtonInput, Animation* animationInterface, Animation* hintAnimationInterface, Rectangle* rawRectangle, CellPosition* cellPosition, int32_t xBorder, int32_t yBorder) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), rectangleP(RectangleFactory::SINGLETON){
this->touchButtonInput= touchButtonInput;
    
this->animationInterface= animationInterface;
    
this->hintAnimationInterface= hintAnimationInterface;
    
this->rawRectangle= rawRectangle;
    
this->cellPositionP= cellPosition;
    
this->xBorder= xBorder;
    
this->yBorder= yBorder;
    
this->updateRectangle();
    
this->logUtil->putF((new StringMaker())->append("Created: ")->append(this->toString())->toString(), this, this->commonStrings->CONSTRUCTOR);
    
}


    auto TouchButton::paintHint(Graphics* graphics) -> void{
this->hintAnimationInterface->paintXY(graphics, this->animationX, this->hintAnimationY);
    
}


    auto TouchButton::paint(Graphics* graphics) -> void{
this->animationInterface->paintXY(graphics, this->animationX, this->animationY);
    
}


    auto TouchButton::updateRectangle() -> void{

        try {
            
    PointFactory* pointFactory = PointFactory::getInstance();;
    

    int32_t x = this->rawRectangle->getWidth() *this->cellPositionP->getColumn();;
    

    int32_t y = this->rawRectangle->getHeight() *this->cellPositionP->getRow();;
    
this->rectangleP= new Rectangle(pointFactory->createXY(x +this->xBorder, y +this->yBorder), this->rawRectangle->getWidth(), this->rawRectangle->getHeight());
    

    GPoint* point = this->rectangleP->getPoint();;
    
this->animationX= point->getX();
    
this->animationY= point->getY();
    
this->hintAnimationY= this->animationY -32;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "updateRectangle", &e);
    
}

}


    auto TouchButton::getCellPosition() -> CellPosition*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cellPositionP;
    
}


    auto TouchButton::getRectangle() -> Rectangle*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rectangleP;
    
}


    auto TouchButton::getTouchButtonInput() -> TouchButtonInput*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->touchButtonInput;
    
}


    auto TouchButton::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    

    StringUtil* stringUtil = StringUtil::getInstance();;
    
stringBuffer->append("TouchButton: ");
    
stringBuffer->append(stringUtil->toString(this->getRectangle()));
    
stringBuffer->append(" CellPosition: ");
    
stringBuffer->append(stringUtil->toString(this->cellPositionP));
    
stringBuffer->append(" xBorder: ");
    
stringBuffer->appendint(this->xBorder);
    
stringBuffer->append(" yBorder: ");
    
stringBuffer->appendint(this->yBorder);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTON_CPP
