
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

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DatabaseConnectionInfoInterface {
        

    string getUrl();

    string getJdbcDriver();

    string getName();

    string getUserName();

    string getPassword();

    string getHost();

    string getSchema();

    string getServer();

    string getPort();

    setJdbcDriver(string value);

    setName(string value);

    setUserName(string value);

    setPassword(string value);

    setSchema(string value);

    setServer(string value);

    setPort(string value);

    string getUserNameKey();

    string getPasswordKey();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INIT_DB_DATABASECONNECTIONINFOINTERFACE_H
