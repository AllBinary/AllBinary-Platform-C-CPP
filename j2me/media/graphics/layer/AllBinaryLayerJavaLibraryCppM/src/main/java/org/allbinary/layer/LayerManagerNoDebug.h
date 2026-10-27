
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
        



        #ifndef ORG_ALLBINARY_LAYER_LAYERMANAGERNODEBUG_H
        #define ORG_ALLBINARY_LAYER_LAYERMANAGERNODEBUG_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/layer/LayerManagerLoggingBase.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LayerManagerNoDebug: public LayerManagerLoggingBase {

    private: static LayerManagerNoDebug* instance_owner();
    private: static LayerManagerNoDebug* instance;

    public: static LayerManagerNoDebug* getInstance();


            
    public: LayerManagerNoDebug();
        
};

            


        #endif //ORG_ALLBINARY_LAYER_LAYERMANAGERNODEBUG_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LAYER_LAYERMANAGERNODEBUG_H_COMPLETE)
        #define ORG_ALLBINARY_LAYER_LAYERMANAGERNODEBUG_H_COMPLETE
        #if __has_include("org/allbinary/layer/LayerManagerLoggingBase.h")
#include "org/allbinary/layer/LayerManagerLoggingBase.h"
#endif

        #endif
    
