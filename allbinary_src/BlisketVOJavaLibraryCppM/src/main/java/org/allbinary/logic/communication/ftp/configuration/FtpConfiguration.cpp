
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
        

    private: ftpServer: string;

    private: ftpPath: string;

    private: ftpUserName: string;

    private: ftpPassword: string;

public constructor (){

            super();
        }


public constructor (HashMap<any, any> hashMap){

            super();
        this.ftpServer= hashMap!.get(FtpConfigurationData.SERVER) as string;
    
this.ftpPath= hashMap!.get(FtpConfigurationData.PATH) as string;
    
this.ftpUserName= hashMap!.get(FtpConfigurationData.USERNAME) as string;
    
this.ftpPassword= hashMap!.get(FtpConfigurationData.PASSWORD) as string;
    
}


    public string getServer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.ftpServer;
    
}


    public string getPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.ftpPath;
    
}


    public string getUserName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.ftpUserName;
    
}


    public string getPassword(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.ftpPassword;
    
}


    public setServer(string value){
this.ftpServer= value;
    
}


    public setPath(string value){
this.ftpPath= value;
    
}


    public setUserName(string value){
this.ftpUserName= value;
    
}


    public setPassword(string value){
this.ftpPassword= value;
    
}


};

            

