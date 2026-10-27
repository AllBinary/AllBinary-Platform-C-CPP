
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

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/layer/event/LayerManagerEvent.h>

      
#include <org/allbinary/layer/event/LayerManagerEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/layer/LayerManager.h"
#include "org/allbinary/layer/LayerProcessor.h"
#include "org/allbinary/layer/LayerManagerNoDebug.h"
#include "org/allbinary/layer/AllBinaryLayer.h"

class AllBinaryLayerManager: public LayerManager {

    private: LayerManagerEventHandler* layerManagerEventHandler = LayerManagerEventHandler::getInstance();

    private: LayerManagerEvent* createLayerManagerEvent = new LayerManagerEvent(this, this->layerManagerEventHandler->CREATE);

    private: LayerManagerEvent* deleteLayerManagerEvent = new LayerManagerEvent(this, this->layerManagerEventHandler->DELETE);

    private: std::vector<LayerProcessor*> basicLayerProcessorArray = {};

protected: AllBinaryLayerManager() : LayerManager(LayerManagerNoDebug::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    protected: std::vector<LayerProcessor*> getLayerProcessorArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicLayerProcessorArray;
    
}


    public: void setLayerProcessorArray(std::vector<LayerProcessor*> layerProcessorArray){
this->basicLayerProcessorArray= layerProcessorArray;
    
}


    public: void log(){

    int32_t size = this->basicLayerProcessorArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    LayerProcessor* layerProcessorInterface = this->basicLayerProcessorArray[index];;
    
}

}


                //@Throws(Exception.constructor)
            
    public: void append(AllBinaryLayer* layerInterface){

                        if(!this->contains(layerInterface))
                        
                                    {
                                    this->appendProcessors(layerInterface);
    
super.append(layerInterface);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: void appendAt(AllBinaryLayer* layerInterface, int32_t index){

                        if(!this->contains(layerInterface))
                        
                                    {
                                    this->appendProcessors(layerInterface);
    
super.appendAt(layerInterface, index);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    private: void appendProcessors(AllBinaryLayer* layerInterface){
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

    public: void remove(AllBinaryLayer* layerInterface){
this->deleteLayerManagerEvent->setLayerInterface(layerInterface);
    
this->layerManagerEventHandler->fireDeleteEvent(this->deleteLayerManagerEvent);
    

    LayerProcessor* layerProcessorInterface;;
    




                        for (
    int32_t index = this->basicLayerProcessorArray.size();--index >= 0; )
        {
layerProcessorInterface= this->basicLayerProcessorArray[index];
    
layerProcessorInterface->getLayerManager()->remove(layerInterface);
    
}

super.remove(layerInterface);
    
}


                //@Throws(Exception.constructor)
            
    public: void process(){

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
            
    public: void cleanup(){

    LayerProcessor* layerProcessorInterface;;
    

    int32_t size = this->basicLayerProcessorArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
layerProcessorInterface= this->basicLayerProcessorArray[index];
    
layerProcessorInterface->getLayerManager()->cleanup();
    
}

super.cleanup();
    
}


};

            

