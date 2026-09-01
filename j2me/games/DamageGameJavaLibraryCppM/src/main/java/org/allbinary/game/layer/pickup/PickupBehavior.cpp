
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
        



            #include <vector>
        
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

    public: static Object* NULL_PICKUP_BEHAVIOR = NullUtil::getInstance().NULL_OBJECT;

    public: static PickupBehavior getNullInstance(){

                        if(PickupBehavior::NULL_PICKUP_BEHAVIOR == NullUtil::getInstance().NULL_OBJECT)
                        
                                    {
                                    PickupBehavior::NULL_PICKUP_BEHAVIOR= PickupBehavior(CollidableCompositeLayer::getNullInstance(), 0);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PickupBehavior::NULL_PICKUP_BEHAVIOR as PickupBehavior;
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: int32_t countedIndex;

    private: CollidableCompositeLayer ownerLayerInterface;

public: PickupBehavior(CollidableCompositeLayer ownerLayerInterface, int32_t countedIndex){
this->ownerLayerInterface= ownerLayerInterface;
    
this->countedIndex= countedIndex;
    
}


    public: void doPickup(PickupProcessorInterface pickupProcessorInterface){

        try {
            
    HealthInterfaceCompositeInterface healthInterfaceCompositeInterface = this->ownerLayerInterface as unknown  as HealthInterfaceCompositeInterface;;
    

                        if(healthInterfaceCompositeInterface.getHealthInterface().isAlive())
                        
                                    {
                                    pickupProcessorInterface.process(this->ownerLayerInterface);
    

                                    }
                                

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, "doPickup", e);
    
}

}


    public: void doPickupLayer(PickedUpLayerInterface pickupLayerInterface){

        try {
            
    PickedUpLayerInterfaceFactoryInterface pickedUpLayerInterfaceFactoryInterface = pickupLayerInterface.getPickedUpLayerInterfaceFactoryInterface();;
    

    PickedUpLayerType pickedUpLayerType = pickedUpLayerInterfaceFactoryInterface.getPickedUpLayerType();;
    

    PickedUpLayerTypeFactory pickedUpLayerTypeFactory = PickedUpLayerTypeFactory::getInstance();;
    

                        if(pickedUpLayerType == pickedUpLayerTypeFactory.BEAM || pickedUpLayerType == pickedUpLayerTypeFactory.MINE || pickedUpLayerType == pickedUpLayerTypeFactory.PROJECTILE || pickedUpLayerType == pickedUpLayerTypeFactory.ENHANCEMENT)
                        
                                    {
                                    this->add(pickedUpLayerInterfaceFactoryInterface as CountedPickedUpLayerInterfaceFactoryInterface);
    

                                    }
                                
                             else 
                        if(pickedUpLayerInterfaceFactoryInterface.getPickedUpLayerType() == pickedUpLayerTypeFactory.PART)
                        
                                    {
                                    
    CollidableDestroyableDamageableLayer collidableDestroyableDamageableLayer = this->ownerLayerInterface as CollidableDestroyableDamageableLayer;;
    
collidableDestroyableDamageableLayer.addPart(pickedUpLayerInterfaceFactoryInterface);
    

                                    }
                                
                             else 
                        if(pickedUpLayerType == pickedUpLayerTypeFactory.NONE)
                        
                                    {
                                    
                                    }
                                
                        else {
                            
    PickupProcessorInterface pickupProcessorInterface = pickedUpLayerInterfaceFactoryInterface as unknown  as PickupProcessorInterface;;
    
this->doPickup(pickupProcessorInterface);
    

                        }
                            
pickupLayerInterface.setPickedUp();
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
PreLogUtil::putOE(commonStrings.EXCEPTION, this, "doPickup", e);
    
}

}


    protected: void add(CountedPickedUpLayerInterfaceFactoryInterface countedPickedUpLayerInterfaceFactoryInterface){

    int32_t partIndex = countedPickedUpLayerInterfaceFactoryInterface.getId() +this->countedIndex;;
    
this->addAt(countedPickedUpLayerInterfaceFactoryInterface, partIndex);
    
}


    protected: void addAt(CountedPickedUpLayerInterfaceFactoryInterface countedPickedUpLayerInterfaceFactoryInterface, int32_t partIndex){

    CollidableDestroyableDamageableLayer collidableDestroyableDamageableLayer = this->ownerLayerInterface as CollidableDestroyableDamageableLayer;;
    

    CountedLayerInterfaceFactoryPart countedLayerInterfaceFactory = collidableDestroyableDamageableLayer.getPartInterfaceArray()[partIndex]! as CountedLayerInterfaceFactoryPart;;
    
countedLayerInterfaceFactory.setTotal(countedLayerInterfaceFactory.getTotal() +countedPickedUpLayerInterfaceFactoryInterface.getTotal());
    
}


    public: CountedLayerInterfaceFactoryPart getFirstAvailableCountedLayerInterfaceFactory(std::vector<PickedUpLayerType> pickedUpLayerTypeArray){

    CollidableDestroyableDamageableLayer collidableDestroyableDamageableLayer = this->ownerLayerInterface as CollidableDestroyableDamageableLayer;;
    

    std::vector<PartInterface> partInterfaceArray = collidableDestroyableDamageableLayer.getPartInterfaceArray();;
    

    int32_t size = partInterfaceArray.size();;
    

    CountedLayerInterfaceFactoryPart nextCountedLayerInterfaceFactory;;
    

    CountedPickedUpLayerInterfaceFactory countedPickedUpLayerInterfaceFactory;;
    




                        for (
    int32_t index = this->countedIndex;index < size; index++)
        {
nextCountedLayerInterfaceFactory= collidableDestroyableDamageableLayer.getPartInterfaceArray()[index]! as CountedLayerInterfaceFactoryPart;
    
countedPickedUpLayerInterfaceFactory= nextCountedLayerInterfaceFactory.getCountedPickedUpLayerInterfaceFactory();
    




                        for (
    int32_t index2 = pickedUpLayerTypeArray.size();--index2 >= 0; )
        {

                        if(countedPickedUpLayerInterfaceFactory.getPickedUpLayerType() == pickedUpLayerTypeArray[index2])
                        
                                    {
                                    
                        if(nextCountedLayerInterfaceFactory.getTotal() > 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nextCountedLayerInterfaceFactory;
    

                                    }
                                

                                    }
                                
}

}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CountedLayerInterfaceFactoryPart::NULL_COUNTED_LAYER_INTERFACE_FACTORY;
    
}


                //@Throws(Exception.constructor)
            
    public: CountedLayerInterfaceFactoryPart getCountedLayerInterfaceFactoryForSlot(int32_t slotIndex){

    int32_t currentSlot = 0;;
    

    CollidableDestroyableDamageableLayer collidableDestroyableDamageableLayer = this->ownerLayerInterface as CollidableDestroyableDamageableLayer;;
    

    std::vector<PartInterface> partInterfaceArray = collidableDestroyableDamageableLayer.getPartInterfaceArray();;
    

    int32_t size = partInterfaceArray.size();;
    

    CountedLayerInterfaceFactoryPart nextCountedLayerInterfaceFactory;;
    




                        for (
    int32_t index = this->countedIndex;index < size; index++)
        {
nextCountedLayerInterfaceFactory= collidableDestroyableDamageableLayer.getPartInterfaceArray()[index]! as CountedLayerInterfaceFactoryPart;
    

                        if(nextCountedLayerInterfaceFactory.getTotal() > 0)
                        
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
                        return CountedLayerInterfaceFactoryPart::NULL_COUNTED_LAYER_INTERFACE_FACTORY;
    
}


    public: int32_t getCountedIndex(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->countedIndex;
    
}


};

            

