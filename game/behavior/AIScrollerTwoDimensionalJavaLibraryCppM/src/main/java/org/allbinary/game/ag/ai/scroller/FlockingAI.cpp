
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
        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/ai/BasicAI.h>

      
#include <org/allbinary/game/identification/BasicGroupFactory.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/game/layer/identification/GroupLayerManagerListener.h>

      
#include <org/allbinary/game/layer/weapon/WeaponLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/math/MathUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasePatrolAI.h"

class FlockingAI: public BasicAI {

    private: int32_t allowedDistance;

public: FlockingAI(ABHashtable<Object*, Object*> hashtable, AllBinaryLayer ownerLayerInterface, GameInput gameInput) : BasicAI(ownerLayerInterface, gameInput){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    Integer allowedDistance = hashtable.get(BasePatrolAI::MAX_DISTANCE);;
    
this->allowedDistance= allowedDistance.intValue();
    
}


                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager allBinaryLayerManager){

    int32_t maxDistance = 0;;
    

    AllBinaryLayer farAllbinaryLayer = AllBinaryLayer::NULL_ALLBINARY_LAYER;;
    

    GroupLayerManagerListener groupLayerManagerListener = GroupLayerManagerListener::getInstance();;
    

    BasicArrayList list = groupLayerManagerListener.getList(BasicGroupFactory::getInstance().ENEMY);;
    

    int32_t size = list.size();;
    

    AllBinaryLayer allBinaryLayer;;
    

    AllBinaryLayer ownerLayerInterface;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
allBinaryLayer= list.get(index);
    

                        if(allBinaryLayer.getType() != WeaponLayer::getStaticType())
                        
                                    {
                                    
    int32_t distance = this->getXYDistance(allBinaryLayer);;
    

                        if(distance > maxDistance)
                        
                                    {
                                    maxDistance= distance;
    
farAllbinaryLayer= allBinaryLayer;
    

                        if(distance > this->allowedDistance)
                        
                                    {
                                    break;

                    

                                    }
                                

                                    }
                                

                                    }
                                
}


                        if(maxDistance > this->allowedDistance)
                        
                                    {
                                    
                        if(farAllbinaryLayer != AllBinaryLayer::NULL_ALLBINARY_LAYER)
                        
                                    {
                                    ownerLayerInterface= this->getOwnerLayerInterface();
    

                        if(farAllbinaryLayer.getXP() < ownerLayerInterface.getXP())
                        
                                    {
                                    this->processKeyAI(Canvas::LEFT);
    

                                    }
                                
                             else 
                        if(farAllbinaryLayer.getXP() > ownerLayerInterface.getXP())
                        
                                    {
                                    this->processKeyAI(Canvas::RIGHT);
    

                                    }
                                
                             else 
                        if(farAllbinaryLayer.getYP() > ownerLayerInterface.getYP())
                        
                                    {
                                    this->processKeyAI(Canvas::UP);
    

                                    }
                                
                             else 
                        if(farAllbinaryLayer.getYP() < ownerLayerInterface.getYP())
                        
                                    {
                                    this->processKeyAI(Canvas::DOWN);
    

                                    }
                                

                                    }
                                

                                    }
                                
}


    private: int32_t getXYDistance(AllBinaryLayer allBinaryLayer){

    AllBinaryLayer ownerLayerInterface = this->getOwnerLayerInterface();;
    

    int32_t xTotalDistance = (allBinaryLayer.getXP() +allBinaryLayer.getHalfWidth()) -(ownerLayerInterface.getXP() +ownerLayerInterface.getHalfWidth());;
    

    int32_t yTotalDistance = (allBinaryLayer.getYP() +allBinaryLayer.getHalfHeight()) -(ownerLayerInterface.getYP() +ownerLayerInterface.getHalfHeight());;
    

    MathUtil mathUtil = MathUtil::getInstance();;
    

    int32_t totalDistance = mathUtil.abs(xTotalDistance) +mathUtil.abs(yTotalDistance);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return totalDistance;
    
}


};

            

