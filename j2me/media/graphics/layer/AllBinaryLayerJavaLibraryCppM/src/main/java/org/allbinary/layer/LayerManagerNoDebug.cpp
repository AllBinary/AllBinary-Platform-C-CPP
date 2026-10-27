
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
        



        #ifndef ORG_ALLBINARY_LAYER_LAYERMANAGERNODEBUG_CPP
        #define ORG_ALLBINARY_LAYER_LAYERMANAGERNODEBUG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/layer/LayerManagerNoDebug.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/layer/LayerManagerLoggingBase.h"


LayerManagerNoDebug::LayerManagerNoDebug() {
        }
        auto LayerManagerNoDebug::instance_owner() -> LayerManagerNoDebug* { static std::unique_ptr<LayerManagerNoDebug> value(new LayerManagerNoDebug()); return value.get(); }
LayerManagerNoDebug* LayerManagerNoDebug::instance = LayerManagerNoDebug::instance_owner();

    auto LayerManagerNoDebug::getInstance() -> LayerManagerNoDebug*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LayerManagerNoDebug::instance;
    
}




        #endif //ORG_ALLBINARY_LAYER_LAYERMANAGERNODEBUG_CPP
