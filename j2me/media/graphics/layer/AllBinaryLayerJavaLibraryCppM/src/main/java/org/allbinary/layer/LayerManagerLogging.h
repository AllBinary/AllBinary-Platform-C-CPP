
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
        



        #ifndef ORG_ALLBINARY_LAYER_LAYERMANAGERLOGGING_H
        #define ORG_ALLBINARY_LAYER_LAYERMANAGERLOGGING_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
class TsUtil;
class LogUtil;
class StringMaker;
class StringUtil;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/layer/LayerManagerLoggingBase.h"
class AllBinaryLayer;
class LayerManager;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LayerManagerLogging: public LayerManagerLoggingBase {

    private: static LayerManagerLogging* instance_owner();
    private: static LayerManagerLogging* instance;

    public: static LayerManagerLogging* getInstance();

    private: static inline bool removeFailed = false;


            
    public: LayerManagerLogging();
        
    /*protected*/ public: LogUtil* logUtil;

    private: StringMaker* stringBuilder;

    private: const std::string APPEND = "append";

    private: const std::string APPEND_ = " append: ";

    private: const std::string _AT_ = " at: ";

    private: const std::string ATTEMPT_REMOVE_ = " Remove Attempt: ";

    private: const std::string REMOVE_ = " Remove: ";

    private: const std::string REMOVE = "remove";

    private: const std::string DID_NOT_REMOVE = " Did not remove: ";

    private: const std::string CLEAR = " Clear List";

                //@Throws(Exception.constructor)
            
    public: void append(AllBinaryLayer* layerInterface);

    public: void appendAt(AllBinaryLayer* layerInterface, int32_t index);

    public: void remove(AllBinaryLayer* layerInterface);

    public: void removeResult(LayerManager* layerManager, AllBinaryLayer* layerInterface, bool result);

    private: void log(LayerManager* layerManager);

    public: void clear();

};

            


        #endif //ORG_ALLBINARY_LAYER_LAYERMANAGERLOGGING_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LAYER_LAYERMANAGERLOGGING_H_COMPLETE)
        #define ORG_ALLBINARY_LAYER_LAYERMANAGERLOGGING_H_COMPLETE
        #if __has_include(<org/allbinary/TsUtil.h>)
#include <org/allbinary/TsUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include("org/allbinary/layer/LayerManagerLoggingBase.h")
#include "org/allbinary/layer/LayerManagerLoggingBase.h"
#endif
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif
#if __has_include("org/allbinary/layer/LayerManager.h")
#include "org/allbinary/layer/LayerManager.h"
#endif

        #endif
    
