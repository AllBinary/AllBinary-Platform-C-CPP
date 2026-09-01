
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_FTP_CONFIGURATION_FTPCONFIGURATIONINTERFACE_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_FTP_CONFIGURATION_FTPCONFIGURATIONINTERFACE_H

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class FtpConfigurationInterface {

    std::string getServer();

    std::string getPath();

    std::string getUserName();

    std::string getPassword();

    void setServer(std::string value);

    void setPath(std::string value);

    void setUserName(std::string value);

    void setPassword(std::string value);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_FTP_CONFIGURATION_FTPCONFIGURATIONINTERFACE_H
