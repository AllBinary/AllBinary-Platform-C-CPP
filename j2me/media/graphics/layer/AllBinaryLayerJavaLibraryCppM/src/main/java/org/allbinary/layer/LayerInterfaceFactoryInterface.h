
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
        



        #ifndef ORG_ALLBINARY_LAYER_LAYERINTERFACEFACTORYINTERFACE_H
        #define ORG_ALLBINARY_LAYER_LAYERINTERFACEFACTORYINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/ABHashtable.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AllBinaryLayer;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LayerInterfaceFactoryInterface
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: virtual AllBinaryLayer* getNextInstance(ABHashtable<Object*, Object*>* hashtable, int32_t x, int32_t y, int32_t z) = 0;

};

            


        #endif //ORG_ALLBINARY_LAYER_LAYERINTERFACEFACTORYINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LAYER_LAYERINTERFACEFACTORYINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_LAYER_LAYERINTERFACEFACTORYINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif

        #endif
    
