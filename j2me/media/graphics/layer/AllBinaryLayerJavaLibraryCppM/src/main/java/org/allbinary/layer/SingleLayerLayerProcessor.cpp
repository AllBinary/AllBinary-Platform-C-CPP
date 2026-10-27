
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

        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/layer/LayerProcessor.h"
#include "org/allbinary/layer/SingleLayerLayerManager.h"
#include "org/allbinary/layer/LayerManager.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"

class SingleLayerLayerProcessor: public LayerProcessor {

public: SingleLayerLayerProcessor() : LayerProcessor(new SingleLayerLayerManager()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: void process(AllBinaryLayerManager* allBinaryLayerManager){

    LayerManager* layerManager = this->getLayerManager();;
    
this->processAt(allBinaryLayerManager, dynamic_cast<AllBinaryLayer*>(layerManager->getLayerAt(0)), 0);
    
}


};

            

