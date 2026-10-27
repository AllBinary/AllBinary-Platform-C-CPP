
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPESDATA_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPESDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/log/config/type/LogConfigTypesData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

LogConfigTypesData::LogConfigTypesData() {
        }
        auto LogConfigTypesData::instance_owner() -> LogConfigTypesData* { static std::unique_ptr<LogConfigTypesData> value(new LogConfigTypesData()); return value.get(); }
LogConfigTypesData* LogConfigTypesData::instance = LogConfigTypesData::instance_owner();

    auto LogConfigTypesData::getInstance() -> LogConfigTypesData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LogConfigTypesData::instance;
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPESDATA_CPP
