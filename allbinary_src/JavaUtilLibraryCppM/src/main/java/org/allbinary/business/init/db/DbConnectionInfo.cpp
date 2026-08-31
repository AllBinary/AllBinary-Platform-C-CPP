
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

public constructor (){

            super();
        }


    updateUrl(){
this.updateHost();
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.getHost());
    
stringBuffer!.append(this.getName());
    
stringBuffer!.append(this.getUserNameKey());
    
stringBuffer!.append(this.getUserName());
    
stringBuffer!.append(this.getPasswordKey());
    
stringBuffer!.append(this.getPassword());
    
this.url= stringBuffer!.toString();
    
}


    public string getUrl(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.url;
    
}


    public string getJdbcDriver(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.jdbcDriver;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


    public string getUserName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.userName;
    
}


    public string getPassword(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.password;
    
}


    updateHost(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.getSchema());
    
stringBuffer!.append(this.SCHEMA_SEP);
    
stringBuffer!.append(this.getServer());
    

                        if(this.getPort() != 
                                    null
                                 && this.getPort()!.length() > 1)
                        
                                    {
                                    stringBuffer!.append(CommonSeps.getInstance()!.COLON);
    
stringBuffer!.append(this.getPort());
    

                                    }
                                
stringBuffer!.append(AbPathData.getInstance()!.SEPARATOR);
    
this.host= stringBuffer!.toString();
    
}


    public string getHost(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.host;
    
}


    public string getSchema(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.schema;
    
}


    public string getServer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.server;
    
}


    public string getPort(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.port;
    
}


    public setJdbcDriver(string value){
this.jdbcDriver= value;
    
}


    public setName(string value){
this.name= value;
    
this.updateUrl();
    
}


    public setUserName(string value){
this.userName= value;
    
this.updateUrl();
    
}


    public setPassword(string value){
this.password= value;
    
this.updateUrl();
    
}


    public setSchema(string value){
this.schema= value;
    
this.updateUrl();
    
}


    public setServer(string value){
this.server= value;
    
this.updateUrl();
    
}


    public setPort(string value){
this.port= value;
    
this.updateUrl();
    
}


    public string getUserNameKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.USER_NAME_KEY;
    
}


    public string getPasswordKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.PASSWORD_KEY;
    
}


};

            

