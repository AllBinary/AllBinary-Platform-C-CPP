
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_SCROLLER_PACEPATROLAI_CPP
        #define ORG_ALLBINARY_GAME_AG_AI_SCROLLER_PACEPATROLAI_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/ai/scroller/PacePatrolAI.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Math.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/direction/DirectionCompositeInterface.h>

      
#include <org/allbinary/direction/DirectionFactory.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/game/tracking/TrackingEvent.h>

      
#include <org/allbinary/game/tracking/TrackingEventHandler.h>

      
#include <org/allbinary/game/tracking/TrackingEventListenerInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/layer/LayerInterface.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/ag/ai/scroller/BasePatrolAI.h"


PacePatrolAI::PacePatrolAI(ABHashtable<Object*, Object*>* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) : BasePatrolAI(hashtable, ownerLayerInterface, gameInput){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
TrackingEventHandler::getInstance()->addListenerInterface(this);
    
this->trackingList= new BasicArrayListD();
    
}


                //@Throws(Exception.constructor)
            
    auto PacePatrolAI::processAI(AllBinaryLayerManager* allBinaryLayerManager) -> void{
this->update();
    

    Direction* direction = this->setFiringDirectionForTargetIfInRange();;
    

    DirectionFactory* directionFactory = DirectionFactory::getInstance();;
    

                        if(direction == directionFactory->LEFT)
                        
                                    {
                                    
                        if(this->lastKeyDirection != keyDirection || !this->isFollowLimitedByTerrain)
                        
                                    {
                                    BasePatrolAI::processKeyAI(Canvas::LEFT);
    

                                    }
                                
keyDirection= Canvas::LEFT;
    
this->lastKeyDirection= keyDirection;
    
xTotalDistance= 0;
    
BasePatrolAI::processKeyAI(Canvas::KEY_NUM1);
    

                                    }
                                
                             else 
                        if(direction == directionFactory->RIGHT)
                        
                                    {
                                    
                        if(this->lastKeyDirection != keyDirection || !this->isFollowLimitedByTerrain)
                        
                                    {
                                    BasePatrolAI::processKeyAI(Canvas::RIGHT);
    

                                    }
                                
keyDirection= Canvas::RIGHT;
    
this->lastKeyDirection= keyDirection;
    
xTotalDistance= 0;
    
BasePatrolAI::processKeyAI(Canvas::KEY_NUM1);
    

                                    }
                                
                        else {
                            BasePatrolAI::processKeyAI(this->keyDirection);
    

                        }
                            
}


    auto PacePatrolAI::setFiringDirectionForTargetIfInRange() -> Direction*{

    DirectionFactory* directionFactory = DirectionFactory::getInstance();;
    

    AllBinaryLayer* ownerLayerInterface = this->getOwnerLayerInterface();;
    

    Direction* direction = directionFactory->NOT_BORDERED_WITH;;
    

    TrackingEvent* lastTrackingEvent;;
    

    LayerInterface* lastTrackingLayerInterface;;
    

    DirectionCompositeInterface* directionCompositeInterface;;
    

    int32_t size = this->trackingList->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
lastTrackingEvent= dynamic_cast<TrackingEvent*>(this->trackingList->get(0));
    
lastTrackingLayerInterface= lastTrackingEvent->getLayerInterface();
    

    int32_t x = lastTrackingLayerInterface->getXP();;
    

    int32_t y = lastTrackingLayerInterface->getYP();;
    

    int32_t yDistance = ownerLayerInterface->getYP() -y -ownerLayerInterface->getHeight();;
    

    int32_t xDistance = ownerLayerInterface->getXP() -x -ownerLayerInterface->getWidth();;
    

    int32_t absXDistance = Math::abs(xDistance);;
    

    int32_t absYDistance = Math::abs(yDistance);;
    

                        if(absYDistance <= 100)
                        
                                    {
                                    
                        if(absXDistance < getFiringDistance() /2)
                        
                                    {
                                    directionCompositeInterface= dynamic_cast<DirectionCompositeInterface*>(this->getOwnerLayerInterface());
    

                        if(xDistance < 0 && directionCompositeInterface->getDirection() == directionFactory->RIGHT)
                        
                                    {
                                    direction= directionFactory->RIGHT;
    

                                    }
                                
                             else 
                        if(xDistance > 0 && directionCompositeInterface->getDirection() == directionFactory->LEFT)
                        
                                    {
                                    direction= directionFactory->LEFT;
    

                                    }
                                

                                    }
                                

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return direction;
    
}


    auto PacePatrolAI::disable() -> void{
}


    auto PacePatrolAI::onEvent(AllBinaryEventObject* eventObject) -> void{
ForcedLogUtil::log(EventStrings::getInstance()->PERFORMANCE_MESSAGE, this);
    
}


    auto PacePatrolAI::onMovement(TrackingEvent* trackingEvent) -> void{
this->trackingList->clear();
    
this->trackingList->add(trackingEvent);
    
}


    auto PacePatrolAI::getFiringDistance() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->firingDistance;
    
}


    auto PacePatrolAI::setFiringDistance(int32_t firingDistance) -> void{
this->firingDistance= firingDistance;
    
}




        #endif //ORG_ALLBINARY_GAME_AG_AI_SCROLLER_PACEPATROLAI_CPP
