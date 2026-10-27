
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LogConfigData
            : public Object
         {

    private: static LogConfigData* instance() { static std::unique_ptr<LogConfigData> value(new LogConfigData()); return value.get(); }

    public: static LogConfigData* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LogConfigData::instance();
    
}


private: LogConfigData(){
}


    public: const std::string NAME = "LOG_CONFIG_NAME";

    public: const std::string DESCRIPTION = "LOG_CONFIG_DESCRIPTION";

    public: const std::string FILE = "LOG_CONFIG_FILE";

};

            

