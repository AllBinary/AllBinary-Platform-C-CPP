
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPES_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPES_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class DomNodeHelper;
class DomSearchHelper;
class PreLogUtil;
class LoggingInitInfo;
class BasicArrayList;
class BasicArrayListD;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class LogConfigTypeFactory;
class LogConfigTypeData;
class LogConfigType;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LogConfigTypes
            : public virtual Object
         {

    public: static inline const std::string JSP_ERROR_NO_FUNCTION = "in JSP Not In Function";

    public: static BasicArrayList* LOGGING;

                    static int32_t initResult;
                static int32_t init();
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void init();

                //@Throws(Exception.constructor)
            
    public: static LogConfigType* getInstance(Node* node);

private: LogConfigTypes();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPES_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPES_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPES_H_COMPLETE
        #if __has_include(<org/allbinary/data/tree/dom/DomNodeHelper.h>)
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomSearchHelper.h>)
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/config/LoggingInitInfo.h>)
#include <org/allbinary/logic/communication/log/config/LoggingInitInfo.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h")
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/config/type/LogConfigTypeData.h")
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypeData.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/config/type/LogConfigType.h")
#include "org/allbinary/logic/communication/log/config/type/LogConfigType.h"
#endif

        #endif
    
