
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
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/log/Log.h"
//ActualPlatform
/*actual*/ class LogFactory
            : public Object
         {

    public: static Log* LOG() { static std::unique_ptr<Log> value(new Log(StringUtil::getInstance()->EMPTY_STRING, NullUtil::getInstance()->NULL_OBJECT, StringUtil::getInstance()->EMPTY_STRING, NullUtil::getInstance()->NULL_OBJECT)); return value.get(); }

    /*actual*/ public: static Log* getInstanceD(){

    StringUtil* stringUtil = StringUtil::getInstance();;
    

    NullUtil* nullUtil = NullUtil::getInstance();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Log(stringUtil->EMPTY_STRING, nullUtil->NULL_OBJECT, stringUtil->EMPTY_STRING, nullUtil->NULL_OBJECT);
    
}


    /*actual*/ public: static Log* getInstance(std::string specialMessage, Object* anyType, std::string functionName, Object* exception){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Log(specialMessage, anyType, functionName, exception);
    
}


    /*actual*/ public: static Log* getInstanceF(std::string specialMessage, Object* anyType, std::string functionName){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LogFactory::LOG();
    
}


};

            

