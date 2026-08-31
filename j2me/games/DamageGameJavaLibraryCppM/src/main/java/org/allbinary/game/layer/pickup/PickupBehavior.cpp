
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/health/HealthInterfaceCompositeInterface.h>

      
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/game/part/CountedLayerInterfaceFactoryPart.h>

      
#include <org/allbinary/game/part/PartInterface.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PickupBehaviorInterface.h"
#include "PickupProcessorInterface.h"
#include "PickedUpLayerInterfaceFactoryInterface.h"
#include "PickedUpLayerType.h"
#include "PickedUpLayerTypeFactory.h"
#include "CountedPickedUpLayerInterfaceFactoryInterface.h"
#include "PickedUpLayerInterface.h"
#include "CountedPickedUpLayerInterfaceFactory.h"

class PickupBehavior
            : public Object
        : public PickupBehaviorInterface {
        

    public static NULL_PICKUP_BEHAVIOR: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static PickupBehavior getNullInstance(){

                        if(PickupBehavior.NULL_PICKUP_BEHAVIOR == NullUtil.getInstance()!.NULL_OBJECT)
                        
                                    {
                                    PickupBehavior.NULL_PICKUP_BEHAVIOR= new PickupBehavior(CollidableCompositeLayer.getNullInstance(), 0);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PickupBehavior.NULL_PICKUP_BEHAVIOR as PickupBehavior;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const countedIndex: int32_t;

    private: const ownerLayerInterface: CollidableCompositeLayer;

public constructor (CollidableCompositeLayer ownerLayerInterface, int32_t countedIndex){

            super();
        this.ownerLayerInterface= ownerLayerInterface;
    
this.countedIndex= countedIndex;
    
}


    public doPickup(PickupProcessorInterface pickupProcessorInterface){

        try {
            
    healthInterfaceCompositeInterface: HealthInterfaceCompositeInterface = this.ownerLayerInterface as unknown  as HealthInterfaceCompositeInterface;;
    

                        if(healthInterfaceCompositeInterface!.getHealthInterface()!.isAlive())
                        
                                    {
                                    pickupProcessorInterface!.process(this.ownerLayerInterface);
    

                                    }
                                

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, "doPickup", e);
    
}

}


    public doPickupLayer(PickedUpLayerInterface pickupLayerInterface){

        try {
            
    pickedUpLayerInterfaceFactoryInterface: PickedUpLayerInterfaceFactoryInterface = pickupLayerInterface!.getPickedUpLayerInterfaceFactoryInterface()!;;
    

    pickedUpLayerType: PickedUpLayerType = pickedUpLayerInterfaceFactoryInterface!.getPickedUpLayerType()!;;
    

    pickedUpLayerTypeFactory: PickedUpLayerTypeFactory = PickedUpLayerTypeFactory.getInstance()!;;
    

                        if(pickedUpLayerType == pickedUpLayerTypeFactory!.BEAM || pickedUpLayerType == pickedUpLayerTypeFactory!.MINE || pickedUpLayerType == pickedUpLayerTypeFactory!.PROJECTILE || pickedUpLayerType == pickedUpLayerTypeFactory!.ENHANCEMENT)
                        
                                    {
                                    this.add(pickedUpLayerInterfaceFactoryInterface as CountedPickedUpLayerInterfaceFactoryInterface);
    

                                    }
                                
                             else 
                        if(pickedUpLayerInterfaceFactoryInterface!.getPickedUpLayerType() == pickedUpLayerTypeFactory!.PART)
                        
                                    {
                                    
    collidableDestroyableDamageableLayer: CollidableDestroyableDamageableLayer = this.ownerLayerInterface as CollidableDestroyableDamageableLayer;;
    
collidableDestroyableDamageableLayer!.addPart(pickedUpLayerInterfaceFactoryInterface);
    

                                    }
                                
                             else 
                        if(pickedUpLayerType == pickedUpLayerTypeFactory!.NONE)
                        
                                    {
                                    
                                    }
                                
                        else {
                            
    pickupProcessorInterface: PickupProcessorInterface = pickedUpLayerInterfaceFactoryInterface as unknown  as PickupProcessorInterface;;
    
this.doPickup(pickupProcessorInterface);
    

                        }
                            
pickupLayerInterface!.setPickedUp();
    

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
PreLogUtil.putOE(commonStrings!.EXCEPTION, this, "doPickup", e);
    
}

}


    add(CountedPickedUpLayerInterfaceFactoryInterface countedPickedUpLayerInterfaceFactoryInterface){

    partIndex: int32_t = countedPickedUpLayerInterfaceFactoryInterface!.getId() +this.countedIndex;;
    
this.addAt(countedPickedUpLayerInterfaceFactoryInterface, partIndex);
    
}


    addAt(CountedPickedUpLayerInterfaceFactoryInterface countedPickedUpLayerInterfaceFactoryInterface, int32_t partIndex){

    collidableDestroyableDamageableLayer: CollidableDestroyableDamageableLayer = this.ownerLayerInterface as CollidableDestroyableDamageableLayer;;
    

    countedLayerInterfaceFactory: CountedLayerInterfaceFactoryPart = collidableDestroyableDamageableLayer!.getPartInterfaceArray()[partIndex]! as CountedLayerInterfaceFactoryPart;;
    
countedLayerInterfaceFactory!.setTotal(countedLayerInterfaceFactory!.getTotal() +countedPickedUpLayerInterfaceFactoryInterface!.getTotal());
    
}


    public CountedLayerInterfaceFactoryPart getFirstAvailableCountedLayerInterfaceFactory(std::vector<PickedUpLayerType> pickedUpLayerTypeArray){

    collidableDestroyableDamageableLayer: CollidableDestroyableDamageableLayer = this.ownerLayerInterface as CollidableDestroyableDamageableLayer;;
    

    partInterfaceArray: std::vector<PartInterface> = collidableDestroyableDamageableLayer!.getPartInterfaceArray()!;;
    

    size: int32_t = partInterfaceArray!.length
                ;;
    

    nextCountedLayerInterfaceFactory: CountedLayerInterfaceFactoryPart;;
    

    countedPickedUpLayerInterfaceFactory: CountedPickedUpLayerInterfaceFactory;;
    




                        for (
    index: int32_t = this.countedIndex;index < size; index++)
        {
nextCountedLayerInterfaceFactory= collidableDestroyableDamageableLayer!.getPartInterfaceArray()[index]! as CountedLayerInterfaceFactoryPart;
    
countedPickedUpLayerInterfaceFactory= nextCountedLayerInterfaceFactory!.getCountedPickedUpLayerInterfaceFactory();
    




                        for (
    index2: int32_t = pickedUpLayerTypeArray!.length
                ;--index2 >= 0; )
        {

                        if(countedPickedUpLayerInterfaceFactory!.getPickedUpLayerType() == pickedUpLayerTypeArray[index2])
                        
                                    {
                                    
                        if(nextCountedLayerInterfaceFactory!.getTotal() > 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nextCountedLayerInterfaceFactory;
    

                                    }
                                

                                    }
                                
}

}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CountedLayerInterfaceFactoryPart.NULL_COUNTED_LAYER_INTERFACE_FACTORY;
    
}


                //@Throws(Exception.constructor)
            
    public CountedLayerInterfaceFactoryPart getCountedLayerInterfaceFactoryForSlot(int32_t slotIndex){

    currentSlot: int32_t = 0;;
    

    collidableDestroyableDamageableLayer: CollidableDestroyableDamageableLayer = this.ownerLayerInterface as CollidableDestroyableDamageableLayer;;
    

    partInterfaceArray: std::vector<PartInterface> = collidableDestroyableDamageableLayer!.getPartInterfaceArray()!;;
    

    size: int32_t = partInterfaceArray!.length
                ;;
    

    nextCountedLayerInterfaceFactory: CountedLayerInterfaceFactoryPart;;
    




                        for (
    index: int32_t = this.countedIndex;index < size; index++)
        {
nextCountedLayerInterfaceFactory= collidableDestroyableDamageableLayer!.getPartInterfaceArray()[index]! as CountedLayerInterfaceFactoryPart;
    

                        if(nextCountedLayerInterfaceFactory!.getTotal() > 0)
                        
                                    {
                                    
                        if(currentSlot == slotIndex)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nextCountedLayerInterfaceFactory;
    

                                    }
                                
                        else {
                            currentSlot++;
    

                        }
                            

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CountedLayerInterfaceFactoryPart.NULL_COUNTED_LAYER_INTERFACE_FACTORY;
    
}


    public int32_t getCountedIndex(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.countedIndex;
    
}


};

            

