
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_EXCEPTION_EXCEPTIONUTIL_H
        #define ORG_ALLBINARY_LOGIC_JAVA_EXCEPTION_EXCEPTIONUTIL_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Throwable.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayOutputStream.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //ActualPlatform
/*actual*/ class ExceptionUtil
            : public Object
         {

    private: static ExceptionUtil instance() { return ExceptionUtil(); }

    /*actual*/ public: static ExceptionUtil getInstance();

private: ExceptionUtil();

    /*actual*/ public: const Exception PRETEND_EXCEPTION = Exception("Not Really An Exception");

    private: const std::string NONE = "No Stack Trace";

    /*actual*/ public: std::string getStackTrace(Throwable e);

};

            


        #endif //ORG_ALLBINARY_LOGIC_JAVA_EXCEPTION_EXCEPTIONUTIL_H
