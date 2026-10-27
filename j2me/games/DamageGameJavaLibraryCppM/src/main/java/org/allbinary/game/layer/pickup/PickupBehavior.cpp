
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
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
        #include "org/allbinary/game/layer/pickup/PickupBehaviorInterface.h"
#include "org/allbinary/game/layer/pickup/PickupProcessorInterface.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerType.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerTypeFactory.h"
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactoryInterface.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterface.h"
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h"

class PickupBehavior
            : public Object
        , public PickupBehaviorInterface {

    public: static inline Object* NULL_PICKUP_BEHAVIOR = NullUtil::getInstance()->NULL_OBJECT;

    public: static PickupBehavior* getNullInstance(){

                        if(PickupBehavior::NULL_PICKUP_BEHAVIOR == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    PickupBehavior::NULL_PICKUP_BEHAVIOR= new PickupBehavior(CollidableCompositeLayer::getNullInstance(), 0);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<PickupBehavior*>(PickupBehavior::NULL_PICKUP_BEHAVIOR);
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: int32_t countedIndex;

    private: CollidableCompositeLayer* ownerLayerInterface;

public: PickupBehavior(CollidableCompositeLayer* ownerLayerInterface, int32_t countedIndex){
this->ownerLayerInterface= ownerLayerInterface;
    
this->countedIndex= countedIndex;
    
}


    public: void doPickup(PickupProcessorInterface* pickupProcessorInterface){

        try {
            
    HealthInterfaceCompositeInterface* healthInterfaceCompositeInterface = dynamic_cast<HealthInterfaceCompositeInterface*>(this->ownerLayerInterface as unknown );;
    

                        if(healthInterfaceCompositeInterface->getHealthInterface()->isAlive())
                        
                                    {
                                    pickupProcessorInterface->process(this->ownerLayerInterface);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, "doPickup", &e);
    
}

}


    public: void doPickupLayer(PickedUpLayerInterface* pickupLayerInterface){

        try {
            
    PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface = pickupLayerInterface->getPickedUpLayerInterfaceFactoryInterface();;
    

    PickedUpLayerType* pickedUpLayerType = pickedUpLayerInterfaceFactoryInterface->getPickedUpLayerType();;
    

    PickedUpLayerTypeFactory* pickedUpLayerTypeFactory = PickedUpLayerTypeFactory::getInstance();;
    

                        if(pickedUpLayerType == pickedUpLayerTypeFactory->BEAM || pickedUpLayerType == pickedUpLayerTypeFactory->MINE || pickedUpLayerType == pickedUpLayerTypeFactory->PROJECTILE || pickedUpLayerType == pickedUpLayerTypeFactory->ENHANCEMENT)
                        
                                    {
                                    this->add(dynamic_cast<CountedPickedUpLayerInterfaceFactoryInterface*>(pickedUpLayerInterfaceFactoryInterface));
    

                                    }
                                
                             else 
                        if(pickedUpLayerInterfaceFactoryInterface->getPickedUpLayerType() == pickedUpLayerTypeFactory->PART)
                        
                                    {
                                    
    CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer = dynamic_cast<CollidableDestroyableDamageableLayer*>(this->ownerLayerInterface);;
    
collidableDestroyableDamageableLayer->addPart(pickedUpLayerInterfaceFactoryInterface);
    

                                    }
                                
                             else 
                        if(pickedUpLayerType == pickedUpLayerTypeFactory->NONE)
                        
                                    {
                                    
                                    }
                                
                        else {
                            
    PickupProcessorInterface* pickupProcessorInterface = dynamic_cast<PickupProcessorInterface*>(pickedUpLayerInterfaceFactoryInterface as unknown );;
    
this->doPickup(pickupProcessorInterface);
    

                        }
                            
pickupLayerInterface->setPickedUp();
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
PreLogUtil::putOE(commonStrings->EXCEPTION, this, "doPickup", &e);
    
}

}


    protected: void add(CountedPickedUpLayerInterfaceFactoryInterface* countedPickedUpLayerInterfaceFactoryInterface){

    int32_t partIndex = countedPickedUpLayerInterfaceFactoryInterface->getId() +this->countedIndex;;
    
this->addAt(countedPickedUpLayerInterfaceFactoryInterface, partIndex);
    
}


    protected: void addAt(CountedPickedUpLayerInterfaceFactoryInterface* countedPickedUpLayerInterfaceFactoryInterface, int32_t partIndex){

    CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer = dynamic_cast<CollidableDestroyableDamageableLayer*>(this->ownerLayerInterface);;
    

    CountedLayerInterfaceFactoryPart* countedLayerInterfaceFactory = dynamic_cast<CountedLayerInterfaceFactoryPart*>(collidableDestroyableDamageableLayer->getPartInterfaceArray()[partIndex]);;
    
countedLayerInterfaceFactory->setTotal(countedLayerInterfaceFactory->getTotal() +countedPickedUpLayerInterfaceFactoryInterface->getTotal());
    
}


    public: CountedLayerInterfaceFactoryPart* getFirstAvailableCountedLayerInterfaceFactory(std::vector<PickedUpLayerType*> pickedUpLayerTypeArray){

    CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer = dynamic_cast<CollidableDestroyableDamageableLayer*>(this->ownerLayerInterface);;
    

    std::vector<PartInterface*> partInterfaceArray = collidableDestroyableDamageableLayer->getPartInterfaceArray();;
    

    int32_t size = partInterfaceArray.size();;
    

    CountedLayerInterfaceFactoryPart* nextCountedLayerInterfaceFactory;;
    

    CountedPickedUpLayerInterfaceFactory* countedPickedUpLayerInterfaceFactory;;
    




                        for (
    int32_t index = this->countedIndex;index < size; index++)
        {
nextCountedLayerInterfaceFactory= dynamic_cast<CountedLayerInterfaceFactoryPart*>(collidableDestroyableDamageableLayer->getPartInterfaceArray()[index]);
    
countedPickedUpLayerInterfaceFactory= nextCountedLayerInterfaceFactory->getCountedPickedUpLayerInterfaceFactory();
    




                        for (
    int32_t index2 = pickedUpLayerTypeArray.size();--index2 >= 0; )
        {

                        if(countedPickedUpLayerInterfaceFactory->getPickedUpLayerType() == pickedUpLayerTypeArray[index2])
                        
                                    {
                                    
                        if(nextCountedLayerInterfaceFactory->getTotal() > 0)
                        
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
            
    public: CountedLayerInterfaceFactoryPart* getCountedLayerInterfaceFactoryForSlot(int32_t slotIndex){

    int32_t currentSlot = 0;;
    

    CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer = dynamic_cast<CollidableDestroyableDamageableLayer*>(this->ownerLayerInterface);;
    

    std::vector<PartInterface*> partInterfaceArray = collidableDestroyableDamageableLayer->getPartInterfaceArray();;
    

    int32_t size = partInterfaceArray.size();;
    

    CountedLayerInterfaceFactoryPart* nextCountedLayerInterfaceFactory;;
    




                        for (
    int32_t index = this->countedIndex;index < size; index++)
        {
nextCountedLayerInterfaceFactory= dynamic_cast<CountedLayerInterfaceFactoryPart*>(collidableDestroyableDamageableLayer->getPartInterfaceArray()[index]);
    

                        if(nextCountedLayerInterfaceFactory->getTotal() > 0)
                        
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

            

