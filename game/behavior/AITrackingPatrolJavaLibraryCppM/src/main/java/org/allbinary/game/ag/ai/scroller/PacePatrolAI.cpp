
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
        
            #include "../../../../../../java/lang/Math.h"
        
#include <java/util/Hashtable.h>

      
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

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasePatrolAI.h"

class PacePatrolAI: public BasePatrolAI: public TrackingEventListenerInterface {
        

    private: trackingList: BasicArrayList;

    private: firingDistance: int32_t= 0;

    isFollowLimitedByTerrain: bool = false;

public constructor (Hashtable<any, any> hashtable, AllBinaryLayer ownerLayerInterface, GameInput gameInput){
            super(hashtable, ownerLayerInterface, gameInput);
                    

                            //For kotlin this is before the body of the constructor.
                    
TrackingEventHandler.getInstance()!.addListenerInterface(this);
    
this.trackingList= new BasicArrayListD();
    
}


                //@Throws(Exception.constructor)
            
    public processAI(AllBinaryLayerManager allBinaryLayerManager){
this.update();
    

    direction: Direction = this.setFiringDirectionForTargetIfInRange()!;;
    

    directionFactory: DirectionFactory = DirectionFactory.getInstance()!;;
    

                        if(direction == directionFactory!.LEFT)
                        
                                    {
                                    
                        if(this.lastKeyDirection != keyDirection || !this.isFollowLimitedByTerrain)
                        
                                    {
                                    super.processKeyAI(Canvas.LEFT);
    

                                    }
                                
keyDirection= Canvas.LEFT;
    
this.lastKeyDirection= keyDirection;
    
xTotalDistance= 0;
    
super.processKeyAI(Canvas.KEY_NUM1);
    

                                    }
                                
                             else 
                        if(direction == directionFactory!.RIGHT)
                        
                                    {
                                    
                        if(this.lastKeyDirection != keyDirection || !this.isFollowLimitedByTerrain)
                        
                                    {
                                    super.processKeyAI(Canvas.RIGHT);
    

                                    }
                                
keyDirection= Canvas.RIGHT;
    
this.lastKeyDirection= keyDirection;
    
xTotalDistance= 0;
    
super.processKeyAI(Canvas.KEY_NUM1);
    

                                    }
                                
                        else {
                            super.processKeyAI(this.keyDirection);
    

                        }
                            
}


    Direction setFiringDirectionForTargetIfInRange(){

    directionFactory: DirectionFactory = DirectionFactory.getInstance()!;;
    

    ownerLayerInterface: AllBinaryLayer = this.getOwnerLayerInterface()!;;
    

    direction: Direction = directionFactory!.NOT_BORDERED_WITH;;
    

    lastTrackingEvent: TrackingEvent;;
    

    lastTrackingLayerInterface: LayerInterface;;
    

    directionCompositeInterface: DirectionCompositeInterface;;
    

    size: int32_t = this.trackingList!.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
lastTrackingEvent= this.trackingList!.get(0) as TrackingEvent;
    
lastTrackingLayerInterface= lastTrackingEvent!.getLayerInterface();
    

    x: int32_t = lastTrackingLayerInterface!.getXP()!;;
    

    y: int32_t = lastTrackingLayerInterface!.getYP()!;;
    

    yDistance: int32_t = ownerLayerInterface!.getYP() -y -ownerLayerInterface!.getHeight();;
    

    xDistance: int32_t = ownerLayerInterface!.getXP() -x -ownerLayerInterface!.getWidth();;
    

    absXDistance: int32_t = Math.abs(xDistance)!;;
    

    absYDistance: int32_t = Math.abs(yDistance)!;;
    

                        if(absYDistance <= 100)
                        
                                    {
                                    
                        if(absXDistance < getFiringDistance() /2)
                        
                                    {
                                    directionCompositeInterface= this.getOwnerLayerInterface() as DirectionCompositeInterface;
    

                        if(xDistance < 0 && directionCompositeInterface!.getDirection() == directionFactory!.RIGHT)
                        
                                    {
                                    direction= directionFactory!.RIGHT;
    

                                    }
                                
                             else 
                        if(xDistance > 0 && directionCompositeInterface!.getDirection() == directionFactory!.LEFT)
                        
                                    {
                                    direction= directionFactory!.LEFT;
    

                                    }
                                

                                    }
                                

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return direction;
    
}


    public disable(){
}


    public onEvent(AllBinaryEventObject eventObject){
ForcedLogUtil.log(EventStrings.getInstance()!.PERFORMANCE_MESSAGE, this);
    
}


    public onMovement(TrackingEvent trackingEvent){
this.trackingList!.clear();
    
this.trackingList!.add(trackingEvent);
    
}


    public int32_t getFiringDistance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.firingDistance;
    
}


    public setFiringDistance(int32_t firingDistance){
this.firingDistance= firingDistance;
    
}


};

            

