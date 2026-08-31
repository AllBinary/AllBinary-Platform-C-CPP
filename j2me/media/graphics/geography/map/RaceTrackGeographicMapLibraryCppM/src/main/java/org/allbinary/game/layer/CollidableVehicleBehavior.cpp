
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/layer/pickup/PickedUpLayerInterface.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h>

      
#include <org/allbinary/game/collision/CollisionType.h>

      
#include <org/allbinary/game/collision/CollisionTypeFactory.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableBehavior.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "VehiclePropertiesCompositeInterface.h"
#include "CollidableCompositeLayer.h"
#include "VehicleProperties.h"
#include "VehicleFrictionProperties.h"

class CollidableVehicleBehavior: public CollidableDestroyableDamageableBehavior {
        

    totalImpactVelocity: int64_t = 0;

public constructor (bool collidable){
            super(collidable);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public collide(CollidableCompositeLayer ownerLayer, CollidableCompositeLayer collidableInterfaceCompositeInterface){

    collisionTypeFactory: CollisionTypeFactory = CollisionTypeFactory.getInstance()!;;
    

    collisionType: CollisionType = collidableInterfaceCompositeInterface!.getCollidableInferface()!.getCollisionTypeWith(ownerLayer)!;;
    

                        if(collisionType == collisionTypeFactory!.PICKUP)
                        
                                    {
                                    
    collidableDestroyableDamageableLayer: CollidableDestroyableDamageableLayer = (ownerLayer as CollidableDestroyableDamageableLayer);;
    
collidableDestroyableDamageableLayer!.getPickupBehavior()!.doPickupLayer(collidableInterfaceCompositeInterface as PickedUpLayerInterface);
    

                                    }
                                
                             else 
                        if(collisionType == collisionTypeFactory!.COLLISION)
                        
                                    {
                                    super.collide(ownerLayer, collidableInterfaceCompositeInterface);
    

                                    }
                                
                        else {
                            this.collideVehicle(ownerLayer, collidableInterfaceCompositeInterface as VehiclePropertiesCompositeInterface);
    

                        }
                            
}


    public collideInterface(CollidableCompositeLayer ownerLayer, CollidableInterfaceCompositeInterface collidableInterfaceCompositeInterface){
ForcedLogUtil.log("Don't Use Interface Version It Is Slower", this);
    
}


    private: halfImpactVelocityX: int64_t= 0;

    private: halfImpactVelocityY: int64_t= 0;

    collideVehicle(CollidableCompositeLayer ownerLayer, VehiclePropertiesCompositeInterface vehiclePropertiesCompositeInterface){

    ownerVehicleLayerInterface: VehiclePropertiesCompositeInterface = (ownerLayer as VehiclePropertiesCompositeInterface);;
    

    ownerVehicleProperties: VehicleProperties = ownerVehicleLayerInterface!.getVehicleProperties()!;;
    

    vehicleProperties: VehicleProperties = vehiclePropertiesCompositeInterface!.getVehicleProperties()!;;
    

    impactVelocityX: int64_t = ownerVehicleProperties!.getVelocityProperties()!.getVelocityXBasicDecimalP()!.getUnscaled() -vehicleProperties!.getVelocityProperties()!.getVelocityXBasicDecimalP()!.getUnscaled();;
    

    impactVelocityY: int64_t = ownerVehicleProperties!.getVelocityProperties()!.getVelocityYBasicDecimalP()!.getUnscaled() -vehicleProperties!.getVelocityProperties()!.getVelocityYBasicDecimalP()!.getUnscaled();;
    

                        if(impactVelocityX != 0)
                        
                                    {
                                    this.halfImpactVelocityX= (impactVelocityX>>1);
    
ownerVehicleProperties!.getVelocityProperties()!.getVelocityXBasicDecimalP()!.addlong(this.halfImpactVelocityX);
    
vehicleProperties!.getVelocityProperties()!.getVelocityXBasicDecimalP()!.addlong(this.halfImpactVelocityX);
    

                                    }
                                
                        else {
                            
                        }
                            

                        if(impactVelocityY != 0)
                        
                                    {
                                    this.halfImpactVelocityY= (impactVelocityY>>1);
    
ownerVehicleProperties!.getVelocityProperties()!.getVelocityYBasicDecimalP()!.addlong(this.halfImpactVelocityY);
    
vehicleProperties!.getVelocityProperties()!.getVelocityXBasicDecimalP()!.addlong(this.halfImpactVelocityY);
    

                                    }
                                
                        else {
                            
                        }
                            
this.collideFriction(ownerVehicleLayerInterface);
    
this.collideFriction(vehiclePropertiesCompositeInterface);
    
this.totalImpactVelocity= impactVelocityX +impactVelocityY;
    
}


    collideFriction(VehiclePropertiesCompositeInterface vehiclePropertiesCompositeInterface){

    vehicleFrictionProperties: VehicleFrictionProperties = vehiclePropertiesCompositeInterface!.getVehicleProperties()!.getVehicleFrictionProperties()!;;
    
vehiclePropertiesCompositeInterface!.getVehicleProperties()!.getVehicleFrictionProperties()!.friction(vehiclePropertiesCompositeInterface!.getVehicleProperties()!.getVelocityProperties(), vehicleFrictionProperties!.getCrashFrictionNominator());
    
}


};

            

