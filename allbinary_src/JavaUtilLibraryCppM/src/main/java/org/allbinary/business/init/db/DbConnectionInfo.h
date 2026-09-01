
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INIT_DB_DBCONNECTIONINFO_H
        #define ORG_ALLBINARY_BUSINESS_INIT_DB_DBCONNECTIONINFO_H

            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DatabaseConnectionInfoInterface.h"

class DbConnectionInfo
            : public Object
        : public DatabaseConnectionInfoInterface {

    private: std::string jdbcDriver;

    private: std::string name;

    private: std::string userName;

    private: std::string password;

    private: std::string schema;

    private: std::string server;

    private: std::string port;

    private: std::string url;

    private: std::string host;

    private: const std::string SCHEMA_SEP = "://";

    private: const std::string USER_NAME_KEY = "?user=";

    private: const std::string PASSWORD_KEY = "&password=";

public: DbConnectionInfo();

    private: void updateUrl();

    public: std::string getUrl();

    public: std::string getJdbcDriver();

    public: std::string getName();

    public: std::string getUserName();

    public: std::string getPassword();

    private: void updateHost();

    public: std::string getHost();

    public: std::string getSchema();

    public: std::string getServer();

    public: std::string getPort();

    public: void setJdbcDriver(std::string value);

    public: void setName(std::string value);

    public: void setUserName(std::string value);

    public: void setPassword(std::string value);

    public: void setSchema(std::string value);

    public: void setServer(std::string value);

    public: void setPort(std::string value);

    public: std::string getUserNameKey();

    public: std::string getPasswordKey();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INIT_DB_DBCONNECTIONINFO_H
