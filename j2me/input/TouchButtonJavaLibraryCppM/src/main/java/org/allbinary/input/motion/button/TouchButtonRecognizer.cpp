
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRECOGNIZER_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRECOGNIZER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/button/TouchButtonRecognizer.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/event/DownGameKeyEventHandler.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/input/event/UpGameKeyEventHandler.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/math/RectangleCollisionUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/BasicTouchInputFactory.h"
#include "org/allbinary/input/motion/button/TouchButtonInput.h"
#include "org/allbinary/input/motion/button/CurrentlyPressedTouchButtonSingleton.h"
//#include "org/allbinary/input/motion/button/ReleaseHelper.h"
#include "org/allbinary/input/motion/button/CancelTouchButtonInputFactory.h"
#include "org/allbinary/input/motion/button/TouchScreenFactory.h"
//#include "org/allbinary/input/motion/button/MultitouchReleaseHelper.h"
#include "org/allbinary/input/motion/button/TouchButtonFactory.h"
#include "org/allbinary/input/motion/button/TouchButton.h"


TouchButtonRecognizer::ReleaseHelper::ReleaseHelper(TouchButtonRecognizer* touchButtonRecognizer){
this->touchButtonRecognizer= touchButtonRecognizer;
    
}


                //@Throws(Exception.constructor)
            
    auto TouchButtonRecognizer::ReleaseHelper::release(TouchButtonInput* touchButtonInput, int32_t deviceId) -> void{

    TouchButtonInput* nextTouchButtonInput;;
    

    GameKeyEvent* gameKeyEvent;;
    




                        for (
    int32_t index = this->touchButtonRecognizer->currentlyPressedTouchButtonSingleton->size() -1;index >= 0; index--)
        {
nextTouchButtonInput= this->touchButtonRecognizer->currentlyPressedTouchButtonSingleton->get(index);
    
gameKeyEvent= nextTouchButtonInput->getGameKeyEvent();
    
this->touchButtonRecognizer->upGameKeyEventHandler->fireEvent(gameKeyEvent);
    
this->touchButtonRecognizer->upGameKeyEventHandler->getInstanceForDevice(deviceId)->fireEvent(gameKeyEvent);
    
this->touchButtonRecognizer->currentlyPressedTouchButtonSingleton->removeAt(index);
    
}

}


