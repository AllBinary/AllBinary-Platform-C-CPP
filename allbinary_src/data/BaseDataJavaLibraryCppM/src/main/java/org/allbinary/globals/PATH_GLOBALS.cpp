
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
        



        #ifndef ORG_ALLBINARY_GLOBALS_PATH_GLOBALS_CPP
        #define ORG_ALLBINARY_GLOBALS_PATH_GLOBALS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/globals/PATH_GLOBALS.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto PATH_GLOBALS::instance_owner() -> PATH_GLOBALS* { static std::unique_ptr<PATH_GLOBALS> value(new PATH_GLOBALS()); return value.get(); }
PATH_GLOBALS* PATH_GLOBALS::instance = PATH_GLOBALS::instance_owner();

    auto PATH_GLOBALS::getInstance() -> PATH_GLOBALS*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PATH_GLOBALS::instance;
    
}


PATH_GLOBALS::PATH_GLOBALS(){

    StringMaker* stringBuffer = new StringMaker();;
    

    AbPathData* abPathData = AbPathData::getInstance();;
    
stringBuffer->append("data");
    
stringBuffer->append(abPathData->SEPARATOR);
    
this->DATA_PATH= stringBuffer->toString();
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(this->DATA_PATH);
    
stringBuffer->append(CommonStrings::getInstance()->INIT);
    
stringBuffer->append(abPathData->SEPARATOR);
    
this->INIT_PATH= stringBuffer->toString();
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(this->DATA_PATH);
    
stringBuffer->append("log");
    
stringBuffer->append(abPathData->SEPARATOR);
    
this->LOG_PATH= stringBuffer->toString();
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(this->DATA_PATH);
    
stringBuffer->append("backup");
    
stringBuffer->append(abPathData->SEPARATOR);
    
this->BACKUP_PATH= stringBuffer->toString();
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(this->INIT_PATH);
    
stringBuffer->append("views");
    
stringBuffer->append(abPathData->SEPARATOR);
    
this->VIEWS_PATH= stringBuffer->toString();
    
}




        #endif //ORG_ALLBINARY_GLOBALS_PATH_GLOBALS_CPP
