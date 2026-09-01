
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/input/resource/TouchButtonDowngradeResource.h>

      
#include <org/allbinary/game/input/resource/TouchButtonUpgradeResource.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/graphics/CellPositionFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseTouchInput.h"
#include "TouchButtonLocationHelper.h"
#include "BasicTouchButtonCellPositionFactory.h"
#include "CommonButtons.h"
#include "TouchButton.h"
#include "BasicTouchInputFactory.h"

class UpgradeDowngradeTouchButtonsBuilder: public BaseTouchInput {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: BasicArrayList getList(){

        try {
            this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.CONSTRUCTOR);
    

    BasicArrayList list = BasicArrayListD();;
    

    TouchButtonLocationHelper touchButtonLocationHelper = TouchButtonLocationHelper();;
    

    CellPositionFactory cellPositionFactory = CellPositionFactory::getInstance();;
    

    BasicTouchButtonCellPositionFactory basicTouchButtonCellPositionFactory = BasicTouchButtonCellPositionFactory();;
    

                        if(basicTouchButtonCellPositionFactory.SECOND_FROM_TOP_LEFT != cellPositionFactory.NONE && basicTouchButtonCellPositionFactory.SECOND_FROM_TOP_RIGHT != cellPositionFactory.NONE)
                        
                                    {
                                    
    CommonButtons commonButtons = CommonButtons::getInstance();;
    

    TouchButton UP = TouchButton::createButton(BasicTouchInputFactory::getInstance().SPECIAL_BUTTON_TWO, TouchButtonUpgradeResource::getInstance(), commonButtons.NORMAL_BUTTON, basicTouchButtonCellPositionFactory.SECOND_FROM_TOP_LEFT, touchButtonLocationHelper.getColumnsRemainderHalf(), touchButtonLocationHelper.getRowsRemainderHalf());;
    

    TouchButton DOWN = TouchButton::createButton(BasicTouchInputFactory::getInstance().SPECIAL_BUTTON_ONE, TouchButtonDowngradeResource::getInstance(), commonButtons.NORMAL_BUTTON, basicTouchButtonCellPositionFactory.SECOND_FROM_TOP_RIGHT, touchButtonLocationHelper.getColumnsRemainderHalf(), touchButtonLocationHelper.getRowsRemainderHalf());;
    
list.add(UP);
    
list.add(DOWN);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.CONSTRUCTOR, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicArrayListUtil::getInstance().getImmutableInstance();;
    
}

}


};

            

