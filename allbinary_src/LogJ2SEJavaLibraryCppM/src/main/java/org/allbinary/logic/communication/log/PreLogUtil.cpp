
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
        
            #include "java/lang/System.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/log/LogFormatUtil.h"
//ActualPlatform
/*actual*/ class PreLogUtil
            : public Object
         {

    /*actual*/ public: static void put(std::string specialMessage, Object* anyType, std::string functionName){
PreLogUtil::putOE(specialMessage, anyType, functionName, NullUtil::getInstance()->NULL_OBJECT);
    
}


    private: static inline const std::string LOG_SUCCESS = "org.allbinary: ";

    /*actual*/ public: static void putOE(std::string specialMessage, Object* anyType, std::string functionName, Object* exception){

    std::string className = CommonStrings::getInstance()->EMPTY;;
    

                        if(true)
                        
                                    {
                                    className= anyType->getClass()->getName();
    

                                    }
                                

    std::string message = LogFormatUtil::getInstance()->get(className, functionName, specialMessage, exception);;
    
System.out.print(PreLogUtil::LOG_SUCCESS);
    
System.out.println(message);
    
}


    /*actual*/ public: static void putS(std::string specialMessage, std::string className, std::string functionName){
PreLogUtil::putSE(specialMessage, className, functionName, NullUtil::getInstance()->NULL_OBJECT);
    
}


    /*actual*/ public: static void putSE(std::string specialMessage, std::string className, std::string functionName, Object* exception){

    std::string message = LogFormatUtil::getInstance()->get(className, functionName, specialMessage, exception);;
    
System.out.print(PreLogUtil::LOG_SUCCESS);
    
System.out.println(message);
    
}


public: PreLogUtil(){
}


};

            

