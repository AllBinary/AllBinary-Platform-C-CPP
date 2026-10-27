
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2009 AllBinary
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <android/view/MotionEvent.h>

      
#include <org/allbinary/android/input/motion/BaseGameInputMotionEventProcessor.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/displayable/ScalableListener.h>

      
#include <org/allbinary/input/motion/AllMotionRecognizer.h>

      
#include <org/allbinary/input/motion/MotionRecognizer.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/android/input/motion/api5/GameInputMotionInfoAPI5.h"

class GameInputMotionEventProcessorAPI5: public BaseGameInputMotionEventProcessor {

    private: static inline Object* instance = NullUtil::getInstance()->NULL_OBJECT;

    public: static GameInputMotionEventProcessorAPI5* getInstance(){

                        if(GameInputMotionEventProcessorAPI5::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    GameInputMotionEventProcessorAPI5::instance= new GameInputMotionEventProcessorAPI5();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<GameInputMotionEventProcessorAPI5*>(GameInputMotionEventProcessorAPI5::instance);
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: DisplayInfoSingleton* displayInfo = DisplayInfoSingleton::getInstance();

    private: std::vector<MotionRecognizer*> motionRecognizerArray;

    private: int32_t TOTAL_MINUS_ONE;

private: GameInputMotionEventProcessorAPI5(){

    int32_t size = GameInputMotionInfoAPI5::getInstance()->MAX_POINTERS;;
    
this->motionRecognizerArray= std::vector<AllMotionRecognizer*>(size);
    
this->TOTAL_MINUS_ONE= size;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->motionRecognizerArray[index]= new AllMotionRecognizer();
    
}

}


    private: bool isValid(int32_t pointerId){

                        if(pointerId > this->TOTAL_MINUS_ONE)
                        
                                    {
                                    
    std::string message = "Log that the pointer Ids are not what would be expected or Android has more than what I set my stuff to support pointerId: ";;
    
ForcedLogUtil::log(message +pointerId, this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            
}


    public: void process(MotionEvent* motionEvent){

        try {
            
    int32_t action = motionEvent->getAction();;
    

    int32_t total = this->motionRecognizerArray.size();;
    

                        if(total > motionEvent->getPointerCount())
                        
                                    {
                                    total= motionEvent->getPointerCount();
    

                                    }
                                
                        else {
                            
    std::string message = "Log that Android has more pointers than I have expected so increase it motionEvent.getPointerCount(): ";;
    
ForcedLogUtil::log(message +motionEvent->getPointerCount(), this);
    

                        }
                            

    int32_t totalMinusOne = total -1;;
    

                        if(action == MotionEvent::ACTION_DOWN)
                        
                                    {
                                    



                        for (
    int32_t pointerIndex = totalMinusOne;pointerIndex >= 0; pointerIndex--)
        {

    int32_t pointerId = motionEvent->getPointerId(pointerIndex);;
    

                        if(this->isValid(pointerId))
                        
                                    {
                                    
    ScalableListener* scalableListener = this->displayInfo->getScalableListener();;
    

    int32_t x = static_cast<int32_t>(((motionEvent->getX(pointerIndex) -this->displayInfo->getLeft()) /scalableListener->getRatio(this->displayInfo->getRatio())));;
    

    int32_t y = static_cast<int32_t>(((motionEvent->getY(pointerIndex) -this->displayInfo->getTop()) /scalableListener->getRatio(this->displayInfo->getRatio())));;
    
this->motionRecognizerArray[pointerId].processStartMotionEvent(x, y, motionEvent->getDeviceId(), 0);
    

                                    }
                                
}


                                    }
                                
                             else 
                        if(action == MotionEvent::ACTION_UP || action == MotionEvent::ACTION_CANCEL)
                        
                                    {
                                    



                        for (
    int32_t pointerIndex = totalMinusOne;pointerIndex >= 0; pointerIndex--)
        {

    int32_t pointerId = motionEvent->getPointerId(pointerIndex);;
    

                        if(this->isValid(pointerId))
                        
                                    {
                                    
    ScalableListener* scalableListener = this->displayInfo->getScalableListener();;
    

    int32_t x = static_cast<int32_t>(((motionEvent->getX(pointerIndex) -this->displayInfo->getLeft()) /scalableListener->getRatio(this->displayInfo->getRatio())));;
    

    int32_t y = static_cast<int32_t>(((motionEvent->getY(pointerIndex) -this->displayInfo->getTop()) /scalableListener->getRatio(this->displayInfo->getRatio())));;
    
this->motionRecognizerArray[pointerId].processEndMotionEvent(x, y, motionEvent->getDeviceId(), 0);
    

                                    }
                                
}


                                    }
                                
                             else 
                        if(action == MotionEvent::ACTION_MOVE)
                        
                                    {
                                    



                        for (
    int32_t pointerIndex = totalMinusOne;pointerIndex >= 0; pointerIndex--)
        {

    int32_t pointerId = motionEvent->getPointerId(pointerIndex);;
    

                        if(this->isValid(pointerId))
                        
                                    {
                                    
    ScalableListener* scalableListener = this->displayInfo->getScalableListener();;
    

    int32_t x = static_cast<int32_t>(((motionEvent->getX(pointerIndex) -this->displayInfo->getLeft()) /scalableListener->getRatio(this->displayInfo->getRatio())));;
    

    int32_t y = static_cast<int32_t>(((motionEvent->getY(pointerIndex) -this->displayInfo->getTop()) /scalableListener->getRatio(this->displayInfo->getRatio())));;
    
this->motionRecognizerArray[pointerId].processDraggedMotionEvent(x, y, motionEvent->getDeviceId(), 0);
    

                                    }
                                
}


                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings.EXCEPTION, this, this->commonStrings.PROCESS, &e);
    
}

}


};

            

