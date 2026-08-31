
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

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Throwable.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/PrintStream.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //ActualPlatform
/*actual*/ class ExceptionUtil
            : public Object
         {
        

    private: static const instance: ExceptionUtil = new ExceptionUtil();

    /*actual*/ public static ExceptionUtil getInstance();

    /*actual*/ public static const PRETEND_EXCEPTION: Exception = new Exception("Not Really An Exception");

private constructor ();

    private: const NONE: string = "No Stack Trace";

    /*actual*/ public string getStackTrace(Throwable e);

};

            


        #endif //ORG_ALLBINARY_LOGIC_JAVA_EXCEPTION_EXCEPTIONUTIL_H
