
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
        



        #ifndef ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYEDLAYERPROCESSOR_CPP
        #define ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYEDLAYERPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/combat/destroy/DestroyedLayerProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/combat/destroy/event/DestroyEventCircularStaticPool.h>

      
#include <org/allbinary/game/combat/destroy/event/DestroyedEvent.h>

      
#include <org/allbinary/game/combat/destroy/event/DestroyedEventHandler.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/layer/BasicLayerProcessor.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
BasicLayerProcessor* DestroyedLayerProcessor::DESTROYED_LAYER_PROCESSOR = BasicLayerProcessor::NULL_LAYER_PROCESSOR;

DestroyedLayerProcessor::DestroyedLayerProcessor(){
}


    auto DestroyedLayerProcessor::init() -> void{
DestroyedLayerProcessor::DESTROYED_LAYER_PROCESSOR= new DestroyedLayerProcessor();
    
}


    auto DestroyedLayerProcessor::getInstance() -> BasicLayerProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return DestroyedLayerProcessor::DESTROYED_LAYER_PROCESSOR;
    
}


                //@Throws(Exception.constructor)
            
    auto DestroyedLayerProcessor::process(AllBinaryLayerManager* allBinaryLayerManager) -> void{

    BasicArrayList* list = this->getList();;
    

    int32_t size = list->size();;
    

    DestroyedEventHandler* destroyedEventHandler = DestroyedEventHandler::getInstance();;
    

    DestroyEventCircularStaticPool* destroyEventCircularStaticPool = DestroyEventCircularStaticPool::getInstance();;
    

    DestroyedEvent* destroyedEvent;;
    

    AllBinaryLayer* layerInterface;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Object* layerInterfaceCanBeNull = list->objectArray[index];;
    

                        if(layerInterfaceCanBeNull != 
                                    nullptr
                                )
                        
                                    {
                                    layerInterface= dynamic_cast<AllBinaryLayer*>(layerInterfaceCanBeNull);
    
allBinaryLayerManager->remove(layerInterface);
    
destroyedEvent= destroyEventCircularStaticPool->getInstanceForLayer(layerInterface);
    
destroyedEventHandler->fireEvent(destroyedEvent);
    

                                    }
                                
                        else {
                            
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

                        }
                            
}

list->clear();
    
}




        #endif //ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYEDLAYERPROCESSOR_CPP
