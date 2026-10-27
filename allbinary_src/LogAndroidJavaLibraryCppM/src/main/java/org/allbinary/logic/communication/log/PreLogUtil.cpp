
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
        



            #include <hilog/log.h>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogFormatUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/log/Log.h"
//ActualPlatform
/*actual*/ class PreLogUtil
            : public Object
         {

            static const char* PUBLIC = "%{public}s";
            

    /*actual*/ public: static void put(std::string specialMessage, Object* anyType, std::string functionName){
PreLogUtil::putOE(specialMessage, anyType, functionName, NullUtil::getInstance()->NULL_OBJECT);
    
}


    private: static inline const std::string LABEL = "org.allbinary";

    /*actual*/ public: static void putOE(std::string specialMessage, Object* anyType, std::string functionName, Object* exception){

    std::string className = PreLogUtil::LABEL;;
    

    std::string actualClassName = anyType->getClass()->getName();;
    

                        if(true)
                        
                                    {
                                    className= actualClassName;
    

                                    }
                                

    std::string message = LogFormatUtil::getInstance()->get(className, functionName, specialMessage, exception);;
    
android.util.Log.i(PreLogUtil::LABEL, message);
    
}


    /*actual*/ public: static void putS(std::string specialMessage, std::string className, std::string functionName){
PreLogUtil::putSE(specialMessage, className, functionName, NullUtil::getInstance()->NULL_OBJECT);
    
}


    /*actual*/ public: static void putSE(std::string specialMessage, std::string className, std::string functionName, Object* exception){

    std::string message = LogFormatUtil::getInstance()->get(className, functionName, specialMessage, exception);;
    
hilog.info(0x0000, className, PreLogUtil.PUBLIC, message);
    
}


public: PreLogUtil(){
}


};

            

