
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/io/DataInputStream.h>

      
#include <java/io/InputStream.h>

      
#include <java/io/OutputStream.h>

      
#include <org/allbinary/logic/io/AbDataOutputStream.h>

      
#include <org/allbinary/logic/io/FileStreamFactory.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/file/FileFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RegistrationConfiguration
            : public Object
         {

    private: static const RegistrationConfiguration SINGLETON = RegistrationConfiguration();

    public: static RegistrationConfiguration getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RegistrationConfiguration::SINGLETON;
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string registrationCode = "No Registration Code";

    public: const std::string NAME = "registrationid";

    private: const std::string FILE = "Registration.dat";

private: RegistrationConfiguration(){

        try {
            
                        if(FileFactory::getInstance().isFile(this->FILE))
                        
                                    {
                                    this->read();
    

                                    }
                                
                        else {
                            this->write();
    

                        }
                            

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, commonStrings.CONSTRUCTOR, e);
    
}

}


                //@Throws(Exception.constructor)
            
    private: void read(){

    FileStreamFactory fileInputStreamFactory = FileStreamFactory::getInstance();;
    

    InputStream fileInputStream = fileInputStreamFactory.getFileInputStreamInstance(StringUtil::getInstance().EMPTY_STRING, this->FILE);;
    

    DataInputStream dataInputStream = DataInputStream(fileInputStream);;
    
this->setRegistrationCode(dataInputStream.readUTF());
    
PreLogUtil::put(StringMaker().append("Read Configuration: ").append(this->toString()).toString(), this, "read");
    
}


                //@Throws(Exception.constructor)
            
    public: void write(){

    AbDataOutputStream dataOutputStream = 
                null
            ;;
    

        try {
            this->logUtil.putF(StringMaker().append("Write Configuration: ").append(this->toString()).toString(), this, "write");
    

    FileStreamFactory fileInputStreamFactory = FileStreamFactory::getInstance();;
    

    OutputStream fileOutputStream = fileInputStreamFactory.getFileOutputStreamInstance(StringUtil::getInstance().EMPTY_STRING, this->FILE);;
    
dataOutputStream= AbDataOutputStream(fileOutputStream);
    
dataOutputStream.writeUTF(this->getRegistrationCode());
    
dataOutputStream.flush();
    

         finally {
            StreamUtil::getInstance().close(dataOutputStream);
    

         }
        
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringMaker().append("Registration Code: ").append(this->getRegistrationCode()).toString();;
    
}


    public: void setRegistrationCode(std::string registrationCode){
this->registrationCode= registrationCode;
    
}


    public: std::string getRegistrationCode(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->registrationCode;
    
}


};

            

