
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
        

    private: jdbcDriver: string;

    private: name: string;

    private: userName: string;

    private: password: string;

    private: schema: string;

    private: server: string;

    private: port: string;

    private: url: string;

    private: host: string;

    private: const SCHEMA_SEP: string = "://";

    private: const USER_NAME_KEY: string = "?user=";

    private: const PASSWORD_KEY: string = "&password=";

public constructor ();

    updateUrl();

    public string getUrl();

    public string getJdbcDriver();

    public string getName();

    public string getUserName();

    public string getPassword();

    updateHost();

    public string getHost();

    public string getSchema();

    public string getServer();

    public string getPort();

    public setJdbcDriver(string value);

    public setName(string value);

    public setUserName(string value);

    public setPassword(string value);

    public setSchema(string value);

    public setServer(string value);

    public setPort(string value);

    public string getUserNameKey();

    public string getPasswordKey();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INIT_DB_DBCONNECTIONINFO_H