TouchButtonRecognizer::MultitouchReleaseHelper::MultitouchReleaseHelper(TouchButtonRecognizer* touchButtonRecognizer) : ReleaseHelper(touchButtonRecognizer){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    auto TouchButtonRecognizer::MultitouchReleaseHelper::release(TouchButtonInput* touchButtonInput, int32_t deviceId) -> void{

    TouchButtonInput* cancelTouchButtonInput = CancelTouchButtonInputFactory::getInstance()->getCancel(touchButtonInput);;
    

    TouchButtonInput* nextTouchButtonInput;;
    

    GameKeyEvent* gameKeyEvent;;
    




                        for (
    int32_t index = this->touchButtonRecognizer->currentlyPressedTouchButtonSingleton->size() -1;index >= 0; index--)
        {
nextTouchButtonInput= this->touchButtonRecognizer->currentlyPressedTouchButtonSingleton->get(index);
    

                        if(cancelTouchButtonInput == nextTouchButtonInput)
                        
                                    {
                                    gameKeyEvent= nextTouchButtonInput->getGameKeyEvent();
    
this->touchButtonRecognizer->upGameKeyEventHandler->fireEvent(gameKeyEvent);
    
this->touchButtonRecognizer->upGameKeyEventHandler->getInstanceForDevice(deviceId)->fireEvent(gameKeyEvent);
    
this->touchButtonRecognizer->currentlyPressedTouchButtonSingleton->removeAt(index);
    

                                    }
                                
}

}


TouchButtonRecognizer::TouchButtonRecognizer() : logUtil(LogUtil::getInstance()), rectangleCollisionUtil(RectangleCollisionUtil::getInstance()), upGameKeyEventHandler(UpGameKeyEventHandler::getInstance()), downGameKeyEventHandler(DownGameKeyEventHandler::getInstance()), lastPressedTouchButtonInput(BasicTouchInputFactory::getInstance()->NONE), currentlyPressedTouchButtonSingleton(CurrentlyPressedTouchButtonSingleton::getInstance()){

                        if(TouchScreenFactory::getInstance()->isMultiTouch())
                        
                                    {
                                    this->releaseHelper= javaInner(new MultitouchReleaseHelper(this), this);
    

                                    }
                                
                        else {
                            this->releaseHelper= javaInner(new ReleaseHelper(this), this);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto TouchButtonRecognizer::processRelease(TouchButtonInput* touchButtonInput, int32_t deviceId) -> void{
this->releaseHelper->release(touchButtonInput, deviceId);
    

    GameKeyEvent* gameKeyEvent = touchButtonInput->getGameKeyEvent();;
    
this->upGameKeyEventHandler->fireEvent(gameKeyEvent);
    
this->upGameKeyEventHandler->getInstanceForDevice(deviceId)->fireEvent(gameKeyEvent);
    
this->currentlyPressedTouchButtonSingleton->remove(touchButtonInput);
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto TouchButtonRecognizer::releaseTouchButtonInput(int32_t x, int32_t y, int32_t deviceId) -> bool{

    TouchButtonInput* touchButtonInput = this->lastPressedTouchButtonInput;;
    

                        if(this->currentlyPressedTouchButtonSingleton->contains(touchButtonInput))
                        
                                    {
                                    this->lastPressedTouchButtonInput= BasicTouchInputFactory::getInstance()->NONE;
    
this->processRelease(touchButtonInput, deviceId);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            
    BasicArrayList* list = TouchButtonFactory::getInstance()->getList();;
    

    Rectangle* rectangle;;
    

    GPoint* point;;
    

    TouchButton* touchButton;;
    




                        for (
    int32_t index = list->size() -1;index >= 0; index--)
        {
touchButton= dynamic_cast<TouchButton*>(list->objectArray[index]);
    
rectangle= touchButton->getRectangle();
    
point= rectangle->getPoint();
    

                        if(this->rectangleCollisionUtil->isInside(point->getX(), point->getY(), rectangle->getMaxX(), rectangle->getMaxY(), x, y))
                        
                                    {
                                    touchButtonInput= touchButton->getTouchButtonInput();
    
this->processRelease(touchButtonInput, deviceId);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
}


                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto TouchButtonRecognizer::pressTouchButtonInput(int32_t x, int32_t y, int32_t deviceId) -> bool{

    BasicArrayList* list = TouchButtonFactory::getInstance()->getList();;
    

    Rectangle* rectangle;;
    

    GPoint* point;;
    

    TouchButton* touchButton;;
    

    TouchButtonInput* touchButtonInput;;
    

    GameKeyEvent* gameKeyEvent;;
    




                        for (
    int32_t index = list->size() -1;index >= 0; index--)
        {
touchButton= dynamic_cast<TouchButton*>(list->objectArray[index]);
    
rectangle= touchButton->getRectangle();
    
point= rectangle->getPoint();
    

                        if(this->rectangleCollisionUtil->isInside(point->getX(), point->getY(), rectangle->getMaxX(), rectangle->getMaxY(), x, y))
                        
                                    {
                                    touchButtonInput= touchButton->getTouchButtonInput();
    

                        if(!this->currentlyPressedTouchButtonSingleton->contains(touchButtonInput))
                        
                                    {
                                    this->releaseHelper->release(touchButtonInput, deviceId);
    
this->lastPressedTouchButtonInput= touchButtonInput;
    
this->currentlyPressedTouchButtonSingleton->add(touchButtonInput);
    
gameKeyEvent= touchButtonInput->getGameKeyEvent();
    
this->downGameKeyEventHandler->fireEvent(gameKeyEvent);
    
this->downGameKeyEventHandler->getInstanceForDevice(deviceId)->fireEvent(gameKeyEvent);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRECOGNIZER_CPP
