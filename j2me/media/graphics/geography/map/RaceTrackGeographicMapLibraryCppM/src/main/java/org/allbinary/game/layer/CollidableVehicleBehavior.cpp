
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

    protected: int64_t totalImpactVelocity = 0;

public: CollidableVehicleBehavior(bool collidable) : CollidableDestroyableDamageableBehavior(collidable){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: void collide(CollidableCompositeLayer ownerLayer, CollidableCompositeLayer collidableInterfaceCompositeInterface){

    CollisionTypeFactory collisionTypeFactory = CollisionTypeFactory::getInstance();;
    

    CollisionType collisionType = collidableInterfaceCompositeInterface.getCollidableInferface().getCollisionTypeWith(ownerLayer);;
    

                        if(collisionType == collisionTypeFactory.PICKUP)
                        
                                    {
                                    
    CollidableDestroyableDamageableLayer collidableDestroyableDamageableLayer = (ownerLayer);;
    
collidableDestroyableDamageableLayer.getPickupBehavior().doPickupLayer(collidableInterfaceCompositeInterface);
    

                                    }
                                
                             else 
                        if(collisionType == collisionTypeFactory.COLLISION)
                        
                                    {
                                    super.collide(ownerLayer, collidableInterfaceCompositeInterface);
    

                                    }
                                
                        else {
                            this->collideVehicle(ownerLayer, collidableInterfaceCompositeInterface);
    

                        }
                            
}


    public: void collideInterface(CollidableCompositeLayer ownerLayer, CollidableInterfaceCompositeInterface collidableInterfaceCompositeInterface){
ForcedLogUtil::log("Don't Use Interface Version It Is Slower", this);
    
}


    private: int64_t halfImpactVelocityX= 0;

    private: int64_t halfImpactVelocityY= 0;

    protected: void collideVehicle(CollidableCompositeLayer ownerLayer, VehiclePropertiesCompositeInterface vehiclePropertiesCompositeInterface){

    VehiclePropertiesCompositeInterface ownerVehicleLayerInterface = (ownerLayer);;
    

    VehicleProperties ownerVehicleProperties = ownerVehicleLayerInterface.getVehicleProperties();;
    

    VehicleProperties vehicleProperties = vehiclePropertiesCompositeInterface.getVehicleProperties();;
    

    int64_t impactVelocityX = ownerVehicleProperties.getVelocityProperties().getVelocityXBasicDecimalP().getUnscaled() -vehicleProperties.getVelocityProperties().getVelocityXBasicDecimalP().getUnscaled();;
    

    int64_t impactVelocityY = ownerVehicleProperties.getVelocityProperties().getVelocityYBasicDecimalP().getUnscaled() -vehicleProperties.getVelocityProperties().getVelocityYBasicDecimalP().getUnscaled();;
    

                        if(impactVelocityX != 0)
                        
                                    {
                                    this->halfImpactVelocityX= (impactVelocityX>>1);
    
ownerVehicleProperties.getVelocityProperties().getVelocityXBasicDecimalP().addlong(this->halfImpactVelocityX);
    
vehicleProperties.getVelocityProperties().getVelocityXBasicDecimalP().addlong(this->halfImpactVelocityX);
    

                                    }
                                
                        else {
                            
                        }
                            

                        if(impactVelocityY != 0)
                        
                                    {
                                    this->halfImpactVelocityY= (impactVelocityY>>1);
    
ownerVehicleProperties.getVelocityProperties().getVelocityYBasicDecimalP().addlong(this->halfImpactVelocityY);
    
vehicleProperties.getVelocityProperties().getVelocityXBasicDecimalP().addlong(this->halfImpactVelocityY);
    

                                    }
                                
                        else {
                            
                        }
                            
this->collideFriction(ownerVehicleLayerInterface);
    
this->collideFriction(vehiclePropertiesCompositeInterface);
    
this->totalImpactVelocity= impactVelocityX +impactVelocityY;
    
}


    private: void collideFriction(VehiclePropertiesCompositeInterface vehiclePropertiesCompositeInterface){

    VehicleFrictionProperties vehicleFrictionProperties = vehiclePropertiesCompositeInterface.getVehicleProperties().getVehicleFrictionProperties();;
    
vehiclePropertiesCompositeInterface.getVehicleProperties().getVehicleFrictionProperties().friction(vehiclePropertiesCompositeInterface.getVehicleProperties().getVelocityProperties(), vehicleFrictionProperties.getCrashFrictionNominator());
    
}


};

            

