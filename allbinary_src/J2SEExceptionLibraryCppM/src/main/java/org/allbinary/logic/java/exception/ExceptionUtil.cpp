
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
        
            #include "java/lang/Throwable.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/PrintStream.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //ActualPlatform
/*actual*/ class ExceptionUtil
            : public Object
         {

    private: static ExceptionUtil* instance() { static std::unique_ptr<ExceptionUtil> value(new ExceptionUtil()); return value.get(); }

    /*actual*/ public: static ExceptionUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ExceptionUtil::instance();
    
}


    /*actual*/ public: static Exception* PRETEND_EXCEPTION() { static std::unique_ptr<Exception> value(new Exception("Not Really An Exception")); return value.get(); }

private: ExceptionUtil(){
}


    private: const std::string NONE = "No Stack Trace";

    /*actual*/ public: std::string getStackTrace(Throwable* e){

                        if(e != 
                                    nullptr
                                )
                        
                                    {
                                    
    ByteArrayOutputStream* byteArrayOutputStream = new ByteArrayOutputStream();;
    

    PrintStream* printStream = new PrintStream(byteArrayOutputStream);;
    
e->printStackTrace(printStream);
    

    std::string output = byteArrayOutputStream->toString();;
    

                        if(true)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return std::string(output);
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->NONE;
    
}


};

            

