
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseTouchInput.h"
#include "CommonButtons.h"
#include "TouchButtonLocationHelper.h"
#include "BasicTouchButtonCellPositionFactory.h"
#include "TouchButton.h"
#include "BasicTouchInputFactory.h"
#include "TouchButtonUpResource.h"
#include "TouchButtonDownResource.h"
#include "TouchButtonTurnLeftResource.h"
#include "TouchButtonTurnRightResource.h"

class BasicTouchButtonsBuilder: public BaseTouchInput {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    public BasicArrayList getList(){

        try {
            this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.CONSTRUCTOR);
    

    list: BasicArrayList = new BasicArrayListD();;
    

    commonButtons: CommonButtons = CommonButtons.getInstance()!;;
    

    touchButtonLocationHelper: TouchButtonLocationHelper = new TouchButtonLocationHelper();;
    

    basicTouchButtonCellPositionFactory: BasicTouchButtonCellPositionFactory = new BasicTouchButtonCellPositionFactory();;
    

    UP: TouchButton = TouchButton.createButton(BasicTouchInputFactory.getInstance()!.UP, TouchButtonUpResource.getInstance(), commonButtons!.NORMAL_BUTTON, basicTouchButtonCellPositionFactory!.SECOND_FROM_BOTTOM_LEFT, touchButtonLocationHelper!.getColumnsRemainderHalf(), touchButtonLocationHelper!.getRowsRemainderHalf())!;;
    

    DOWN: TouchButton = TouchButton.createButton(BasicTouchInputFactory.getInstance()!.DOWN, TouchButtonDownResource.getInstance(), commonButtons!.NORMAL_BUTTON, basicTouchButtonCellPositionFactory!.BOTTOM_LEFT, touchButtonLocationHelper!.getColumnsRemainderHalf(), touchButtonLocationHelper!.getRowsRemainderHalf())!;;
    

    LEFT: TouchButton = TouchButton.createButton(BasicTouchInputFactory.getInstance()!.SPECIAL_BUTTON_FOUR, TouchButtonTurnLeftResource.getInstance(), commonButtons!.NORMAL_BUTTON, basicTouchButtonCellPositionFactory!.BOTTOM_SECOND_FROM_RIGHT, touchButtonLocationHelper!.getColumnsRemainderHalf(), touchButtonLocationHelper!.getRowsRemainderHalf())!;;
    

    RIGHT: TouchButton = TouchButton.createButton(BasicTouchInputFactory.getInstance()!.SPECIAL_BUTTON_THREE, TouchButtonTurnRightResource.getInstance(), commonButtons!.NORMAL_BUTTON, basicTouchButtonCellPositionFactory!.BOTTOM_RIGHT, touchButtonLocationHelper!.getColumnsRemainderHalf(), touchButtonLocationHelper!.getRowsRemainderHalf())!;;
    
list.add(UP);
    
list.add(LEFT);
    
list.add(RIGHT);
    
list.add(DOWN);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.GET_LIST, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicArrayListUtil.getInstance()!.getImmutableInstance();;
    
}

}


};

            

