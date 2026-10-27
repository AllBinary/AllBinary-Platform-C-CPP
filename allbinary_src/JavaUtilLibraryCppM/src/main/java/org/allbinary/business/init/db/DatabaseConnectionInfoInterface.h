
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INIT_DB_DATABASECONNECTIONINFOINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_INIT_DB_DATABASECONNECTIONINFOINTERFACE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DatabaseConnectionInfoInterface {

    public: virtual std::string getUrl() = 0;

    public: virtual std::string getJdbcDriver() = 0;

    public: virtual std::string getName() = 0;

    public: virtual std::string getUserName() = 0;

    public: virtual std::string getPassword() = 0;

    public: virtual std::string getHost() = 0;

    public: virtual std::string getSchema() = 0;

    public: virtual std::string getServer() = 0;

    public: virtual std::string getPort() = 0;

    public: virtual void setJdbcDriver(std::string value) = 0;

    public: virtual void setName(std::string value) = 0;

    public: virtual void setUserName(std::string value) = 0;

    public: virtual void setPassword(std::string value) = 0;

    public: virtual void setSchema(std::string value) = 0;

    public: virtual void setServer(std::string value) = 0;

    public: virtual void setPort(std::string value) = 0;

    public: virtual std::string getUserNameKey() = 0;

    public: virtual std::string getPasswordKey() = 0;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INIT_DB_DATABASECONNECTIONINFOINTERFACE_H
