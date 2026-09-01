
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

                    static int32_t initResult = LogConfigTypes::init();
                static int32_t init() { 
                    
LogConfigTypes::init();
    


                    return 0;
                }
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void init(){

        try {
            PreLogUtil::put("Initialize LogconfigTypes", "LogConfigTypes", "init()");
    
LogConfigTypeFactory::getInstance();
    

    LoggingInitInfo loggingInitInfo = LoggingInitInfo();;
    

    BasicArrayList logConfigTypeVector = loggingInitInfo.getTypeList();;
    
PreLogUtil::put("Number Of Log Configs: " +loggingInitInfo.getNumberOfLogConfigs(), "LogConfigTypes", "init()");
    
PreLogUtil::put("Number Of Log Config Type Names: " +logConfigTypeVector.size(), "LogConfigTypes", "init()");
    
LogConfigTypes::LOGGING.addAllList(logConfigTypeVector);
    
LogConfigTypes::LOGGING.add(LogConfigTypeFactory::getInstance().NETBEANS_MODULE);
    

                //: 
} catch(e) 
            {
PreLogUtil::putSE("Unable to initialize LogConfigTypes", "LogConfigTypes", "init()", e);
    
}

}


                //@Throws(Exception.constructor)
            
    public: static LogConfigType getInstance(Node node){

    Node nameValueNode = DomSearchHelper::getNode(LogConfigTypeData::getInstance().NAME, node.getChildNodes());;
    

    std::string name = DomNodeHelper::getTextNodeValue(nameValueNode);;
    

    Node descriptionValueNode = DomSearchHelper::getNodeNoThrow(LogConfigTypeData::getInstance().DESCRIPTION, node.getChildNodes());;
    

                        if(descriptionValueNode != 
                                    nullptr
                                )
                        
                                    {
                                    
    std::string description = DomNodeHelper::getTextNodeValue(descriptionValueNode);;
    

                                    }
                                

    BasicArrayList availableLogConfigTypes = LogConfigType::availableLogConfigTypes;;
    

    int32_t size = availableLogConfigTypes.size();;
    

    LogConfigType logConfigType;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
logConfigType= availableLogConfigTypes.get(index) as LogConfigType;
    

                        if(logConfigType.getName().compareTo(name) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return logConfigType;
    

                                    }
                                
}




                            throw Exception("No Such LogConfigType: " +name);
                    
}


private: LogConfigTypes(){
}


};

            

