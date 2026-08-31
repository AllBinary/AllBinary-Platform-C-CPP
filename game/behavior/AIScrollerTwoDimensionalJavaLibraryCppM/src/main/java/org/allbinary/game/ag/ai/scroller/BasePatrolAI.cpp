
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

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/game/physics/velocity/BasicVelocityProperties.h>

      
#include <org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/math/MathUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasePatrolAI: public BasicAI {
        

    public static const MAX_DISTANCE: Integer = SmallIntegerSingletonFactory.getInstance()!.getAt(2)!;

    public static const DIRECTION_ARRAY: Integer = SmallIntegerSingletonFactory.getInstance()!.getAt(3)!;

    public static const FIRING_DISTANCE: Integer = SmallIntegerSingletonFactory.getInstance()!.getAt(4)!;

    public static SPEED: Integer = SmallIntegerSingletonFactory.getInstance()!.getAt(5)!;

    maxDistance: Integer;

    currentDistance: int32_t;

    xTotalDistance: int32_t= 0;

    lastKeyDirection: int32_t = Canvas.RIGHT;

    keyDirection: int32_t = Canvas.RIGHT;

public constructor (Hashtable<any, any> hashtable, AllBinaryLayer ownerLayerInterface, GameInput gameInput){
            super(ownerLayerInterface, gameInput);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.maxDistance= hashtable.get(BasePatrolAI.MAX_DISTANCE) as Integer;
    
this.currentDistance= this.maxDistance!.intValue();
    
}


    update(){
this.updateTotalDistance();
    
this.changeDirectionIfReachedPacingAreaMax();
    
}


    updateTotalDistance(){

    velocityInterfaceCompositeInterface: VelocityInterfaceCompositeInterface = this.getOwnerLayerInterface() as VelocityInterfaceCompositeInterface;;
    

    velocityProperties: BasicVelocityProperties = velocityInterfaceCompositeInterface!.getVelocityProperties()!;;
    
this.xTotalDistance += velocityProperties!.getVelocityXBasicDecimalP()!.getScaled();
    
}


    changeDirectionIfReachedPacingAreaMax(){

    mathUtil: MathUtil = MathUtil.getInstance()!;;
    

    totalDistance: int32_t = mathUtil!.abs(this.xTotalDistance)!;;
    

                        if(totalDistance > this.currentDistance)
                        
                                    {
                                    this.nextDirection();
    

                                    }
                                
}


    nextDirection(){

                        if(this.lastKeyDirection == Canvas.LEFT)
                        
                                    {
                                    this.keyDirection= Canvas.RIGHT;
    
this.lastKeyDirection= this.keyDirection;
    
this.xTotalDistance= 0;
    

                                    }
                                
                             else 
                        if(this.lastKeyDirection == Canvas.RIGHT)
                        
                                    {
                                    this.keyDirection= Canvas.LEFT;
    
this.lastKeyDirection= this.keyDirection;
    
this.xTotalDistance= 0;
    

                                    }
                                
}


    public disable(){
}


};

            

