
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INIT_INSTALLERINFO_CPP
        #define ORG_ALLBINARY_BUSINESS_INIT_INSTALLERINFO_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/init/InstallerInfo.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/globals/PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/AbDataInputStream.h>

      
#include <org/allbinary/logic/io/AbDataOutputStream.h>

      
#include <org/allbinary/logic/io/AbFileLocalInputStream.h>

      
#include <org/allbinary/logic/io/DataOutputStreamFactory.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/crypt/DatabaseEncoder.h>

      
#include <org/allbinary/logic/system/security/crypt/WeakCrypt.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto InstallerInfo::instance_owner() -> InstallerInfo* { static std::unique_ptr<InstallerInfo> value(new InstallerInfo()); return value.get(); }
InstallerInfo* InstallerInfo::instance = InstallerInfo::instance_owner();
const std::string InstallerInfo::PACKAGE = PATH_GLOBALS::getInstance()->INIT_PATH;
std::string InstallerInfo::userName = StringUtil::getInstance()->EMPTY_STRING;
std::string InstallerInfo::password = StringUtil::getInstance()->EMPTY_STRING;

InstallerInfo::InstallerInfo() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto InstallerInfo::write() -> void{

    AbPath* FILEABPATH = new AbPath(URLGLOBALS::getMainPath() +InstallerInfo::PACKAGE, InstallerInfo::INITFILENAME);;
    

        try {
            
    AbFile* newFile = AbFile::createAbFileFromAbPath(FILEABPATH);;
    
newFile->createNewFile();
    

    AbDataOutputStream* dataOutputStream = DataOutputStreamFactory::getInstance()->getInstanceForAbFile(newFile);;
    

    std::vector<int8_t> cryptedUserName = (new WeakCrypt(1))->encrypt(this->getUserName())->getBytes();;
    

    std::vector<int8_t> cryptedPassword = (new WeakCrypt(2))->encrypt(this->getPassword())->getBytes();;
    
dataOutputStream->writeUTF(DatabaseEncoder::encode(cryptedUserName));
    
dataOutputStream->writeUTF(DatabaseEncoder::encode(cryptedPassword));
    
InstallerInfo::hasRead= false;
    

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->PRELOADERERROR))
                        
                                    {
                                    this->logUtil->putF("Failed", this, "write");
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto InstallerInfo::read() -> void{

    AbPath* FILEABPATH = new AbPath(URLGLOBALS::getMainPath() +InstallerInfo::PACKAGE, InstallerInfo::INITFILENAME);;
    

        try {
            
    AbFile* file = AbFile::createAbFileFromAbPath(FILEABPATH);;
    

                        if(file->isFile())
                        
                                    {
                                    
    AbFileLocalInputStream* iFile = new AbFileLocalInputStream(file);;
    

    AbDataInputStream* iData = new AbDataInputStream(iFile);;
    

    std::string decryptedUserName = decode.toCharArray();;
    

    std::string decryptedPassword = decode.toCharArray();;
    
this->setUserName((new WeakCrypt(1))->decrypt(decryptedUserName));
    
this->setPassword((new WeakCrypt(2))->decrypt(decryptedPassword));
    

                                    }
                                
                        else {
                            
                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->PRELOADER))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Not a File - Failed Loading: ") +JavaString::valueOf(FILEABPATH->toString()), this, "read");
    

                                    }
                                

                        }
                            

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->PRELOADERERROR))
                        
                                    {
                                    this->logUtil->putF("Failed", this, "read");
    

                                    }
                                
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto InstallerInfo::setHasRead(bool value) -> void{
InstallerInfo::hasRead= value;
    
}


    auto InstallerInfo::setUserName(std::string userName) -> void{
InstallerInfo::userName= userName;
    
}


    auto InstallerInfo::setPassword(std::string password) -> void{
InstallerInfo::password= password;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto InstallerInfo::updateIfNeeded() -> void{

                        if(!InstallerInfo::hasRead)
                        
                                    {
                                    InstallerInfo::hasRead= true;
    
this->read();
    

                        if(false || false)
                        
                                    {
                                    
                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->PRELOADER))
                        
                                    {
                                    this->logUtil->putF("Failed", this, "updateIfNeeded");
    

                                    }
                                

                                    }
                                

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto InstallerInfo::getUserName() -> std::string{
this->updateIfNeeded();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return InstallerInfo::userName;
    
}


                //@Throws(Exception.constructor)
            
    auto InstallerInfo::getPassword() -> std::string{
this->updateIfNeeded();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return InstallerInfo::password;
    
}


                //@Throws(Exception.constructor)
            
    auto InstallerInfo::isValid(std::string userName, std::string password) -> bool{
this->updateIfNeeded();
    

                        if(true && this->userName.compare(userName) == 0 && true && this->password.compare(password) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_INIT_INSTALLERINFO_CPP
