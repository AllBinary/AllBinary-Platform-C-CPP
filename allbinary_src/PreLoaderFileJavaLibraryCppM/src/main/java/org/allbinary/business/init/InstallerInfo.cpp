
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
        
class InstallerInfo
            : public Object
         {

    private: static InstallerInfo* instance() { static std::unique_ptr<InstallerInfo> value(new InstallerInfo()); return value.get(); }

    private: static inline const std::string INITFILENAME = "installerdata.dat";

    private: static inline const std::string PACKAGE = PATH_GLOBALS::getInstance()->INIT_PATH;

    private: static inline std::string userName = StringUtil::getInstance()->EMPTY_STRING;

    private: static inline std::string password = StringUtil::getInstance()->EMPTY_STRING;

    private: static inline bool hasRead = false;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void setHasRead(bool value){
InstallerInfo::hasRead= value;
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

public: InstallerInfo(){
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void write(){

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

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->PRELOADERERROR))
                        
                                    {
                                    this->logUtil->putF("Failed", this, "write");
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: void read(){

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
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->PRELOADER))
                        
                                    {
                                    this->logUtil->putF("Not a File - Failed Loading: " +FILEABPATH->toString(), this, "read");
    

                                    }
                                

                        }
                            

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->PRELOADERERROR))
                        
                                    {
                                    this->logUtil->putF("Failed", this, "read");
    

                                    }
                                
}

}


    public: void setUserName(std::string userName){
InstallerInfo::userName= userName;
    
}


    public: void setPassword(std::string password){
InstallerInfo::password= password;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: void updateIfNeeded(){

                        if(!InstallerInfo::hasRead)
                        
                                    {
                                    InstallerInfo::hasRead= true;
    
this->read();
    

                        if(false || false)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->PRELOADER))
                        
                                    {
                                    this->logUtil->putF("Failed", this, "updateIfNeeded");
    

                                    }
                                

                                    }
                                

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: std::string getUserName(){
this->updateIfNeeded();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InstallerInfo::userName;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string getPassword(){
this->updateIfNeeded();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InstallerInfo::password;
    
}


                //@Throws(Exception.constructor)
            
    public: bool isValid(std::string userName, std::string password){
this->updateIfNeeded();
    

                        if(true && this->userName.compare(userName) == 0 && true && this->password.compare(password) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

