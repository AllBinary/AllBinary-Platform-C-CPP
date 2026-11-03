
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICNEEDEDTOUCHBUTTONSBUILDER_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICNEEDEDTOUCHBUTTONSBUILDER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/button/BasicNeededTouchButtonsBuilder.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/BaseTouchInput.h"
#include "org/allbinary/input/motion/button/TouchButtonLocationHelper.h"
#include "org/allbinary/input/motion/button/BasicTouchButtonCellPositionFactory.h"
#include "org/allbinary/input/motion/button/CommonButtons.h"
#include "org/allbinary/input/motion/button/TouchButton.h"
#include "org/allbinary/input/motion/button/BasicTouchInputFactory.h"


BasicNeededTouchButtonsBuilder::BasicNeededTouchButtonsBuilder() : logUtil(LogUtil::getInstance()) {
        }
        
    auto BasicNeededTouchButtonsBuilder::getList() -> BasicArrayList*{

        try {
            this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    

    BasicArrayList* list = new BasicArrayListD();;
    

    TouchButtonLocationHelper* touchButtonLocationHelper = new TouchButtonLocationHelper();;
    

    BasicTouchButtonCellPositionFactory* basicTouchButtonCellPositionFactory = new BasicTouchButtonCellPositionFactory();;
    

    CommonButtons* commonButtons = CommonButtons::getInstance();;
    

    Animation* animationInterface = NullAnimationFactory::getFactoryInstance()->getInstance(0);;
    

    TouchButton* UP = new TouchButton(BasicTouchInputFactory::getInstance()->UP, animationInterface, animationInterface, commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->SECOND_FROM_BOTTOM_LEFT, touchButtonLocationHelper->getColumnsRemainderHalf(), touchButtonLocationHelper->getRowsRemainderHalf());;
    

    TouchButton* DOWN = new TouchButton(BasicTouchInputFactory::getInstance()->DOWN, animationInterface, animationInterface, commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->BOTTOM_LEFT, touchButtonLocationHelper->getColumnsRemainderHalf(), touchButtonLocationHelper->getRowsRemainderHalf());;
    

    TouchButton* LEFT = new TouchButton(BasicTouchInputFactory::getInstance()->LEFT, animationInterface, animationInterface, commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->BOTTOM_SECOND_FROM_RIGHT, touchButtonLocationHelper->getColumnsRemainderHalf(), touchButtonLocationHelper->getRowsRemainderHalf());;
    

    TouchButton* RIGHT = new TouchButton(BasicTouchInputFactory::getInstance()->RIGHT, animationInterface, animationInterface, commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->BOTTOM_RIGHT, touchButtonLocationHelper->getColumnsRemainderHalf(), touchButtonLocationHelper->getRowsRemainderHalf());;
    
list->add(UP);
    
list->add(DOWN);
    
list->add(LEFT);
    
list->add(RIGHT);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return list;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->GET_LIST, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BasicArrayListUtil::getInstance()->getImmutableInstance();;
    
}

}




        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICNEEDEDTOUCHBUTTONSBUILDER_CPP
