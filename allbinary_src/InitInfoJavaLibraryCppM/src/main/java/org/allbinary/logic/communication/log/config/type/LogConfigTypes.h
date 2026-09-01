
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

            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/communication/log/config/LoggingInitInfo.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LogConfigTypeFactory.h"
#include "LogConfigTypeData.h"
#include "LogConfigType.h"

class LogConfigTypes
            : public Object
         {

    public: static const std::string JSP_ERROR_NO_FUNCTION = "in JSP Not In Function";

    public: static BasicArrayList LOGGING = BasicArrayListD();

                    static int32_t initResult;
                static int32_t init();
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void init();

                //@Throws(Exception.constructor)
            
    public: static LogConfigType getInstance(Node node);

private: LogConfigTypes();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPES_H
