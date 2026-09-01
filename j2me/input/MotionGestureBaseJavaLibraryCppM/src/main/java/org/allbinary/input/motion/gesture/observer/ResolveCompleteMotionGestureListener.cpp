
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/input/CompleteMotionGestureInputEventHandler.h>

      
#include <org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h>

      
#include <org/allbinary/game/input/motion/action/GameKeyFromMotionGestureEventListener.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureToMotionGestureActionAssociation.h>

      
#include <org/allbinary/input/motion/gesture/configuration/MotionGestureConfiguration.h>

      
#include <org/allbinary/input/motion/gesture/configuration/MotionGestureConfigurationFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CompleteMotionGestureListenerInterface.h"

class ResolveCompleteMotionGestureListener
            : public Object
        : public CompleteMotionGestureListenerInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: ResolveCompleteMotionGestureListener(){

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.putF("MotionGesture to CompleteMotionGesture Reciever", this, commonStrings.CONSTRUCTOR);
    
CompleteMotionGestureInputEventHandler::getInstance().addListener(GameKeyFromMotionGestureEventListener());
    
}


                //@Throws(Exception.constructor)
            
    public: void onMotionGestureCompleted(BasicArrayList list){

    MotionGestureConfiguration configuration = MotionGestureConfigurationFactory::getInstance();;
    

    BasicArrayList commandActionsList = configuration.getAssociateCommandActionsList();;
    

    int32_t size = commandActionsList.size();;
    




                        for (
    int32_t index = size -1;index >= 0; index--)
        {

    MotionGestureToMotionGestureActionAssociation association = commandActionsList.objectArray[index]! as MotionGestureToMotionGestureActionAssociation;;
    

                        if(association.isMotionGestureArrayEquals(list) == true)
                        
                                    {
                                    
    GameKeyCompleteMotionGestureInputEvent completeMotionGestureInputEvent = association.getCommandAction() as GameKeyCompleteMotionGestureInputEvent;;
    
CompleteMotionGestureInputEventHandler::getInstance().fireEvent(completeMotionGestureInputEvent);
    
break;

                    

                                    }
                                
}

}


};

            

