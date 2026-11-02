
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGFORMATUTIL_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGFORMATUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        























                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //NoPlatform
class LogFormatUtil
            : public virtual Object
         {

    private: static inline LogFormatUtil* instance;

    public: static LogFormatUtil* getInstance();



    public: std::string get(std::string className, std::string functionName, std::string specialMessage, Object* exception);
    public: std::string get(std::string className, std::string functionName, std::string specialMessage, const std::string& exception) { return get(className, functionName, specialMessage, JavaString::box(exception)); }

    public: std::string getS(std::string className, std::string functionName, std::string specialMessage);

    public: std::string getO(Object* exception);
    public: std::string getO(const std::string& exception) { return getO(JavaString::box(exception)); }

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGFORMATUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGFORMATUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGFORMATUTIL_H_COMPLETE
        







        #endif
    
