
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPES_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/log/config/type/LogConfigTypes.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/communication/log/config/LoggingInitInfo.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypeData.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigType.h"

BasicArrayList* LogConfigTypes::LOGGING = new BasicArrayListD();
int32_t LogConfigTypes::initResult = LogConfigTypes::init();
        auto LogConfigTypes::init() -> int32_t {
                    
LogConfigTypes::init();
    


                    return 0;
        }
                
LogConfigTypes::LogConfigTypes(){
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto LogConfigTypes::init() -> void{

        try {
            PreLogUtil::put("Initialize LogconfigTypes", "LogConfigTypes", "init()");
    
LogConfigTypeFactory::getInstance();
    

    LoggingInitInfo* loggingInitInfo = new LoggingInitInfo();;
    

    BasicArrayList* logConfigTypeVector = loggingInitInfo->getTypeList();;
    
PreLogUtil::put(JavaString::valueOf("Number Of Log Configs: ") +JavaString::valueOf(loggingInitInfo->getNumberOfLogConfigs()), "LogConfigTypes", "init()");
    
PreLogUtil::put(JavaString::valueOf("Number Of Log Config Type Names: ") +JavaString::valueOf(logConfigTypeVector->size()), "LogConfigTypes", "init()");
    
LogConfigTypes::LOGGING->addAllList(logConfigTypeVector);
    
LogConfigTypes::LOGGING->add(LogConfigTypeFactory::getInstance()->NETBEANS_MODULE);
    

                //: 
} catch(Exception& e) 
            {
PreLogUtil::putSE("Unable to initialize LogConfigTypes", "LogConfigTypes", "init()", &e);
    
}

}


                //@Throws(Exception.constructor)
            
    auto LogConfigTypes::getInstance(Node* node) -> LogConfigType*{

    Node* nameValueNode = DomSearchHelper::getNode(LogConfigTypeData::getInstance()->NAME, node->getChildNodes());;
    

    std::string name = DomNodeHelper::getTextNodeValue(nameValueNode);;
    

    Node* descriptionValueNode = DomSearchHelper::getNodeNoThrow(LogConfigTypeData::getInstance()->DESCRIPTION, node->getChildNodes());;
    

                        if(descriptionValueNode != 
                                    nullptr
                                )
                        
                                    {
                                    
    std::string description = DomNodeHelper::getTextNodeValue(descriptionValueNode);;
    

                                    }
                                

    BasicArrayList* availableLogConfigTypes = LogConfigType::availableLogConfigTypes;;
    

    int32_t size = availableLogConfigTypes->size();;
    

    LogConfigType* logConfigType;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
logConfigType= dynamic_cast<LogConfigType*>(availableLogConfigTypes->get(index));
    

                        if(logConfigType->getName().compare(name) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return logConfigType;
    

                                    }
                                
}




                            throw Exception(JavaString::valueOf("No Such LogConfigType: ") +JavaString::valueOf(name));
                    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPES_CPP
