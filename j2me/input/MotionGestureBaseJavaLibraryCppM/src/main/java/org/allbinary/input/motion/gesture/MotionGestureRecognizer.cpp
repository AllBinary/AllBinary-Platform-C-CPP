
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_MOTIONGESTURERECOGNIZER_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_MOTIONGESTURERECOGNIZER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/gesture/MotionGestureRecognizer.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Math.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/Line.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/input/motion/gesture/configuration/MotionGestureConfiguration.h>

      
#include <org/allbinary/input/motion/gesture/configuration/MotionGestureConfigurationFactory.h>

      
#include <org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h>

      
#include <org/allbinary/input/motion/gesture/observer/MotionEventCircularPool.h>

      
#include <org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>

      
#include <org/allbinary/input/motion/gesture/observer/MovedMotionGesturesHandler.h>

      
#include <org/allbinary/input/motion/gesture/observer/ScrolledMotionGesturesHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/J2SEMath.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"


MotionGestureRecognizer::MotionGestureRecognizer(int32_t id) : logUtil(LogUtil::getInstance()), j2seMath(J2SEMath::getInstance()), origin(PointFactory::getInstance()->ZERO_ZERO), previous(this->origin), intermediate(this->origin), line(new Line(this->origin, this->origin)){
this->motionEventCircularPool= MotionEventCircularPool::createPool(id);
    

    BasicEventHandler* motionGesturesHandler = new BasicEventHandler();;
    

    BasicEventHandler* movedMotionGesturesHandler = motionGesturesHandler;;
    

    BasicEventHandler* scrolledMotionGesturesHandler = motionGesturesHandler;;
    

        try {
            motionGesturesHandler= BasicMotionGesturesHandler::getInstance();
    
movedMotionGesturesHandler= MovedMotionGesturesHandler::getInstance();
    
scrolledMotionGesturesHandler= ScrolledMotionGesturesHandler::getInstance();
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->CONSTRUCTOR, &e);
    
}

this->motionGesturesHandler= dynamic_cast<BasicMotionGesturesHandler*>(motionGesturesHandler);
    
this->movedMotionGesturesHandler= movedMotionGesturesHandler;
    
