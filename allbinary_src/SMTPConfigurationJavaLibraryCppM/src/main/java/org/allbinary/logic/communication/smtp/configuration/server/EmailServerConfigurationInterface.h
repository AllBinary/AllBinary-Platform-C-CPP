
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_SERVER_EMAILSERVERCONFIGURATIONINTERFACE_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_SERVER_EMAILSERVERCONFIGURATIONINTERFACE_H

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class EmailServerConfigurationInterface {

    void setSmtpServer(std::string value);

    std::string getSmtpServer();

    std::string getAccountName();

    void setAccountName(std::string accountName);

    std::string getPassword();

    void setPassword(std::string password);

    void log();

    std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_SERVER_EMAILSERVERCONFIGURATIONINTERFACE_H
