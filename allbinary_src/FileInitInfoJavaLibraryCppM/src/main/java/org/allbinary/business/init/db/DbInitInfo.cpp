
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/http/HttpData.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
#include <org/allbinary/logic/io/AbDataInputStream.h>

      
#include <org/allbinary/logic/io/AbDataOutputStream.h>

      
#include <org/allbinary/logic/io/AbFileInputStream.h>

      
#include <org/allbinary/logic/io/DataOutputStreamFactory.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/directory/Directory.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/crypt/DatabaseEncoder.h>

      
#include <org/allbinary/logic/system/security/crypt/WeakCrypt.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/init/db/DbConnectionInfo.h"

class DbInitInfo: public DbConnectionInfo {

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: Directory* directory = Directory::getInstance();

    private: HttpData* httpData = HttpData::getInstance();

    private: const std::string GET_URL = "getUrl";

    private: const std::string PACKAGE = FREEBLISKET_PATH_GLOBALS::getInstance()->DBINITPATH;

    private: std::string initFileName;

    private: bool hasRead = false;

public: DbInitInfo(std::string initFileName, bool read) : DbConnectionInfo(){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->initFileName= initFileName;
    

                        if(read)
                        
                                    {
                                    this->updateIfNeeded();
    

                                    }
                                
                        else {
                            this->setHasRead(true);
    

                        }
                            
}