this->scrolledMotionGesturesHandler= scrolledMotionGesturesHandler;
    
}


                //@Throws(Exception.constructor)
            
    auto MotionGestureRecognizer::processPressedMotionEvent(GPoint* current, int32_t deviceId, int32_t button) -> bool{
this->intermediate= this->origin;
    
this->previous= this->origin;
    

    MotionGestureEvent* event = this->motionEventCircularPool->getInstance(TouchMotionGestureFactory::getInstance()->PRESSED);;
    
event->setPreviousPoint(this->previous);
    
event->setCurrentPoint(current);
    
this->motionGesturesHandler->fireEvent(event);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    auto MotionGestureRecognizer::processReleasedMotionEvent(GPoint* current, int32_t deviceId, int32_t button) -> bool{

    MotionGestureEvent* event = this->motionEventCircularPool->getInstance(TouchMotionGestureFactory::getInstance()->RELEASED);;
    
event->setPreviousPoint(this->previous);
    
event->setCurrentPoint(current);
    
this->motionGesturesHandler->fireEvent(event);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    auto MotionGestureRecognizer::processDraggedMotionEvent(GPoint* current, int32_t deviceId, int32_t buttonMask) -> void{

                        if(this->previous == this->origin || this->intermediate == this->origin)
                        
                                    {
                                    this->previous= current;
    
this->intermediate= current;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ;
    

                                    }
                                
this->line->setP1(this->previous);
    
this->line->setP2(current);
    

    int32_t minimumMotionGesture = MotionGestureConfigurationFactory::getInstance()->getMinimumMotionGesture();;
    

                        if(this->j2seMath->abs(this->line->getDeltaX()) < minimumMotionGesture && this->j2seMath->abs(this->line->getDeltaY()) < minimumMotionGesture)
                        
                                    {
                                    this->intermediate= current;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ;
    

                                    }
                                

    double gradient = this->line->getGradient();;
    

    double absGradient = this->j2seMath->abs(gradient);;
    

    MotionGestureConfiguration* conf = MotionGestureConfigurationFactory::getInstance();;
    

    TouchMotionGestureFactory* touchMotionGestureFactory = TouchMotionGestureFactory::getInstance();;
    

    MotionGestureInput* newMotionGesture = touchMotionGestureFactory->NO_MOTION;;
    

    double diagonalToleranceHigher = 12.0;;
    

    double diagonalToleranceLower = 12.0;;
    

                        if(conf->isDiagonalMotionGestureAllowed())
                        
                                    {
                                    diagonalToleranceHigher= (90 -conf->getDiagonalTolerance());
    
diagonalToleranceLower= conf->getDiagonalTolerance();
    

                                    }
                                

                        if(absGradient > Math::tan(Math::toRadians(diagonalToleranceHigher)))
                        
                                    {
                                    
                        if(this->line->getDeltaY() > 0)
                        
                                    {
                                    newMotionGesture= touchMotionGestureFactory->UP;
    

                                    }
                                
                        else {
                            newMotionGesture= touchMotionGestureFactory->DOWN;
    

                        }
                            

                                    }
                                
                        else {
                            
                        if(absGradient < Math::tan(Math::toRadians(diagonalToleranceLower)))
                        
                                    {
                                    
                        if(this->line->getDeltaX() > 0)
                        
                                    {
                                    newMotionGesture= touchMotionGestureFactory->LEFT;
    

                                    }
                                
                        else {
                            newMotionGesture= touchMotionGestureFactory->RIGHT;
    

                        }
                            

                                    }
                                
                        else {
                            
                        if(gradient > 0)
                        
                                    {
                                    
                        if(this->line->getDeltaX() > 0)
                        
                                    {
                                    newMotionGesture= touchMotionGestureFactory->DIAGONAL_UP_LEFT;
    

                                    }
                                
                        else {
                            newMotionGesture= touchMotionGestureFactory->DIAGONAL_DOWN_RIGHT;
    

                        }
                            

                                    }
                                
                        else {
                            
                        if(this->line->getDeltaX() > 0)
                        
                                    {
                                    newMotionGesture= touchMotionGestureFactory->DIAGONAL_DOWN_LEFT;
    

                                    }
                                
                        else {
                            newMotionGesture= touchMotionGestureFactory->DIAGONAL_UP_RIGHT;
    

                        }
                            

                        }
                            

                        }
                            

                        }
                            
this->previous= current;
    
this->intermediate= current;
    

    MotionGestureEvent* event = this->motionEventCircularPool->getInstance(newMotionGesture);;
    
event->setPreviousPoint(this->previous);
    
event->setCurrentPoint(current);
    
this->motionGesturesHandler->fireEvent(event);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ;
    
}


                //@Throws(Exception.constructor)
            
    auto MotionGestureRecognizer::processMovedMotionEvent(GPoint* current, int32_t deviceId, int32_t button) -> bool{

    MotionGestureEvent* event = this->motionEventCircularPool->getInstance(TouchMotionGestureFactory::getInstance()->NO_MOTION);;
    
event->setPreviousPoint(this->previous);
    
event->setCurrentPoint(current);
    
this->movedMotionGesturesHandler->fireEvent(event);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    auto MotionGestureRecognizer::processScrolledMotionEvent(GPoint* current, int32_t deviceId, int32_t button) -> bool{

    TouchMotionGestureFactory* touchMotionGestureFactory = TouchMotionGestureFactory::getInstance();;
    

    MotionGestureInput* newMotionGesture = touchMotionGestureFactory->NO_MOTION;;
    

                        if(button > 0)
                        
                                    {
                                    newMotionGesture= touchMotionGestureFactory->SCROLL_UP;
    

                                    }
                                
                             else 
                        if(button < 0)
                        
                                    {
                                    newMotionGesture= touchMotionGestureFactory->SCROLL_DOWN;
    

                                    }
                                

    MotionGestureEvent* event = this->motionEventCircularPool->getInstance(newMotionGesture);;
    
event->setPreviousPoint(this->previous);
    
event->setCurrentPoint(current);
    
this->scrolledMotionGesturesHandler->fireEvent(event);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}


    auto MotionGestureRecognizer::getMotionGesturesHandler() -> BasicMotionGesturesHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->motionGesturesHandler;
    
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_MOTIONGESTURERECOGNIZER_CPP
