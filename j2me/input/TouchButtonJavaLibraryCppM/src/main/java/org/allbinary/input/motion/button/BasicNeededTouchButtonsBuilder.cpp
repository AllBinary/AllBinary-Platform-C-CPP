
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
        



            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseTouchInput.h"
#include "TouchButtonLocationHelper.h"
#include "BasicTouchButtonCellPositionFactory.h"
#include "CommonButtons.h"
#include "TouchButton.h"
#include "BasicTouchInputFactory.h"

class BasicNeededTouchButtonsBuilder: public BaseTouchInput {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: BasicArrayList getList(){

        try {
            this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.CONSTRUCTOR);
    

    BasicArrayList list = BasicArrayListD();;
    

    TouchButtonLocationHelper touchButtonLocationHelper = TouchButtonLocationHelper();;
    

    BasicTouchButtonCellPositionFactory basicTouchButtonCellPositionFactory = BasicTouchButtonCellPositionFactory();;
    

    CommonButtons commonButtons = CommonButtons::getInstance();;
    

    Animation animationInterface = NullAnimationFactory::getFactoryInstance().getInstance(0);;
    

    TouchButton UP = TouchButton(BasicTouchInputFactory::getInstance().UP, animationInterface, animationInterface, commonButtons.NORMAL_BUTTON, basicTouchButtonCellPositionFactory.SECOND_FROM_BOTTOM_LEFT, touchButtonLocationHelper.getColumnsRemainderHalf(), touchButtonLocationHelper.getRowsRemainderHalf());;
    

    TouchButton DOWN = TouchButton(BasicTouchInputFactory::getInstance().DOWN, animationInterface, animationInterface, commonButtons.NORMAL_BUTTON, basicTouchButtonCellPositionFactory.BOTTOM_LEFT, touchButtonLocationHelper.getColumnsRemainderHalf(), touchButtonLocationHelper.getRowsRemainderHalf());;
    

    TouchButton LEFT = TouchButton(BasicTouchInputFactory::getInstance().LEFT, animationInterface, animationInterface, commonButtons.NORMAL_BUTTON, basicTouchButtonCellPositionFactory.BOTTOM_SECOND_FROM_RIGHT, touchButtonLocationHelper.getColumnsRemainderHalf(), touchButtonLocationHelper.getRowsRemainderHalf());;
    

    TouchButton RIGHT = TouchButton(BasicTouchInputFactory::getInstance().RIGHT, animationInterface, animationInterface, commonButtons.NORMAL_BUTTON, basicTouchButtonCellPositionFactory.BOTTOM_RIGHT, touchButtonLocationHelper.getColumnsRemainderHalf(), touchButtonLocationHelper.getRowsRemainderHalf());;
    
list.add(UP);
    
list.add(DOWN);
    
list.add(LEFT);
    
list.add(RIGHT);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.GET_LIST, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicArrayListUtil::getInstance().getImmutableInstance();;
    
}

}


};

            