    public: std::string getUrl(){

    std::string url = super.getUrl();;
    

                        if(LogConfigTypes::LOGGING.contains(LogConfigTypeFactory::getInstance()->PRELOADER))
                        
                                    {
                                    PreLogUtil::put(this->httpData->URL_LABEL +url, this, GET_URL);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return url;
    
}


                //@Throws(Exception.constructor)
            
    public: void write(){

    AbPath* PATH = new AbPath(URLGLOBALS::getWebappPath() +this->PACKAGE, StringUtil::getInstance()->EMPTY_STRING);;
    
this->directory->create(PATH);
    

    AbPath* FILEABPATH = new AbPath(URLGLOBALS::getWebappPath() +this->PACKAGE, this->initFileName);;
    

        try {
            
    AbFile* newFile = AbFile::createAbFileFromAbPath(FILEABPATH);;
    
newFile->createNewFile();
    

    AbDataOutputStream* dataOutputStream = DataOutputStreamFactory::getInstance()->getInstanceForAbFile(newFile);;
    

        try {
            
    std::vector<int8_t> cryptedJdbcDriver = (new WeakCrypt(1))->encrypt(this->getJdbcDriver())->getBytes();;
    

    std::vector<int8_t> cryptedName = (new WeakCrypt(2))->encrypt(this->getName())->getBytes();;
    

    std::vector<int8_t> cryptedUserName = (new WeakCrypt(3))->encrypt(this->getUserName())->getBytes();;
    

    std::vector<int8_t> cryptedPassword = (new WeakCrypt(4))->encrypt(this->getPassword())->getBytes();;
    

    std::vector<int8_t> cryptedSchema = (new WeakCrypt(5))->encrypt(this->getSchema())->getBytes();;
    

    std::vector<int8_t> cryptedServer = (new WeakCrypt(6))->encrypt(this->getServer())->getBytes();;
    

    std::vector<int8_t> cryptedPort = (new WeakCrypt(7))->encrypt(this->getPort())->getBytes();;
    
dataOutputStream->writeUTF(DatabaseEncoder::encode(cryptedJdbcDriver));
    
dataOutputStream->writeUTF(DatabaseEncoder::encode(cryptedName));
    
dataOutputStream->writeUTF(DatabaseEncoder::encode(cryptedUserName));
    
dataOutputStream->writeUTF(DatabaseEncoder::encode(cryptedPassword));
    
dataOutputStream->writeUTF(DatabaseEncoder::encode(cryptedSchema));
    
dataOutputStream->writeUTF(DatabaseEncoder::encode(cryptedServer));
    
dataOutputStream->writeUTF(DatabaseEncoder::encode(cryptedPort));
    
this->hasRead= false;
    

         finally {
            StreamUtil::getInstance()->close(dataOutputStream);
    

         }
        

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING.contains(LogConfigTypeFactory::getInstance()->PRELOADERERROR))
                        
                                    {
                                    PreLogUtil::putOE("Failed Write: " +FILEABPATH->toString(), this, "write", &e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    private: void load(){

    AbPath* FILEABPATH = new AbPath(URLGLOBALS::getWebappPath() +this->PACKAGE, this->initFileName);;
    

        try {
            
    AbFile* file = AbFile::createAbFileFromAbPath(FILEABPATH);;
    

                        if(file->isFile())
                        
                                    {
                                    
    AbFileInputStream* iFile = new AbFileInputStream(file);;
    

    AbDataInputStream* iData = new AbDataInputStream(iFile);;
    

        try {
            
    std::string decryptedJdbcDriver = decode.toCharArray();;
    

    std::string decryptedName = decode.toCharArray();;
    

    std::string decryptedUserName = decode.toCharArray();;
    

    std::string decryptedPassword = decode.toCharArray();;
    

    std::string decryptedSchema = decode.toCharArray();;
    

    std::string decryptedServer = decode.toCharArray();;
    

    std::string decryptedPort = decode.toCharArray();;
    
this->setJdbcDriver((new WeakCrypt(1))->decrypt(decryptedJdbcDriver));
    
this->setName((new WeakCrypt(2))->decrypt(decryptedName));
    
this->setUserName((new WeakCrypt(3))->decrypt(decryptedUserName));
    
this->setPassword((new WeakCrypt(4))->decrypt(decryptedPassword));
    
this->setSchema((new WeakCrypt(5))->decrypt(decryptedSchema));
    
this->setServer((new WeakCrypt(6))->decrypt(decryptedServer));
    
this->setPort((new WeakCrypt(7))->decrypt(decryptedPort));
    

    StringUtil* stringUtil = StringUtil::getInstance();;
    

         finally {
            StreamUtil::getInstance()->close(iData);
    

         }
        

                                    }
                                
                        else {
                            this->hasRead= false;
    

                        if(LogConfigTypes::LOGGING.contains(LogConfigTypeFactory::getInstance()->PRELOADER))
                        
                                    {
                                    PreLogUtil::put("Not a File - Failed Loading: " +FILEABPATH->toString(), this, this->commonStrings->LOAD);
    

                                    }
                                

                        }
                            

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING.contains(LogConfigTypeFactory::getInstance()->PRELOADERERROR))
                        
                                    {
                                    PreLogUtil::putOE("Failed Loading: " +FILEABPATH->toString(), this, this->commonStrings->LOAD, &e);
    

                                    }
                                
}

}


    public: void setHasRead(bool value){
this->hasRead= value;
    
}


    private: void updateIfNeeded(){

        try {
            
                        if(!this->hasRead)
                        
                                    {
                                    this->hasRead= true;
    
this->load();
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING.contains(LogConfigTypeFactory::getInstance()->PRELOADERERROR))
                        
                                    {
                                    PreLogUtil::putOE(this->commonStrings->EXCEPTION, this, "updateIfNeeded", &e);
    

                                    }
                                
}

}


    public: std::string getName(){
this->updateIfNeeded();
    

                        if(LogConfigTypes::LOGGING.contains(LogConfigTypeFactory::getInstance()->PRELOADER))
                        
                                    {
                                    PreLogUtil::put("Name: " +super.getName(), this, "getName");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.getName();;
    
}


    public: std::string getUserName(){
this->updateIfNeeded();
    

                        if(LogConfigTypes::LOGGING.contains(LogConfigTypeFactory::getInstance()->PRELOADER))
                        
                                    {
                                    PreLogUtil::put("Name: " +super.getUserName(), this, "getUserName");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.getUserName();;
    
}


    public: std::string getPassword(){
this->updateIfNeeded();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.getPassword();;
    
}


    public: std::string getSchema(){
this->updateIfNeeded();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.getSchema();;
    
}


    public: std::string getServer(){
this->updateIfNeeded();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.getServer();;
    
}


    public: std::string getPort(){
this->updateIfNeeded();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.getPort();;
    
}


};

            

