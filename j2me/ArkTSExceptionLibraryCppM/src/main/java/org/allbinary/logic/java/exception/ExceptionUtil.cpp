
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Throwable.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //ActualPlatform
/*actual*/ class ExceptionUtil
            : public Object
         {

    private: static ExceptionUtil instance() { return ExceptionUtil(); }

    /*actual*/ public: static ExceptionUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ExceptionUtil::instance();
    
}


private: ExceptionUtil(){
}


    /*actual*/ public: const Exception PRETEND_EXCEPTION = Exception("Not Really An Exception");

    private: const std::string NONE = "No Stack Trace";

    /*actual*/ public: std::string getStackTrace(Throwable e){

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


};

            

