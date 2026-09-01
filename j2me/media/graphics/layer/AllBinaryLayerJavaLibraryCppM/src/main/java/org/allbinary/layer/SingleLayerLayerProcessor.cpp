
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
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LayerProcessor.h"
#include "SingleLayerLayerManager.h"
#include "LayerManager.h"
#include "AllBinaryLayer.h"
#include "AllBinaryLayerManager.h"

class SingleLayerLayerProcessor: public LayerProcessor {

public: SingleLayerLayerProcessor(){
            super(SingleLayerLayerManager());
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: void process(AllBinaryLayerManager allBinaryLayerManager){

    LayerManager layerManager = this->getLayerManager();;
    
this->processAt(allBinaryLayerManager, layerManager.getLayerAt(0) as AllBinaryLayer, 0);
    
}


};

            

