
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


private: ExceptionUtil(){
}


    /*actual*/ public: Exception* PRETEND_EXCEPTION = new Exception("Not Really An Exception");

    private: const std::string NONE = "No Stack Trace";

    /*actual*/ public: std::string getStackTrace(Throwable* e){

    ByteArrayOutputStream* bs = new ByteArrayOutputStream();;
    
e->printStackTrace();
    

    std::string output = bs->toString();;
    

                        if(true)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return std::string(output);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->NONE;
    
}


};

            

