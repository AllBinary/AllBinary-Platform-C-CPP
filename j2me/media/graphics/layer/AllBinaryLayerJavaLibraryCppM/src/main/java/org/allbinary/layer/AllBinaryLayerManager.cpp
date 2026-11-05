
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
        



        #ifndef ORG_ALLBINARY_LAYER_ALLBINARYLAYERMANAGER_CPP
        #define ORG_ALLBINARY_LAYER_ALLBINARYLAYERMANAGER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/layer/AllBinaryLayerManager.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/layer/event/LayerManagerEvent.h>

      
#include <org/allbinary/layer/event/LayerManagerEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/layer/LayerManager.h"
#include "org/allbinary/layer/LayerProcessor.h"
#include "org/allbinary/layer/LayerManagerNoDebug.h"
#include "org/allbinary/layer/AllBinaryLayer.h"


AllBinaryLayerManager::AllBinaryLayerManager() : LayerManager(LayerManagerNoDebug::getInstance()), layerManagerEventHandler(LayerManagerEventHandler::getInstance()), createLayerManagerEvent(new LayerManagerEvent(this, this->layerManagerEventHandler->CREATE)), deleteLayerManagerEvent(new LayerManagerEvent(this, this->layerManagerEventHandler->DELETE)), basicLayerProcessorArray({}){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto AllBinaryLayerManager::getLayerProcessorArray() -> std::vector<LayerProcessor*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->basicLayerProcessorArray;
    
}


    auto AllBinaryLayerManager::setLayerProcessorArray(std::vector<LayerProcessor*> layerProcessorArray) -> void{
this->basicLayerProcessorArray= layerProcessorArray;
    
}


    auto AllBinaryLayerManager::log() -> void{

    int32_t size = this->basicLayerProcessorArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    LayerProcessor* layerProcessorInterface = this->basicLayerProcessorArray[index];;
    
}

}


                //@Throws(Exception.constructor)
            
    auto AllBinaryLayerManager::append(AllBinaryLayer* layerInterface) -> void{

                        if(!this->contains(layerInterface))
                        
                                    {
                                    this->appendProcessors(layerInterface);
    
LayerManager::append(layerInterface);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryLayerManager::appendAt(AllBinaryLayer* layerInterface, int32_t index) -> void{

                        if(!this->contains(layerInterface))
                        
                                    {
                                    this->appendProcessors(layerInterface);
    
LayerManager::appendAt(layerInterface, index);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryLayerManager::appendProcessors(AllBinaryLayer* layerInterface) -> void{
this->createLayerManagerEvent->setLayerInterface(layerInterface);
    
this->layerManagerEventHandler->fireEvent(this->createLayerManagerEvent);
    

    LayerProcessor* layerProcessorInterface;;
    




                        for (
    int32_t index = this->basicLayerProcessorArray.size();--index >= 0; )
        {
layerProcessorInterface= this->basicLayerProcessorArray[index];
    

                        if(layerProcessorInterface->isProcessorLayer(layerInterface))
                        
                                    {
                                    layerProcessorInterface->getLayerManager()->append(layerInterface);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AllBinaryLayerManager::remove(AllBinaryLayer* layerInterface) -> void{
this->deleteLayerManagerEvent->setLayerInterface(layerInterface);
    
this->layerManagerEventHandler->fireDeleteEvent(this->deleteLayerManagerEvent);
    

    LayerProcessor* layerProcessorInterface;;
    




                        for (
    int32_t index = this->basicLayerProcessorArray.size();--index >= 0; )
        {
layerProcessorInterface= this->basicLayerProcessorArray[index];
    
layerProcessorInterface->getLayerManager()->remove(layerInterface);
    
}

LayerManager::remove(layerInterface);
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryLayerManager::process() -> void{

    LayerProcessor* layerProcessorInterface;;
    

    int32_t size = this->basicLayerProcessorArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
layerProcessorInterface= this->basicLayerProcessorArray[index];
    
layerProcessorInterface->process(this);
    
}

}


                //@Throws(Exception.constructor)
            
    auto AllBinaryLayerManager::cleanup() -> void{

    LayerProcessor* layerProcessorInterface;;
    

    int32_t size = this->basicLayerProcessorArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
layerProcessorInterface= this->basicLayerProcessorArray[index];
    
layerProcessorInterface->getLayerManager()->cleanup();
    
}

LayerManager::cleanup();
    
}




        #endif //ORG_ALLBINARY_LAYER_ALLBINARYLAYERMANAGER_CPP
