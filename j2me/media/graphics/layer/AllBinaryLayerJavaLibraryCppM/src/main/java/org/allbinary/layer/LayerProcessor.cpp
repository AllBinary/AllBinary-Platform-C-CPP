
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/layer/LayerProcessorInterface.h"
#include "org/allbinary/layer/LayerManager.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/layer/AllBinaryLayer.h"

class LayerProcessor
            : public Object
        , public LayerProcessorInterface {

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: LayerManager* layerManager;

public: LayerProcessor(LayerManager* layerManager){
this->layerManager= layerManager;
    
}


                //@Throws(Exception.constructor)
            
    public: void processAt(AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index){



                            throw new Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    public: bool isProcessorLayer(AllBinaryLayer* layerInterface){



                            throw new Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


    public: LayerManager* getLayerManager(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->layerManager;
    
}


                //@Throws(Exception.constructor)
            
    public: void process(AllBinaryLayerManager* allBinaryLayerManager){

    LayerManager* layerManager = this->getLayerManager();;
    

    int32_t size = layerManager->getSize();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->processAt(allBinaryLayerManager, dynamic_cast<AllBinaryLayer*>(layerManager->getLayerAt(index)), index);
    
}

}


};

            

