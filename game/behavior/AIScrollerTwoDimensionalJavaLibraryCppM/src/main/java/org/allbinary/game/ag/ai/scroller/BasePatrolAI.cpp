
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/ai/BasicAI.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/game/physics/velocity/BasicVelocityProperties.h>

      
#include <org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/math/MathUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasePatrolAI: public BasicAI {

    public: static inline int32_t MAX_DISTANCE = SmallIntegerSingletonFactory::getInstance()->getAt(2);

    public: static inline int32_t DIRECTION_ARRAY = SmallIntegerSingletonFactory::getInstance()->getAt(3);

    public: static inline int32_t FIRING_DISTANCE = SmallIntegerSingletonFactory::getInstance()->getAt(4);

    public: static inline int32_t SPEED = SmallIntegerSingletonFactory::getInstance()->getAt(5);

    protected: int32_t maxDistance;

    protected: int32_t currentDistance;

    protected: int32_t xTotalDistance= 0;

    protected: int32_t lastKeyDirection = Canvas::RIGHT;

    protected: int32_t keyDirection = Canvas::RIGHT;

public: BasePatrolAI(ABHashtable<Object*, Object*>* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) : BasicAI(ownerLayerInterface, gameInput){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->maxDistance= hashtable->get(BasePatrolAI::MAX_DISTANCE);
    
this->currentDistance= this->maxDistance.intValue();
    
}


    protected: void update(){
this->updateTotalDistance();
    
this->changeDirectionIfReachedPacingAreaMax();
    
}


    private: void updateTotalDistance(){

    VelocityInterfaceCompositeInterface* velocityInterfaceCompositeInterface = dynamic_cast<VelocityInterfaceCompositeInterface*>(this->getOwnerLayerInterface());;
    

    BasicVelocityProperties* velocityProperties = velocityInterfaceCompositeInterface->getVelocityProperties();;
    
this->xTotalDistance += velocityProperties->getVelocityXBasicDecimalP()->getScaled();
    
}


    private: void changeDirectionIfReachedPacingAreaMax(){

    MathUtil* mathUtil = MathUtil::getInstance();;
    

    int32_t totalDistance = mathUtil->abs(this->xTotalDistance);;
    

                        if(totalDistance > this->currentDistance)
                        
                                    {
                                    this->nextDirection();
    

                                    }
                                
}


    protected: void nextDirection(){

                        if(this->lastKeyDirection == Canvas::LEFT)
                        
                                    {
                                    this->keyDirection= Canvas::RIGHT;
    
this->lastKeyDirection= this->keyDirection;
    
this->xTotalDistance= 0;
    

                                    }
                                
                             else 
                        if(this->lastKeyDirection == Canvas::RIGHT)
                        
                                    {
                                    this->keyDirection= Canvas::LEFT;
    
this->lastKeyDirection= this->keyDirection;
    
this->xTotalDistance= 0;
    

                                    }
                                
}


    public: void disable(){
}


};

            

