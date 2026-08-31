
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
        



            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
#include <java/util/Hashtable.h>

      
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/ai/BasicAI.h>

      
#include <org/allbinary/game/identification/BasicGroupFactory.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/game/layer/identification/GroupLayerManagerListener.h>

      
#include <org/allbinary/game/layer/weapon/WeaponLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/math/MathUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasePatrolAI.h"

class FlockingAI: public BasicAI {
        

    private: const allowedDistance: int32_t;

public constructor (Hashtable<any, any> hashtable, AllBinaryLayer ownerLayerInterface, GameInput gameInput){
            super(ownerLayerInterface, gameInput);
                    

                            //For kotlin this is before the body of the constructor.
                    

    allowedDistance: Integer = hashtable.get(BasePatrolAI.MAX_DISTANCE) as Integer;;
    
this.allowedDistance= allowedDistance!.intValue();
    
}


                //@Throws(Exception.constructor)
            
    public processAI(AllBinaryLayerManager allBinaryLayerManager){

    maxDistance: int32_t = 0;;
    

    farAllbinaryLayer: AllBinaryLayer = AllBinaryLayer.NULL_ALLBINARY_LAYER;;
    

    groupLayerManagerListener: GroupLayerManagerListener = GroupLayerManagerListener.getInstance()!;;
    

    list: BasicArrayList = groupLayerManagerListener!.getList(BasicGroupFactory.getInstance()!.ENEMY)!;;
    

    size: int32_t = list.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    allBinaryLayer: AllBinaryLayer = list.get(index) as AllBinaryLayer;;
    

                        if(allBinaryLayer!.getType() != WeaponLayer.getStaticType())
                        
                                    {
                                    
    distance: int32_t = this.getXYDistance(allBinaryLayer)!;;
    

                        if(distance > maxDistance)
                        
                                    {
                                    maxDistance= distance;
    
farAllbinaryLayer= allBinaryLayer;
    

                        if(distance > this.allowedDistance)
                        
                                    {
                                    break;

                    

                                    }
                                

                                    }
                                

                                    }
                                
}


                        if(maxDistance > this.allowedDistance)
                        
                                    {
                                    
                        if(farAllbinaryLayer != AllBinaryLayer.NULL_ALLBINARY_LAYER)
                        
                                    {
                                    
    ownerLayerInterface: AllBinaryLayer = this.getOwnerLayerInterface()!;;
    

                        if(farAllbinaryLayer!.getXP() < ownerLayerInterface!.getXP())
                        
                                    {
                                    this.processKeyAI(Canvas.LEFT);
    

                                    }
                                
                             else 
                        if(farAllbinaryLayer!.getXP() > ownerLayerInterface!.getXP())
                        
                                    {
                                    this.processKeyAI(Canvas.RIGHT);
    

                                    }
                                
                             else 
                        if(farAllbinaryLayer!.getYP() > ownerLayerInterface!.getYP())
                        
                                    {
                                    this.processKeyAI(Canvas.UP);
    

                                    }
                                
                             else 
                        if(farAllbinaryLayer!.getYP() < ownerLayerInterface!.getYP())
                        
                                    {
                                    this.processKeyAI(Canvas.DOWN);
    

                                    }
                                

                                    }
                                

                                    }
                                
}


    int32_t getXYDistance(AllBinaryLayer allBinaryLayer){

    ownerLayerInterface: AllBinaryLayer = this.getOwnerLayerInterface()!;;
    

    xTotalDistance: int32_t = (allBinaryLayer!.getXP() +allBinaryLayer!.getHalfWidth()) -(ownerLayerInterface!.getXP() +ownerLayerInterface!.getHalfWidth());;
    

    yTotalDistance: int32_t = (allBinaryLayer!.getYP() +allBinaryLayer!.getHalfHeight()) -(ownerLayerInterface!.getYP() +ownerLayerInterface!.getHalfHeight());;
    

    mathUtil: MathUtil = MathUtil.getInstance()!;;
    

    totalDistance: int32_t = mathUtil!.abs(xTotalDistance) +mathUtil!.abs(yTotalDistance);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return totalDistance;
    
}


};

            

