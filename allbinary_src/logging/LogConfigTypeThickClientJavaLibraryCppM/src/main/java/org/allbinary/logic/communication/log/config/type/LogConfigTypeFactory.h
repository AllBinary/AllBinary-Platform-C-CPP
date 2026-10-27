
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEFACTORY_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/log/config/type/LogConfigType.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypes.h"

class LogConfigTypeFactory
            : public Object
         {

    private: static LogConfigTypeFactory* instance() { static std::unique_ptr<LogConfigTypeFactory> value(new LogConfigTypeFactory()); return value.get(); }

    public: static LogConfigTypeFactory* getInstance();

    private: const std::string NO_DESCRIPTION = "No Description";

    public: LogConfigType* OS = new LogConfigType("Operating System", this->NO_DESCRIPTION);

    public: LogConfigType* FACTORYERROR = new LogConfigType("Factory Error", this->NO_DESCRIPTION);

    public: LogConfigType* FILE = new LogConfigType("File", this->NO_DESCRIPTION);

    public: LogConfigType* FILEERROR = new LogConfigType("File Error", this->NO_DESCRIPTION);

    public: LogConfigType* IDLOGGING = new LogConfigType("ID Logging", this->NO_DESCRIPTION);

    public: LogConfigType* REPLACE = new LogConfigType("Replace", this->NO_DESCRIPTION);

    public: LogConfigType* REPLACE_INFO = new LogConfigType("Replace Info", this->NO_DESCRIPTION);

    public: LogConfigType* REPLACEERROR = new LogConfigType("Replace Error", this->NO_DESCRIPTION);

private: LogConfigTypeFactory();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEFACTORY_H
