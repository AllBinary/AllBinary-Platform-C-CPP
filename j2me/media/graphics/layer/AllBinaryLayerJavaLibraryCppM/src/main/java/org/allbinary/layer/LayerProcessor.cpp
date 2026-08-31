
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
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LayerProcessorInterface.h"
#include "LayerManager.h"
#include "AllBinaryLayerManager.h"
#include "AllBinaryLayer.h"

class LayerProcessor
            : public Object
        : public LayerProcessorInterface {
        

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const layerManager: LayerManager;

public constructor (LayerManager layerManager){

            super();
        this.layerManager= layerManager;
    
}


                //@Throws(Exception.constructor)
            
    public processAt(AllBinaryLayerManager allBinaryLayerManager, AllBinaryLayer layerInterface, int32_t index){



                            throw new Exception(this.commonStrings!.NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    public bool isProcessorLayer(AllBinaryLayer layerInterface){



                            throw new Exception(this.commonStrings!.NOT_IMPLEMENTED);
                    
}


    public LayerManager getLayerManager(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.layerManager;
    
}


                //@Throws(Exception.constructor)
            
    public process(AllBinaryLayerManager allBinaryLayerManager){

    layerManager: LayerManager = this.getLayerManager()!;;
    

    size: int32_t = layerManager!.getSize()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
this.processAt(allBinaryLayerManager, layerManager!.getLayerAt(index) as AllBinaryLayer, index);
    
}

}


};

            

