
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

class TouchButton: public Paintable {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: TouchButtonInput* touchButtonInput;

    private: Animation* animationInterface;

    protected: Rectangle* rawRectangle;

    protected: int32_t xBorder;

    protected: int32_t yBorder;

    protected: Rectangle* rectangle = RectangleFactory::SINGLETON;

    protected: CellPosition* cellPosition;

    protected: int32_t animationX= 0;

    protected: int32_t animationY= 0;

public: TouchButton(TouchButtonInput* touchButtonInput, AnimationInterface* animationInterface, Rectangle* rawRectangle, CellPosition* cellPosition, int32_t xBorder, int32_t yBorder){
this->touchButtonInput= touchButtonInput;
    
this->animationInterface= dynamic_cast<Animation*>(animationInterface);
    
this->rawRectangle= rawRectangle;
    
this->cellPosition= cellPosition;
    
this->xBorder= xBorder;
    
this->yBorder= yBorder;
    
this->updateRectangle();
    
this->logUtil->putF((new StringMaker())->append("Created: ")->append(this->toString())->toString(), this, this->commonStrings->CONSTRUCTOR);
    
}


    public: void paint(Graphics* graphics){
this->animationInterface->paintXY(graphics, animationX, this->animationY);
    
}


    protected: void updateRectangle(){

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


    public: CellPosition* getCellPositionP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cellPosition;
    
}


    public: Rectangle* getRectangleP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rectangle;
    
}


    public: TouchButtonInput* getTouchButtonInput(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->touchButtonInput;
    
}


    public: std::string toString(){

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


};

            

