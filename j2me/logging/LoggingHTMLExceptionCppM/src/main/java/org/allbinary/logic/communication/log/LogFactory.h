
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGFACTORY_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Log;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //ActualPlatform
/*actual*/ class LogFactory
            : public virtual Object
         {

    /*actual*/ public: static Log* getInstance(std::string specialMessage, Object* anyType, std::string functionName, Object* exception);

    /*actual*/ public: static Log* getInstanceF(std::string specialMessage, Object* anyType, std::string functionName);
    public: static Log* getInstanceF(std::string specialMessage, const std::string& anyType, std::string functionName) { return getInstanceF(specialMessage, JavaString::box(anyType), functionName); }


            
    public: LogFactory();
        
};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/logic/communication/log/Log.h")
#include "org/allbinary/logic/communication/log/Log.h"
#endif

        #endif
    
