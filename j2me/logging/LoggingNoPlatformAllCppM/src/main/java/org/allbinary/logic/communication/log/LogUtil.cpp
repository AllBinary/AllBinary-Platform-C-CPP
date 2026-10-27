
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
        
            #include "java/lang/RuntimeException.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/log/Log.h"

class LogUtil
            : public Object
         {

    private: static LogUtil* instance() { static std::unique_ptr<LogUtil> value(new LogUtil()); return value.get(); }

    public: static LogUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LogUtil::instance();
    
}


private: LogUtil(){
}


    public: void putL(Log* log){

    std::string specialMessage = log->getSpecialMessage();;
    

    Object* anyType = log->getObject();;
    

    std::string functionName = log->getFunctionName();;
    

    Object* exception = log->getThrowable();;
    



                            throw new RuntimeException();
                    
}


    public: void putF(std::string specialMessage, Object* anyType, std::string functionName){



                            throw new RuntimeException();
                    
}


    public: void putF(std::string specialMessage, std::string className, std::string functionName){



                            throw new RuntimeException();
                    
}


    public: void put(std::string specialMessage, Object* anyType, std::string functionName, Object* exception){



                            throw new RuntimeException();
                    
}


};

            

