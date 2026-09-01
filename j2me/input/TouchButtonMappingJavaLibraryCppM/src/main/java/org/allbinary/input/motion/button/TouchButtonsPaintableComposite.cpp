
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
        
#include <org/allbinary/game/input/CompleteMotionGestureInputEvent.h>

      
#include <org/allbinary/game/input/CompleteMotionGestureInputEventHandler.h>

      
#include <org/allbinary/game/input/CompleteMotionGestureInputEventListenerInterface.h>

      
#include <org/allbinary/game/input/GameKey.h>

      
#include <org/allbinary/game/input/mapping/InputMappingInterface.h>

      
#include <org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/paint/ProcessPaintable.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>

      
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchButtonsMappingPaintable.h"

class TouchButtonsPaintableComposite: public ProcessPaintable, public CompleteMotionGestureInputEventListenerInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: InputMappingInterface inputMappingInterface;

    protected: TouchButtonsMappingPaintable touchButtonsPaintable;

    private: TimeDelayHelper timeHelper = TimeDelayHelper(250);

    private: bool released = true;

public: TouchButtonsPaintableComposite(InputMappingInterface inputMappingInterface, BasicColor basicColor){
this->inputMappingInterface= inputMappingInterface;
    
CompleteMotionGestureInputEventHandler::getInstance().addListenerInterface(this);
    
this->touchButtonsPaintable= TouchButtonsMappingPaintable(basicColor);
    
}


    public: void onEvent(AllBinaryEventObject eventObject){
ForcedLogUtil::log(EventStrings::getInstance().PERFORMANCE_MESSAGE, this);
    
}


    private: const std::string METHOD_NAME = "onCompleteMotionGestureInputEvent";

    private: const std::string RELEASE = "Ignoring: MotionGestureInput Release";

    private: const std::string FAST_REPEAT = "Ignoring: MotionGestureInput Repeated To Quickly";

    private: const std::string IGNORE = "Ignoring: Until Released";

    public: void onCompleteMotionGestureInputEvent(CompleteMotionGestureInputEvent completeMotionGestureInputEvent){

        try {
            this->logUtil.putF(this->commonStrings.START, this, "onCompleteMotionGestureInputEvent");
    

    TouchMotionGestureFactory touchMotionGestureFactory = TouchMotionGestureFactory::getInstance();;
    

    GameKeyCompleteMotionGestureInputEvent gameKeyCompleteMotionGestureInputEvent = completeMotionGestureInputEvent as GameKeyCompleteMotionGestureInputEvent;;
    

    GameKey gameKey = gameKeyCompleteMotionGestureInputEvent.getGameKey();;
    

    MotionGestureInput motionGestureInput = completeMotionGestureInputEvent.getMotionGestureInput();;
    

                        if(motionGestureInput == touchMotionGestureFactory.RELEASED)
                        
                                    {
                                    this->logUtil.putF(this->RELEASE, this, this->METHOD_NAME);
    
this->released= true;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

                        if(motionGestureInput == TouchMotionGestureFactory::getInstance().NO_MOTION && !this->timeHelper.isTimeTNT())
                        
                                    {
                                    this->logUtil.putF(this->FAST_REPEAT, this, this->METHOD_NAME);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

                        if(!this->released)
                        
                                    {
                                    this->logUtil.putF(this->IGNORE, this, this->METHOD_NAME);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
this->released= false;
    
this->logUtil.putF(StringMaker().append("GameKey: ").append(StringUtil::getInstance().toString(gameKey)).append(" MotionGestureInput: ").append(StringUtil::getInstance().toString(motionGestureInput)).toString(), this, this->METHOD_NAME);
    
this->inputMappingInterface.processInputMapping(gameKey, motionGestureInput);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->METHOD_NAME, e);
    
}

}


    public: void process(){
CompleteMotionGestureInputEventHandler::getInstance().removeListener(this);
    
}


};

            

