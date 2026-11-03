
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHBUTTONSBUILDER_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHBUTTONSBUILDER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/button/BasicTouchButtonsBuilder.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/BaseTouchInput.h"
#include "org/allbinary/input/motion/button/CommonButtons.h"
#include "org/allbinary/input/motion/button/TouchButtonLocationHelper.h"
#include "org/allbinary/input/motion/button/BasicTouchButtonCellPositionFactory.h"
#include "org/allbinary/input/motion/button/TouchButton.h"
#include "org/allbinary/input/motion/button/BasicTouchInputFactory.h"
#include "org/allbinary/input/motion/button/TouchButtonUpResource.h"
#include "org/allbinary/input/motion/button/TouchButtonDownResource.h"
#include "org/allbinary/input/motion/button/TouchButtonTurnLeftResource.h"
#include "org/allbinary/input/motion/button/TouchButtonTurnRightResource.h"


BasicTouchButtonsBuilder::BasicTouchButtonsBuilder() : logUtil(LogUtil::getInstance()) {
        }
        
    auto BasicTouchButtonsBuilder::getList() -> BasicArrayList*{

        try {
            this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    

    BasicArrayList* list = new BasicArrayListD();;
    

    CommonButtons* commonButtons = CommonButtons::getInstance();;
    

    TouchButtonLocationHelper* touchButtonLocationHelper = new TouchButtonLocationHelper();;
    

    BasicTouchButtonCellPositionFactory* basicTouchButtonCellPositionFactory = new BasicTouchButtonCellPositionFactory();;
    

    TouchButton* UP = TouchButton::createButton(BasicTouchInputFactory::getInstance()->UP, TouchButtonUpResource::getInstance(), commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->SECOND_FROM_BOTTOM_LEFT, touchButtonLocationHelper->getColumnsRemainderHalf(), touchButtonLocationHelper->getRowsRemainderHalf());;
    

    TouchButton* DOWN = TouchButton::createButton(BasicTouchInputFactory::getInstance()->DOWN, TouchButtonDownResource::getInstance(), commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->BOTTOM_LEFT, touchButtonLocationHelper->getColumnsRemainderHalf(), touchButtonLocationHelper->getRowsRemainderHalf());;
    

    TouchButton* LEFT = TouchButton::createButton(BasicTouchInputFactory::getInstance()->SPECIAL_BUTTON_FOUR, TouchButtonTurnLeftResource::getInstance(), commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->BOTTOM_SECOND_FROM_RIGHT, touchButtonLocationHelper->getColumnsRemainderHalf(), touchButtonLocationHelper->getRowsRemainderHalf());;
    

    TouchButton* RIGHT = TouchButton::createButton(BasicTouchInputFactory::getInstance()->SPECIAL_BUTTON_THREE, TouchButtonTurnRightResource::getInstance(), commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->BOTTOM_RIGHT, touchButtonLocationHelper->getColumnsRemainderHalf(), touchButtonLocationHelper->getRowsRemainderHalf());;
    
list->add(UP);
    
list->add(LEFT);
    
list->add(RIGHT);
    
list->add(DOWN);
    



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




        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHBUTTONSBUILDER_CPP
