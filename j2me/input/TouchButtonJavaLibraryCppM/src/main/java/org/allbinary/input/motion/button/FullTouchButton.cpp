
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_FULLTOUCHBUTTON_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_FULLTOUCHBUTTON_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/button/FullTouchButton.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>

      
#include <org/allbinary/graphics/CellPosition.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/TouchButton.h"
#include "org/allbinary/input/motion/button/TouchButtonInput.h"
#include "org/allbinary/input/motion/button/TouchButtonResource.h"


                //@Throws(Exception.constructor)
            
    auto FullTouchButton::createButton(TouchButtonInput* touchButtonInput, TouchButtonResource* touchButtonResource, Rectangle* rawRectangle, CellPosition* cellPosition, int32_t xBorder, int32_t yBorder) -> FullTouchButton*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new FullTouchButton(touchButtonInput, FeaturedAnimationInterfaceFactoryInterfaceFactory::getInstance()->get(touchButtonResource->RESOURCE)->getInstance(0), FeaturedAnimationInterfaceFactoryInterfaceFactory::getInstance()->get(touchButtonResource->HINT)->getInstance(0), rawRectangle, cellPosition, xBorder, yBorder);
    
}


FullTouchButton::FullTouchButton(TouchButtonInput* touchButtonInput, Animation* animationInterface, Animation* hintAnimationInterface, Rectangle* rawRectangle, CellPosition* cellPosition, int32_t xBorder, int32_t yBorder) : TouchButton(touchButtonInput, animationInterface, hintAnimationInterface, rawRectangle, cellPosition, xBorder, yBorder){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto FullTouchButton::updateRectangle() -> void{

        try {
            
    PointFactory* pointFactory = PointFactory::getInstance();;
    

    int32_t x = this->rawRectangle->getWidth() *this->cellPositionP->getColumn();;
    

    int32_t y = this->rawRectangle->getHeight() *this->cellPositionP->getRow();;
    
this->rectangleP= new Rectangle(pointFactory->createXY(x, y), this->rawRectangle->getWidth() +(2 *this->xBorder), this->rawRectangle->getHeight() +(2 *this->yBorder));
    

    GPoint* point = this->rectangleP->getPoint();;
    
this->animationX= point->getX() +this->xBorder;
    
this->animationY= point->getY() +this->yBorder;
    
this->hintAnimationY= this->animationY -this->rectangleP->getHeight()>>1;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "updateRectangle", &e);
    
}

}




        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_FULLTOUCHBUTTON_CPP
