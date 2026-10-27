
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
        



        #ifndef ORG_ALLBINARY_LAYER_BASICLAYERPROCESSOR_H
        #define ORG_ALLBINARY_LAYER_BASICLAYERPROCESSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class LogUtil;
class CommonStrings;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AllBinaryLayer;
class AllBinaryLayerManager;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicLayerProcessor
            : public virtual Object
         {

    private: static BasicLayerProcessor* NULL_LAYER_PROCESSOR_owner();
    public: static BasicLayerProcessor* NULL_LAYER_PROCESSOR;

    /*protected*/ public: LogUtil* logUtil;

    private: BasicArrayList* list;

/*protected*/ public: BasicLayerProcessor();

    public: void add(AllBinaryLayer* layerInterface);

                //@Throws(Exception.constructor)
            
    public: void process(AllBinaryLayerManager* allBinaryLayerManager);

    public: BasicArrayList* getList();

};

            


        #endif //ORG_ALLBINARY_LAYER_BASICLAYERPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LAYER_BASICLAYERPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_LAYER_BASICLAYERPROCESSOR_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif
#if __has_include("org/allbinary/layer/AllBinaryLayerManager.h")
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#endif

        #endif
    
