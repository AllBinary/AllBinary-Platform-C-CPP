
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_EXCEPTION_EXCEPTIONUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_JAVA_EXCEPTION_EXCEPTIONUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/java/exception/ExceptionUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Throwable.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //ActualPlatform
auto ExceptionUtil::instance_owner() -> ExceptionUtil* { static std::unique_ptr<ExceptionUtil> value(new ExceptionUtil()); return value.get(); }
ExceptionUtil* ExceptionUtil::instance = ExceptionUtil::instance_owner();

    /*actual*/ auto ExceptionUtil::getInstance() -> ExceptionUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ExceptionUtil::instance;
    
}


ExceptionUtil::ExceptionUtil() : PRETEND_EXCEPTION(new Exception("Not Really An Exception")){
}


    /*actual*/ auto ExceptionUtil::getStackTrace(Throwable* e) -> std::string{

                        if(true)
                        
                                    {
                                    
                                    }
                                

                        if(true)
                        
                                    {
                                    
                                    }
                                

                        if(true)
                        
                                    {
                                    
                                    }
                                

                        if(true)
                        
                                    {
                                    
                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->NONE;
    
}




        #endif //ORG_ALLBINARY_LOGIC_JAVA_EXCEPTION_EXCEPTIONUTIL_CPP
