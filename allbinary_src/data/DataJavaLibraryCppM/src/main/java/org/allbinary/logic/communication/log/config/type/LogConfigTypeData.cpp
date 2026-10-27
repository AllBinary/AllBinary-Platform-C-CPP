
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEDATA_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/log/config/type/LogConfigTypeData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto LogConfigTypeData::instance_owner() -> LogConfigTypeData* { static std::unique_ptr<LogConfigTypeData> value(new LogConfigTypeData()); return value.get(); }
LogConfigTypeData* LogConfigTypeData::instance = LogConfigTypeData::instance_owner();

    auto LogConfigTypeData::getInstance() -> LogConfigTypeData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LogConfigTypeData::instance;
    
}


LogConfigTypeData::LogConfigTypeData(){
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEDATA_CPP
