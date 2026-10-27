
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

      
#include <org/allbinary/animation/AnimationInterface.h>

      
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


TouchButton::TouchButton(TouchButtonInput* touchButtonInput, AnimationInterface* animationInterface, Rectangle* rawRectangle, CellPosition* cellPosition, int32_t xBorder, int32_t yBorder) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), rectangle(RectangleFactory::SINGLETON){
this->touchButtonInput= touchButtonInput;
    
this->animationInterface= dynamic_cast<Animation*>(animationInterface);
    
this->rawRectangle= rawRectangle;
    
this->cellPosition= cellPosition;
    
this->xBorder= xBorder;
    
this->yBorder= yBorder;
    
this->updateRectangle();
    
this->logUtil->putF((new StringMaker())->append("Created: ")->append(this->toString())->toString(), this, this->commonStrings->CONSTRUCTOR);
    
}


    auto TouchButton::paint(Graphics* graphics) -> void{
this->animationInterface->paintXY(graphics, animationX, this->animationY);
    
}


    auto TouchButton::updateRectangle() -> void{

        try {
            
    int32_t x = this->rawRectangle->getWidth() *this->cellPosition->getColumn();;
    

    int32_t y = this->rawRectangle->getHeight() *this->cellPosition->getRow();;
    

    PointFactory* pointFactory = PointFactory::getInstance();;
    
this->rectangle= new Rectangle(pointFactory->createXY(x +this->xBorder, y +this->yBorder), this->rawRectangle->getWidth(), this->rawRectangle->getHeight());
    

    GPoint* point = this->rectangle->getPoint();;
    
this->animationX= point->getX();
    
this->animationY= point->getY();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "updateRectangle", &e);
    
}

}


    auto TouchButton::getCellPositionP() -> CellPosition*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cellPosition;
    
}


    auto TouchButton::getRectangleP() -> Rectangle*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rectangle;
    
}


    auto TouchButton::getTouchButtonInput() -> TouchButtonInput*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->touchButtonInput;
    
}


    auto TouchButton::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    

    StringUtil* stringUtil = StringUtil::getInstance();;
    
stringBuffer->append("TouchButton: ");
    
stringBuffer->append(stringUtil->toString(this->rectangle));
    
stringBuffer->append(" CellPosition: ");
    
stringBuffer->append(stringUtil->toString(this->cellPosition));
    
stringBuffer->append(" xBorder: ");
    
stringBuffer->appendint(this->xBorder);
    
stringBuffer->append(" yBorder: ");
    
stringBuffer->appendint(this->yBorder);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTON_CPP
