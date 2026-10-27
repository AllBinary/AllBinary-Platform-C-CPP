
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
        



        #ifndef ORG_ALLBINARY_LAYER_LAYERMANAGERLOGGINGBASE_H
        #define ORG_ALLBINARY_LAYER_LAYERMANAGERLOGGINGBASE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AllBinaryLayer;
class LayerManager;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LayerManagerLoggingBase
            : public virtual Object
         {


            
    public: LayerManagerLoggingBase();
        
                //@Throws(Exception.constructor)
            
    public: void append(AllBinaryLayer* layerInterface);

    public: void appendAt(AllBinaryLayer* layerInterface, int32_t index);

    public: void remove(AllBinaryLayer* layerInterface);

    public: void removeResult(LayerManager* layerManager, AllBinaryLayer* layerInterface, bool result);

    public: void clear();

};

            


        #endif //ORG_ALLBINARY_LAYER_LAYERMANAGERLOGGINGBASE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LAYER_LAYERMANAGERLOGGINGBASE_H_COMPLETE)
        #define ORG_ALLBINARY_LAYER_LAYERMANAGERLOGGINGBASE_H_COMPLETE
        #if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif
#if __has_include("org/allbinary/layer/LayerManager.h")
#include "org/allbinary/layer/LayerManager.h"
#endif

        #endif
    
