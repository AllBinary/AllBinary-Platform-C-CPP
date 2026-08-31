
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
        



            #include "../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/layer/event/LayerManagerEvent.h>

      
#include <org/allbinary/layer/event/LayerManagerEventHandler.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LayerManager.h"
#include "LayerProcessor.h"
#include "LayerManagerNoDebug.h"
#include "AllBinaryLayer.h"

class AllBinaryLayerManager: public LayerManager {
        

    private: const layerManagerEventHandler: LayerManagerEventHandler = LayerManagerEventHandler.getInstance()!;

    private: const createLayerManagerEvent: LayerManagerEvent = new LayerManagerEvent(this, this.layerManagerEventHandler!.CREATE);

    private: const deleteLayerManagerEvent: LayerManagerEvent = new LayerManagerEvent(this, this.layerManagerEventHandler!.DELETE);

    private: basicLayerProcessorArray: std::vector<LayerProcessor> = [];

protected constructor (){
            super(LayerManagerNoDebug.getInstance());
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    std::vector<LayerProcessor> getLayerProcessorArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.basicLayerProcessorArray;
    
}


    public setLayerProcessorArray(std::vector<LayerProcessor> layerProcessorArray){
this.basicLayerProcessorArray= layerProcessorArray;
    
}


    public log(){

    size: int32_t = this.basicLayerProcessorArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    layerProcessorInterface: LayerProcessor = this.basicLayerProcessorArray[index]!;;
    
}

}


                //@Throws(Exception.constructor)
            
    public append(AllBinaryLayer layerInterface){

                        if(!this.contains(layerInterface))
                        
                                    {
                                    this.appendProcessors(layerInterface);
    
super.append(layerInterface);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public appendAt(AllBinaryLayer layerInterface, int32_t index){

                        if(!this.contains(layerInterface))
                        
                                    {
                                    this.appendProcessors(layerInterface);
    
super.appendAt(layerInterface, index);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    appendProcessors(AllBinaryLayer layerInterface){
this.createLayerManagerEvent!.setLayerInterface(layerInterface);
    
this.layerManagerEventHandler!.fireEvent(this.createLayerManagerEvent);
    

    layerProcessorInterface: LayerProcessor;;
    




                        for (
    index: int32_t = this.basicLayerProcessorArray!.length
                ;--index >= 0; )
        {
layerProcessorInterface= this.basicLayerProcessorArray[index]!;
    

                        if(layerProcessorInterface!.isProcessorLayer(layerInterface))
                        
                                    {
                                    layerProcessorInterface!.getLayerManager()!.append(layerInterface);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public remove(AllBinaryLayer layerInterface){
this.deleteLayerManagerEvent!.setLayerInterface(layerInterface);
    
this.layerManagerEventHandler!.fireDeleteEvent(this.deleteLayerManagerEvent);
    

    layerProcessorInterface: LayerProcessor;;
    




                        for (
    index: int32_t = this.basicLayerProcessorArray!.length
                ;--index >= 0; )
        {
layerProcessorInterface= this.basicLayerProcessorArray[index]!;
    
layerProcessorInterface!.getLayerManager()!.remove(layerInterface);
    
}

super.remove(layerInterface);
    
}


                //@Throws(Exception.constructor)
            
    public process(){

    layerProcessorInterface: LayerProcessor;;
    

    size: int32_t = this.basicLayerProcessorArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
layerProcessorInterface= this.basicLayerProcessorArray[index]!;
    
layerProcessorInterface!.process(this);
    
}

}


                //@Throws(Exception.constructor)
            
    public cleanup(){

    layerProcessorInterface: LayerProcessor;;
    

    size: int32_t = this.basicLayerProcessorArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
layerProcessorInterface= this.basicLayerProcessorArray[index]!;
    
layerProcessorInterface!.getLayerManager()!.cleanup();
    
}

super.cleanup();
    
}


};

            

