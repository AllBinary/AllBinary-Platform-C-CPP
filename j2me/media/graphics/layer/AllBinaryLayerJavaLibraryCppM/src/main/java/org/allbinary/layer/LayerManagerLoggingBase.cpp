
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
        



        #ifndef ORG_ALLBINARY_LAYER_LAYERMANAGERLOGGINGBASE_CPP
        #define ORG_ALLBINARY_LAYER_LAYERMANAGERLOGGINGBASE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/layer/LayerManagerLoggingBase.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/LayerManager.h"


LayerManagerLoggingBase::LayerManagerLoggingBase() {
        }
        
                //@Throws(Exception.constructor)
            
    auto LayerManagerLoggingBase::append(AllBinaryLayer* layerInterface) -> void{
}


    auto LayerManagerLoggingBase::appendAt(AllBinaryLayer* layerInterface, int32_t index) -> void{
}


    auto LayerManagerLoggingBase::remove(AllBinaryLayer* layerInterface) -> void{
}


    auto LayerManagerLoggingBase::removeResult(LayerManager* layerManager, AllBinaryLayer* layerInterface, bool result) -> void{
}


    auto LayerManagerLoggingBase::clear() -> void{
}




        #endif //ORG_ALLBINARY_LAYER_LAYERMANAGERLOGGINGBASE_CPP
