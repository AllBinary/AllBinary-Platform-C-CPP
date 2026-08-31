
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
        



            #include "../../../../../java/lang/Exception.h"
        
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
        
class DestroyedLayerProcessor: public BasicLayerProcessor {
        

    private: static DESTROYED_LAYER_PROCESSOR: BasicLayerProcessor = BasicLayerProcessor.NULL_LAYER_PROCESSOR;

    public static init(){
DestroyedLayerProcessor.DESTROYED_LAYER_PROCESSOR= new DestroyedLayerProcessor();
    
}


    public static BasicLayerProcessor getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DestroyedLayerProcessor.DESTROYED_LAYER_PROCESSOR;
    
}


private constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public process(AllBinaryLayerManager allBinaryLayerManager){

    list: BasicArrayList = this.getList()!;;
    

    size: int32_t = list.size()!;;
    

    destroyedEventHandler: DestroyedEventHandler = DestroyedEventHandler.getInstance()!;;
    

    destroyEventCircularStaticPool: DestroyEventCircularStaticPool = DestroyEventCircularStaticPool.getInstance()!;;
    

    destroyedEvent: DestroyedEvent;;
    

    layerInterface: AllBinaryLayer;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    layerInterfaceCanBeNull: any = list.objectArray[index];;
    

                        if(layerInterfaceCanBeNull != 
                                    null
                                )
                        
                                    {
                                    layerInterface= layerInterfaceCanBeNull as AllBinaryLayer;
    
allBinaryLayerManager!.remove(layerInterface);
    
destroyedEvent= destroyEventCircularStaticPool!.getInstanceForLayer(layerInterface);
    
destroyedEventHandler!.fireEvent(destroyedEvent);
    

                                    }
                                
                        else {
                            
    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

                        }
                            
}

list.clear();
    
}


};

            

