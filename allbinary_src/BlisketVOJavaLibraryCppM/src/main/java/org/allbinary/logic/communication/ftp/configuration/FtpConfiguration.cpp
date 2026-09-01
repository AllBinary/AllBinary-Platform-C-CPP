
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
        



            #include "../../../../../../java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "FtpConfigurationInterface.h"
#include "FtpConfigurationData.h"

class FtpConfiguration
            : public Object
        : public FtpConfigurationInterface {

    private: std::string ftpServer;

    private: std::string ftpPath;

    private: std::string ftpUserName;

    private: std::string ftpPassword;

public: FtpConfiguration(){
}


public: FtpConfiguration(HashMap<any, any> hashMap){
this->ftpServer= hashMap.get(FtpConfigurationData::SERVER) as string;
    
this->ftpPath= hashMap.get(FtpConfigurationData::PATH) as string;
    
this->ftpUserName= hashMap.get(FtpConfigurationData::USERNAME) as string;
    
this->ftpPassword= hashMap.get(FtpConfigurationData::PASSWORD) as string;
    
}


    public: std::string getServer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ftpServer;
    
}


    public: std::string getPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ftpPath;
    
}


    public: std::string getUserName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ftpUserName;
    
}


    public: std::string getPassword(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ftpPassword;
    
}


    public: void setServer(std::string value){
this->ftpServer= value;
    
}


    public: void setPath(std::string value){
this->ftpPath= value;
    
}


    public: void setUserName(std::string value){
this->ftpUserName= value;
    
}


    public: void setPassword(std::string value){
this->ftpPassword= value;
    
}


};

            

