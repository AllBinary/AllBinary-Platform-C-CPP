
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2007 AllBinary 
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
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/BaseTouchInput.h"
#include "org/allbinary/input/motion/button/TouchButtonLocationHelper.h"
#include "org/allbinary/input/motion/button/CommonButtons.h"
#include "org/allbinary/input/motion/button/BasicTouchButtonCellPositionFactory.h"
#include "org/allbinary/input/motion/button/TouchButton.h"
#include "org/allbinary/input/motion/button/BasicTouchInputFactory.h"
#include "org/allbinary/input/motion/button/TouchButtonStrafeLeftResource.h"
#include "org/allbinary/input/motion/button/TouchButtonStrafeRightResource.h"

class BuildingScrollTouchButtonsBuilder: public BaseTouchInput {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    public: BasicArrayList* getList(){

        try {
            this->logUtil->putF(this->commonStrings.START, this, this->commonStrings.CONSTRUCTOR);
    

    BasicArrayList* list = new BasicArrayListD();;
    

    TouchButtonLocationHelper* touchButtonLocationHelper = new TouchButtonLocationHelper();;
    

    CommonButtons* commonButtons = CommonButtons::getInstance();;
    

    BasicTouchButtonCellPositionFactory* basicTouchButtonCellPositionFactory = new BasicTouchButtonCellPositionFactory();;
    

    TouchButton* LEFT = TouchButton::createButton(BasicTouchInputFactory::getInstance()->LEFT, TouchButtonStrafeLeftResource::getInstance(), commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->TOP_LEFT, touchButtonLocationHelper->getColumnsRemainderHalf(), touchButtonLocationHelper->getRowsRemainderHalf());;
    

    TouchButton* RIGHT = TouchButton::createButton(BasicTouchInputFactory::getInstance()->RIGHT, TouchButtonStrafeRightResource::getInstance(), commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->TOP_RIGHT, touchButtonLocationHelper->getColumnsRemainderHalf(), touchButtonLocationHelper->getRowsRemainderHalf());;
    
list->add(LEFT);
    
list->add(RIGHT);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings.EXCEPTION, this, this->commonStrings.CONSTRUCTOR, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicArrayListUtil::getInstance()->getImmutableInstance();;
    
}

}


};

            

