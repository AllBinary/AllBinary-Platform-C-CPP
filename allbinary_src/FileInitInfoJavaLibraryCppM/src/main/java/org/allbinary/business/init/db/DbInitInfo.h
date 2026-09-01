
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INIT_DB_DBINITINFO_H
        #define ORG_ALLBINARY_BUSINESS_INIT_DB_DBINITINFO_H

            #include <vector>
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/http/HttpData.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
#include <org/allbinary/logic/io/AbDataInputStream.h>

      
#include <org/allbinary/logic/io/AbDataOutputStream.h>

      
#include <org/allbinary/logic/io/AbFileInputStream.h>

      
#include <org/allbinary/logic/io/DataOutputStreamFactory.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/directory/Directory.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/crypt/DatabaseEncoder.h>

      
#include <org/allbinary/logic/system/security/crypt/WeakCrypt.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DbConnectionInfo.h"

class DbInitInfo: public DbConnectionInfo {

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const Directory directory = Directory::getInstance();

    private: const HttpData httpData = HttpData::getInstance();

    private: const std::string GET_URL = "getUrl";

    private: const std::string PACKAGE = FREEBLISKET_PATH_GLOBALS::getInstance().DBINITPATH;

    private: std::string initFileName;

    private: bool hasRead = false;

public: DbInitInfo(std::string initFileName, bool read);

    public: std::string getUrl();

                //@Throws(Exception.constructor)
            
    public: void write();

                //@Throws(Exception.constructor)
            
    private: void load();

    public: void setHasRead(bool value);

    private: void updateIfNeeded();

    public: std::string getName();

    public: std::string getUserName();

    public: std::string getPassword();

    public: std::string getSchema();

    public: std::string getServer();

    public: std::string getPort();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INIT_DB_DBINITINFO_H
