
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class AbPathData;
class StringMaker;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DbConnectionInfo
            : public virtual Object
        , public DatabaseConnectionInfoInterface {

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_INIT_DB_DBCONNECTIONINFO_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_INIT_DB_DBCONNECTIONINFO_H_COMPLETE
        #if __has_include(<org/allbinary/logic/io/path/AbPathData.h>)
#include <org/allbinary/logic/io/path/AbPathData.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include("org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h")
#include "org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h"
#endif

        #endif
    
