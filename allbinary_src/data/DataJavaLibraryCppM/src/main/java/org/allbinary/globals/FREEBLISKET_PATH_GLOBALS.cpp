
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
        
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class FREEBLISKET_PATH_GLOBALS
            : public Object
         {

    private: static FREEBLISKET_PATH_GLOBALS* instance() { static std::unique_ptr<FREEBLISKET_PATH_GLOBALS> value(new FREEBLISKET_PATH_GLOBALS()); return value.get(); }

    public: static FREEBLISKET_PATH_GLOBALS* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FREEBLISKET_PATH_GLOBALS::instance();
    
}


    public: std::string INSTALLPATH;

    public: std::string XSLPATH;

    public: const std::string TEMPLATEPATH = "template" +AbPathData::getInstance()->SEPARATOR;

    public: const std::string STYLEPATH = this->TEMPLATEPATH +"style" +AbPathData::getInstance()->SEPARATOR;

    public: const std::string THEMEPATH = this->STYLEPATH +"theme" +AbPathData::getInstance()->SEPARATOR;

    public: const std::string DBINITPATH = PATH_GLOBALS::getInstance()->INIT_PATH +"db" +AbPathData::getInstance()->SEPARATOR;

    public: const std::string LINEDATAPATH = PATH_GLOBALS::getInstance()->INIT_PATH +"lineData" +AbPathData::getInstance()->SEPARATOR;

    public: std::string CONFIGURATIONPATH;

    public: std::string USERCONFIGURATIONPATH;

    public: std::string CONTEXTCONFIGURATIONPATH;

    public: const std::string LICENSEERRORPAGE = "LicensingError.jsp";

    public: const std::string ERRORPAGE = "Error.jsp";

private: FREEBLISKET_PATH_GLOBALS(){

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("install");
    
stringBuffer->append(AbPathData::getInstance()->SEPARATOR);
    
this->INSTALLPATH= stringBuffer->toString();
    
stringBuffer->delete(0, stringBuffer->length());
    
stringBuffer->append(PATH_GLOBALS::getInstance()->INIT_PATH);
    
stringBuffer->append("views");
    
stringBuffer->append(AbPathData::getInstance()->SEPARATOR);
    
this->XSLPATH= stringBuffer->toString();
    
stringBuffer->delete(0, stringBuffer->length());
    
stringBuffer->append(this->XSLPATH);
    
stringBuffer->append("configuration");
    
stringBuffer->append(AbPathData::getInstance()->SEPARATOR);
    
this->CONFIGURATIONPATH= stringBuffer->toString();
    
stringBuffer->delete(0, stringBuffer->length());
    
stringBuffer->append(this->CONFIGURATIONPATH);
    
stringBuffer->append("user");
    
stringBuffer->append(AbPathData::getInstance()->SEPARATOR);
    
this->USERCONFIGURATIONPATH= stringBuffer->toString();
    
stringBuffer->delete(0, stringBuffer->length());
    
stringBuffer->append(this->CONFIGURATIONPATH);
    
stringBuffer->append("context");
    
stringBuffer->append(AbPathData::getInstance()->SEPARATOR);
    
this->CONTEXTCONFIGURATIONPATH= stringBuffer->toString();
    
stringBuffer->delete(0, stringBuffer->length());
    
}


};

            

