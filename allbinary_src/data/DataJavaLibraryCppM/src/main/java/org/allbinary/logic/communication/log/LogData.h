
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGDATA_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGDATA_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/io/path/AbPathData.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LogData
            : public Object
         {

    public: const int64_t MAX = 5000000;

    public: const std::string extension = "log";

    public: const std::string backupFileExt = AbPathData::getInstance().EXTENSION_SEP +"bak" +AbPathData::getInstance().EXTENSION_SEP +"txt";

    public: const std::string ALLBINARY = "allbinary";

    public: const std::string NAME = "LOG_NAME";

    public: const std::string DESCRIPTION = "LOG_DESCRIPTION";

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGDATA_H
