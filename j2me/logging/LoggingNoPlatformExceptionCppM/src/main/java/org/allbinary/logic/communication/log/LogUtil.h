
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGUTIL_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGUTIL_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/RuntimeException.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Log.h"
//NoPlatform
// class LogUtil
            : public Object
         {

    private: static LogUtil instance() { return LogUtil(); }

    public: static LogUtil getInstance();



    public: void putL(Log log);

    public: void putF(std::string specialMessage, Object* anyType, std::string functionName);

    public: void putF(std::string specialMessage, std::string className, std::string functionName);

    public: void put(std::string specialMessage, Object* anyType, std::string functionName, Object* exception);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGUTIL_H
