
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INIT_DB_DBINITINFO_CPP
        #define ORG_ALLBINARY_BUSINESS_INIT_DB_DBINITINFO_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/init/db/DbInitInfo.h"
        

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


DbInitInfo::DbInitInfo(std::string initFileName, bool read) : DbConnectionInfo(), commonStrings(CommonStrings::getInstance()), directory(Directory::getInstance()), httpData(HttpData::getInstance()), PACKAGE(FREEBLISKET_PATH_GLOBALS::getInstance()->DBINITPATH){

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


    auto DbInitInfo::getUrl() -> std::string{

    std::string url = DbConnectionInfo::getUrl();;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->PRELOADER))
                        
                                    {
                                    PreLogUtil::put(JavaString::valueOf(this->httpData->URL_LABEL) +JavaString::valueOf(url), this, GET_URL);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return url;
    
}


                //@Throws(Exception.constructor)
            
    auto DbInitInfo::write() -> void{

    AbPath* PATH = new AbPath(URLGLOBALS::getWebappPath() +this->PACKAGE, StringUtil::getInstance()->EMPTY_STRING);;
    
this->directory->create(PATH);
    

    AbPath* FILEABPATH = new AbPath(URLGLOBALS::getWebappPath() +this->PACKAGE, this->initFileName);;
    

        try {
            
    AbFile* newFile = AbFile::createAbFileFromAbPath(FILEABPATH);;
    
newFile->createNewFile();
    

    AbDataOutputStream* dataOutputStream = DataOutputStreamFactory::getInstance()->getInstanceForAbFile(newFile);;
    

        {
        
        auto finallyFunction_N67289 = [&]() {
            StreamUtil::getInstance()->close(dataOutputStream);
    

        };
        
        struct FinallyGuard_N67289 { decltype(finallyFunction_N67289)& function; ~FinallyGuard_N67289() { function(); } } finallyGuard_N67289{finallyFunction_N67289};
        
        {
            
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
    

        }

        }


                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->PRELOADERERROR))
                        
                                    {
                                    PreLogUtil::putOE(JavaString::valueOf("Failed Write: ") +JavaString::valueOf(FILEABPATH->toString()), this, "write", &e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    auto DbInitInfo::load() -> void{

    AbPath* FILEABPATH = new AbPath(URLGLOBALS::getWebappPath() +this->PACKAGE, this->initFileName);;
    

        try {
            
    AbFile* file = AbFile::createAbFileFromAbPath(FILEABPATH);;
    

                        if(file->isFile())
                        
                                    {
                                    
    AbFileInputStream* iFile = new AbFileInputStream(file);;
    

    AbDataInputStream* iData = new AbDataInputStream(iFile);;
    

        {
        
        auto finallyFunction_N68965 = [&]() {
            StreamUtil::getInstance()->close(iData);
    

        };
        
        struct FinallyGuard_N68965 { decltype(finallyFunction_N68965)& function; ~FinallyGuard_N68965() { function(); } } finallyGuard_N68965{finallyFunction_N68965};
        
        {
            
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
    

        }

        }


                                    }
                                
                        else {
                            this->hasRead= false;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->PRELOADER))
                        
                                    {
                                    PreLogUtil::put(JavaString::valueOf("Not a File - Failed Loading: ") +JavaString::valueOf(FILEABPATH->toString()), this, this->commonStrings->LOAD);
    

                                    }
                                

                        }
                            

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->PRELOADERERROR))
                        
                                    {
                                    PreLogUtil::putOE(JavaString::valueOf("Failed Loading: ") +JavaString::valueOf(FILEABPATH->toString()), this, this->commonStrings->LOAD, &e);
    

                                    }
                                
}

}


    auto DbInitInfo::setHasRead(bool value) -> void{
this->hasRead= value;
    
}


    auto DbInitInfo::updateIfNeeded() -> void{

        try {
            
                        if(!this->hasRead)
                        
                                    {
                                    this->hasRead= true;
    
this->load();
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->PRELOADERERROR))
                        
                                    {
                                    PreLogUtil::putOE(this->commonStrings->EXCEPTION, this, "updateIfNeeded", &e);
    

                                    }
                                
}

}


    auto DbInitInfo::getName() -> std::string{
this->updateIfNeeded();
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->PRELOADER))
                        
                                    {
                                    PreLogUtil::put(JavaString::valueOf("Name: ") +JavaString::valueOf(DbConnectionInfo::getName()), this, "getName");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DbConnectionInfo::getName();;
    
}


    auto DbInitInfo::getUserName() -> std::string{
this->updateIfNeeded();
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->PRELOADER))
                        
                                    {
                                    PreLogUtil::put(JavaString::valueOf("Name: ") +JavaString::valueOf(DbConnectionInfo::getUserName()), this, "getUserName");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DbConnectionInfo::getUserName();;
    
}


    auto DbInitInfo::getPassword() -> std::string{
this->updateIfNeeded();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DbConnectionInfo::getPassword();;
    
}


    auto DbInitInfo::getSchema() -> std::string{
this->updateIfNeeded();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DbConnectionInfo::getSchema();;
    
}


    auto DbInitInfo::getServer() -> std::string{
this->updateIfNeeded();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DbConnectionInfo::getServer();;
    
}


    auto DbInitInfo::getPort() -> std::string{
this->updateIfNeeded();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DbConnectionInfo::getPort();;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_INIT_DB_DBINITINFO_CPP
