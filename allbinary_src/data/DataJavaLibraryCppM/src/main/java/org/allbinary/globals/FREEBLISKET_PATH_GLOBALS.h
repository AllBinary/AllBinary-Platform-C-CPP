
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
        



        #ifndef ORG_ALLBINARY_GLOBALS_FREEBLISKET_PATH_GLOBALS_H
        #define ORG_ALLBINARY_GLOBALS_FREEBLISKET_PATH_GLOBALS_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class FREEBLISKET_PATH_GLOBALS
            : public Object
         {

    private: static FREEBLISKET_PATH_GLOBALS instance() { return FREEBLISKET_PATH_GLOBALS(); }

    public: static FREEBLISKET_PATH_GLOBALS getInstance();

    public: std::string INSTALLPATH;

    public: std::string XSLPATH;

    public: const std::string TEMPLATEPATH = "template" +AbPathData::getInstance().SEPARATOR;

    public: const std::string STYLEPATH = this->TEMPLATEPATH +"style" +AbPathData::getInstance().SEPARATOR;

    public: const std::string THEMEPATH = this->STYLEPATH +"theme" +AbPathData::getInstance().SEPARATOR;

    public: const std::string DBINITPATH = PATH_GLOBALS::getInstance().INIT_PATH +"db" +AbPathData::getInstance().SEPARATOR;

    public: const std::string LINEDATAPATH = PATH_GLOBALS::getInstance().INIT_PATH +"lineData" +AbPathData::getInstance().SEPARATOR;

    public: std::string CONFIGURATIONPATH;

    public: std::string USERCONFIGURATIONPATH;

    public: std::string CONTEXTCONFIGURATIONPATH;

    public: const std::string LICENSEERRORPAGE = "LicensingError.jsp";

    public: const std::string ERRORPAGE = "Error.jsp";

private: FREEBLISKET_PATH_GLOBALS();

};

            


        #endif //ORG_ALLBINARY_GLOBALS_FREEBLISKET_PATH_GLOBALS_H
