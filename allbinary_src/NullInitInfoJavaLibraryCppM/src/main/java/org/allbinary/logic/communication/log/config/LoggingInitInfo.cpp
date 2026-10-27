
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_LOGGINGINITINFO_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_LOGGINGINITINFO_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/log/config/LoggingInitInfo.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/log/config/LogConfig.h"


LoggingInitInfo::LoggingInitInfo(){
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto LoggingInitInfo::write() -> void{

        try {
            LoggingInitInfo::hasRead= false;
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto LoggingInitInfo::read() -> void{

        try {
            
                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto LoggingInitInfo::setHasRead(bool value) -> void{
LoggingInitInfo::hasRead= value;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto LoggingInitInfo::updateIfNeeded() -> void{

                        if(!LoggingInitInfo::hasRead)
                        
                                    {
                                    LoggingInitInfo::read();
    
LoggingInitInfo::hasRead= true;
    

                        if(LoggingInitInfo::logConfigInfoList == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("Read Failed");
                    

                                    }
                                

                                    }
                                
}


    auto LoggingInitInfo::isValid() -> bool{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(Exception& e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto LoggingInitInfo::set(BasicArrayList* logConfigInfoList) -> void{
LoggingInitInfo::logConfigInfoList= logConfigInfoList;
    
}


                //@Throws(Exception.constructor)
            
    auto LoggingInitInfo::get() -> BasicArrayList*{
LoggingInitInfo::updateIfNeeded();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LoggingInitInfo::logConfigInfoList;
    
}


                //@Throws(Exception.constructor)
            
    auto LoggingInitInfo::getTypeList() -> BasicArrayList*{
LoggingInitInfo::updateIfNeeded();
    

    BasicArrayList* allLogTypeVector = new BasicArrayListD();;
    

    int32_t size = LoggingInitInfo::logConfigInfoList->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    LogConfig* logConfigInfo = dynamic_cast<LogConfig*>(LoggingInitInfo::logConfigInfoList->objectArray[index]);;
    

    BasicArrayList* logTypeVector = logConfigInfo->getTypeVector();;
    

                        if(logConfigInfo->isEnabled())
                        
                                    {
                                    allLogTypeVector->addAllList(logTypeVector);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return allLogTypeVector;
    
}


                //@Throws(Exception.constructor)
            
    auto LoggingInitInfo::getNumberOfLogConfigs() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LoggingInitInfo::logConfigInfoList->size();;
    
}


    auto LoggingInitInfo::toString() -> std::string{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                //: 
} catch(Exception& e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error";
    
}

}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_LOGGINGINITINFO_CPP
