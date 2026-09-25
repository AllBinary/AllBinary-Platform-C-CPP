
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
        
            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/globals/PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/AbDataInputStream.h>

      
#include <org/allbinary/logic/io/AbDataOutputStream.h>

      
#include <org/allbinary/logic/io/AbFileInputStream.h>

      
#include <org/allbinary/logic/io/DataOutputStreamFactory.h>

      
#include <org/allbinary/logic/io/FileStreamFactory.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/crypt/DatabaseEncoder.h>

      
#include <org/allbinary/logic/system/security/crypt/WeakCrypt.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LicenseInitInfo.h"

class LicenseInitInfoUtil
            : public Object
         {

    private: static LicenseInitInfoUtil instance() { return LicenseInitInfoUtil(); }

    public: static LicenseInitInfoUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LicenseInitInfoUtil::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const StringUtil stringUtil = StringUtil::getInstance();

    public: const std::string INITFILENAME = "licenseinitdata.dat";

    public: const std::string ABOUT = "about";

    public: const std::string PRIVACY_POLICY = "privacy_policy";

    private: std::string filePath = this->stringUtil.EMPTY_STRING;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setFilePath(std::string filePath){
this->filePath= filePath;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void write(LicenseInitInfo initData){

                        if(this->filePath == this->stringUtil.EMPTY_STRING)
                        
                                    {
                                    this->filePath= URLGLOBALS::getMainPath() +PATH_GLOBALS::getInstance().INIT_PATH;
    

                                    }
                                

        try {
            
    TsUtil tsUtil = TsUtil::getInstance();;
    

    AbDataOutputStream dataOutputStream = DataOutputStreamFactory::getInstance().getInstance(this->filePath, this->INITFILENAME);;
    

    std::vector<int8_t> licenseIdCrypted = tsUtil.getByteArray(WeakCrypt(1).encrypt(initData.getLicenseId()));;
    
dataOutputStream.writeUTF(DatabaseEncoder::encode(licenseIdCrypted));
    

    int32_t numberOfLicenseServers = initData.getNumberOfServers();;
    
dataOutputStream.writeInt(numberOfLicenseServers);
    

    std::vector<int8_t> licenseServerCrypted;;
    




                        for (
    int32_t index = 0;index < numberOfLicenseServers; index++)
        {
licenseServerCrypted= tsUtil.getByteArray(WeakCrypt(3).encrypt(initData.getServer(index)));
    
dataOutputStream.writeUTF(DatabaseEncoder::encode(licenseServerCrypted));
    
}


                //: 
} catch(e) 
            {
this->logUtil.put("Command Failed: " +this->INITFILENAME, this, "write", e);
    
FileStreamFactory::getInstance().delete(this->filePath, this->INITFILENAME);
    



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: LicenseInitInfo read(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->readAgain(0);;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: LicenseInitInfo readAgain(int32_t initializeCounter){

    std::string METHOD_NAME = "readAgain";;
    

                        if(this->filePath == this->stringUtil.EMPTY_STRING)
                        
                                    {
                                    this->filePath= URLGLOBALS::getMainPath() +PATH_GLOBALS::getInstance().INIT_PATH;
    

                                    }
                                

        try {
            this->logUtil.putF("LicenseInitInfo File: " +this->INITFILENAME, this, METHOD_NAME);
    

    FileStreamFactory fileStreamFactory = FileStreamFactory::getInstance();;
    

    AbFileInputStream iFile = fileStreamFactory.getFileInputStreamInstance(this->filePath, this->INITFILENAME);;
    

                        if(iFile != 
                                    nullptr
                                )
                        
                                    {
                                    
    AbDataInputStream iData = AbDataInputStream(iFile);;
    

    LicenseInitInfo initInfo = LicenseInitInfo();;
    

    std::vector<int8_t> decodedByteArray = DatabaseEncoder::decode(iData.readUTF());;
    

    std::string licenseIdDecoded = String.fromCharCode(...decodedByteArray);;
    
initInfo.setLicenseId(WeakCrypt(1).decrypt(licenseIdDecoded));
    

    int32_t numberOfLicenseServers = iData.readInt();;
    

    std::string NEXT_FILE = "Next License Server From File: ";;
    

    std::string licenseServerDecoded;;
    




                        for (
    int32_t index = 0;index < numberOfLicenseServers; index++)
        {
decodedByteArray= DatabaseEncoder::decode(iData.readUTF());
    
licenseServerDecoded= String.fromCharCode(...decodedByteArray);
    
initInfo.setServer(WeakCrypt(3).decrypt(licenseServerDecoded), index);
    
this->logUtil.putF(NEXT_FILE +initInfo.getServer(index), this, METHOD_NAME);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return initInfo;
    

                                    }
                                
                        else {
                            


                            throw Exception("Could Not Load License InitInfo: " +this->INITFILENAME);
                    

                        }
                            

                //: 
} catch(e) 
            {

        try {
            this->logUtil.put("Command Failed: " +this->INITFILENAME, this, METHOD_NAME, e);
    

                //: 
} catch(e2) 
            {
this->logUtil.put("LicenseInitInfo Read Retry: " +this->INITFILENAME, this, "readAgain()", e2);
    
}




                            throw Exception("LicenseInitInfo Read Error: " +this->INITFILENAME);
                    
}

}


    public: std::string getFilePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->filePath;
    
}


};

            

