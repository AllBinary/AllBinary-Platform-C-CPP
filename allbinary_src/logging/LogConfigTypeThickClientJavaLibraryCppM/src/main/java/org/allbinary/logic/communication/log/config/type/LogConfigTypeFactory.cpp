
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
        



            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LogConfigType.h"
#include "LogConfigTypes.h"

class LogConfigTypeFactory
            : public Object
         {

    private: static LogConfigTypeFactory instance() { return LogConfigTypeFactory(); }

    public: static LogConfigTypeFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LogConfigTypeFactory::instance();
    
}


    private: const std::string NO_DESCRIPTION = "No Description";

    public: const LogConfigType OS = LogConfigType("Operating System", this->NO_DESCRIPTION);

    public: const LogConfigType FACTORYERROR = LogConfigType("Factory Error", this->NO_DESCRIPTION);

    public: const LogConfigType FILE = LogConfigType("File", this->NO_DESCRIPTION);

    public: const LogConfigType FILEERROR = LogConfigType("File Error", this->NO_DESCRIPTION);

    public: const LogConfigType IDLOGGING = LogConfigType("ID Logging", this->NO_DESCRIPTION);

    public: const LogConfigType REPLACE = LogConfigType("Replace", this->NO_DESCRIPTION);

    public: const LogConfigType REPLACE_INFO = LogConfigType("Replace Info", this->NO_DESCRIPTION);

    public: const LogConfigType REPLACEERROR = LogConfigType("Replace Error", this->NO_DESCRIPTION);

private: LogConfigTypeFactory(){
LogConfigTypes::LOGGING.add(OS);
    
LogConfigTypes::LOGGING.add(this->FACTORYERROR);
    
}


};

            

