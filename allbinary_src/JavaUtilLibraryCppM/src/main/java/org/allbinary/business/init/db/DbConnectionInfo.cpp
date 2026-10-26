
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
        



            #include "java/lang/Object.h"
        
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

public: DbConnectionInfo(){
}


    private: void updateUrl(){
this->updateHost();
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->getHost());
    
stringBuffer.append(this->getName());
    
stringBuffer.append(this->getUserNameKey());
    
stringBuffer.append(this->getUserName());
    
stringBuffer.append(this->getPasswordKey());
    
stringBuffer.append(this->getPassword());
    
this->url= stringBuffer.toString();
    
}


    public: std::string getUrl(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->url;
    
}


    public: std::string getJdbcDriver(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->jdbcDriver;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: std::string getUserName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->userName;
    
}


    public: std::string getPassword(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->password;
    
}


    private: void updateHost(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->getSchema());
    
stringBuffer.append(this->SCHEMA_SEP);
    
stringBuffer.append(this->getServer());
    

                        if(this->getPort() != 
                                    nullptr
                                 && this->getPort().length() > 1)
                        
                                    {
                                    stringBuffer.append(CommonSeps::getInstance().COLON);
    
stringBuffer.append(this->getPort());
    

                                    }
                                
stringBuffer.append(AbPathData::getInstance().SEPARATOR);
    
this->host= stringBuffer.toString();
    
}


    public: std::string getHost(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->host;
    
}


    public: std::string getSchema(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->schema;
    
}


    public: std::string getServer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->server;
    
}


    public: std::string getPort(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->port;
    
}


    public: void setJdbcDriver(std::string value){
this->jdbcDriver= value;
    
}


    public: void setName(std::string value){
this->name= value;
    
this->updateUrl();
    
}


    public: void setUserName(std::string value){
this->userName= value;
    
this->updateUrl();
    
}


    public: void setPassword(std::string value){
this->password= value;
    
this->updateUrl();
    
}


    public: void setSchema(std::string value){
this->schema= value;
    
this->updateUrl();
    
}


    public: void setServer(std::string value){
this->server= value;
    
this->updateUrl();
    
}


    public: void setPort(std::string value){
this->port= value;
    
this->updateUrl();
    
}


    public: std::string getUserNameKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->USER_NAME_KEY;
    
}


    public: std::string getPasswordKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->PASSWORD_KEY;
    
}


};

            

