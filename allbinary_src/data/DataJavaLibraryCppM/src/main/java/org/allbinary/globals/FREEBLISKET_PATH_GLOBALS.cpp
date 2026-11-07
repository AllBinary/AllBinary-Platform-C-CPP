
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
        



        #ifndef ORG_ALLBINARY_GLOBALS_FREEBLISKET_PATH_GLOBALS_CPP
        #define ORG_ALLBINARY_GLOBALS_FREEBLISKET_PATH_GLOBALS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/globals/PATH_GLOBALS.h"

auto FREEBLISKET_PATH_GLOBALS::instance_owner() -> FREEBLISKET_PATH_GLOBALS* { static std::unique_ptr<FREEBLISKET_PATH_GLOBALS> value(new FREEBLISKET_PATH_GLOBALS()); return value.get(); }
FREEBLISKET_PATH_GLOBALS* FREEBLISKET_PATH_GLOBALS::instance = FREEBLISKET_PATH_GLOBALS::instance_owner();

    auto FREEBLISKET_PATH_GLOBALS::getInstance() -> FREEBLISKET_PATH_GLOBALS*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return FREEBLISKET_PATH_GLOBALS::instance;
    
}


FREEBLISKET_PATH_GLOBALS::FREEBLISKET_PATH_GLOBALS() : TEMPLATEPATH(JavaString::valueOf("template") +JavaString::valueOf(AbPathData::getInstance()->SEPARATOR)), STYLEPATH(JavaString::valueOf(JavaString::valueOf(this->TEMPLATEPATH) +JavaString::valueOf("style")) +JavaString::valueOf(AbPathData::getInstance()->SEPARATOR)), THEMEPATH(JavaString::valueOf(JavaString::valueOf(this->STYLEPATH) +JavaString::valueOf("theme")) +JavaString::valueOf(AbPathData::getInstance()->SEPARATOR)), DBINITPATH(JavaString::valueOf(JavaString::valueOf(PATH_GLOBALS::getInstance()->INIT_PATH) +JavaString::valueOf("db")) +JavaString::valueOf(AbPathData::getInstance()->SEPARATOR)), LINEDATAPATH(JavaString::valueOf(JavaString::valueOf(PATH_GLOBALS::getInstance()->INIT_PATH) +JavaString::valueOf("lineData")) +JavaString::valueOf(AbPathData::getInstance()->SEPARATOR)){

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("install");
    
stringBuffer->append(AbPathData::getInstance()->SEPARATOR);
    
this->INSTALLPATH= JavaString::valueOf(stringBuffer);
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(PATH_GLOBALS::getInstance()->INIT_PATH);
    
stringBuffer->append("views");
    
stringBuffer->append(AbPathData::getInstance()->SEPARATOR);
    
this->XSLPATH= JavaString::valueOf(stringBuffer);
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(this->XSLPATH);
    
stringBuffer->append("configuration");
    
stringBuffer->append(AbPathData::getInstance()->SEPARATOR);
    
this->CONFIGURATIONPATH= JavaString::valueOf(stringBuffer);
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(this->CONFIGURATIONPATH);
    
stringBuffer->append("user");
    
stringBuffer->append(AbPathData::getInstance()->SEPARATOR);
    
this->USERCONFIGURATIONPATH= JavaString::valueOf(stringBuffer);
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(this->CONFIGURATIONPATH);
    
stringBuffer->append("context");
    
stringBuffer->append(AbPathData::getInstance()->SEPARATOR);
    
this->CONTEXTCONFIGURATIONPATH= JavaString::valueOf(stringBuffer);
    
stringBuffer->delete_(0, stringBuffer->length());
    
}




        #endif //ORG_ALLBINARY_GLOBALS_FREEBLISKET_PATH_GLOBALS_CPP
