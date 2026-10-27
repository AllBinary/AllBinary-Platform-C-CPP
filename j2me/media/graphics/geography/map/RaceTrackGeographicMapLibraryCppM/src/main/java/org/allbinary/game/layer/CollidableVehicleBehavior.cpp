
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_COLLIDABLEVEHICLEBEHAVIOR_CPP
        #define ORG_ALLBINARY_GAME_LAYER_COLLIDABLEVEHICLEBEHAVIOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/CollidableVehicleBehavior.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/pickup/PickedUpLayerInterface.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h>

      
#include <org/allbinary/game/collision/CollisionType.h>

      
#include <org/allbinary/game/collision/CollisionTypeFactory.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableBehavior.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/VehiclePropertiesCompositeInterface.h"
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#include "org/allbinary/game/layer/VehicleProperties.h"
#include "org/allbinary/game/layer/VehicleFrictionProperties.h"


CollidableVehicleBehavior::CollidableVehicleBehavior(bool collidable) : CollidableDestroyableDamageableBehavior(collidable){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    auto CollidableVehicleBehavior::collide(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface) -> void{

    CollisionTypeFactory* collisionTypeFactory = CollisionTypeFactory::getInstance();;
    

    CollisionType* collisionType = collidableInterfaceCompositeInterface->getCollidableInferface()->getCollisionTypeWith(ownerLayer);;
    

                        if(collisionType == collisionTypeFactory->PICKUP)
                        
                                    {
                                    
    CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer = (dynamic_cast<CollidableDestroyableDamageableLayer*>(ownerLayer));;
    
collidableDestroyableDamageableLayer->getPickupBehavior()->doPickupLayer(dynamic_cast<PickedUpLayerInterface*>(collidableInterfaceCompositeInterface));
    

                                    }
                                
                             else 
                        if(collisionType == collisionTypeFactory->COLLISION)
                        
                                    {
                                    CollidableDestroyableDamageableBehavior::collide(ownerLayer, collidableInterfaceCompositeInterface);
    

                                    }
                                
                        else {
                            this->collideVehicle(ownerLayer, dynamic_cast<VehiclePropertiesCompositeInterface*>(collidableInterfaceCompositeInterface));
    

                        }
                            
}


    auto CollidableVehicleBehavior::collideInterface(CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) -> void{
ForcedLogUtil::log("Don't Use Interface Version It Is Slower", this);
    
}


    auto CollidableVehicleBehavior::collideVehicle(CollidableCompositeLayer* ownerLayer, VehiclePropertiesCompositeInterface* vehiclePropertiesCompositeInterface) -> void{

    VehiclePropertiesCompositeInterface* ownerVehicleLayerInterface = (dynamic_cast<VehiclePropertiesCompositeInterface*>(ownerLayer));;
    

    VehicleProperties* ownerVehicleProperties = ownerVehicleLayerInterface->getVehicleProperties();;
    

    VehicleProperties* vehicleProperties = vehiclePropertiesCompositeInterface->getVehicleProperties();;
    

    int64_t impactVelocityX = ownerVehicleProperties->getVelocityProperties()->getVelocityXBasicDecimalP()->getUnscaled() -vehicleProperties->getVelocityProperties()->getVelocityXBasicDecimalP()->getUnscaled();;
    

    int64_t impactVelocityY = ownerVehicleProperties->getVelocityProperties()->getVelocityYBasicDecimalP()->getUnscaled() -vehicleProperties->getVelocityProperties()->getVelocityYBasicDecimalP()->getUnscaled();;
    

                        if(impactVelocityX != 0)
                        
                                    {
                                    this->halfImpactVelocityX= (impactVelocityX>>1);
    
ownerVehicleProperties->getVelocityProperties()->getVelocityXBasicDecimalP()->addlong(this->halfImpactVelocityX);
    
vehicleProperties->getVelocityProperties()->getVelocityXBasicDecimalP()->addlong(this->halfImpactVelocityX);
    

                                    }
                                
                        else {
                            
                        }
                            

                        if(impactVelocityY != 0)
                        
                                    {
                                    this->halfImpactVelocityY= (impactVelocityY>>1);
    
ownerVehicleProperties->getVelocityProperties()->getVelocityYBasicDecimalP()->addlong(this->halfImpactVelocityY);
    
vehicleProperties->getVelocityProperties()->getVelocityXBasicDecimalP()->addlong(this->halfImpactVelocityY);
    

                                    }
                                
                        else {
                            
                        }
                            
this->collideFriction(ownerVehicleLayerInterface);
    
this->collideFriction(vehiclePropertiesCompositeInterface);
    
this->totalImpactVelocity= impactVelocityX +impactVelocityY;
    
}


    auto CollidableVehicleBehavior::collideFriction(VehiclePropertiesCompositeInterface* vehiclePropertiesCompositeInterface) -> void{

    VehicleFrictionProperties* vehicleFrictionProperties = vehiclePropertiesCompositeInterface->getVehicleProperties()->getVehicleFrictionProperties();;
    
vehiclePropertiesCompositeInterface->getVehicleProperties()->getVehicleFrictionProperties()->friction(vehiclePropertiesCompositeInterface->getVehicleProperties()->getVelocityProperties(), vehicleFrictionProperties->getCrashFrictionNominator());
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_COLLIDABLEVEHICLEBEHAVIOR_CPP
