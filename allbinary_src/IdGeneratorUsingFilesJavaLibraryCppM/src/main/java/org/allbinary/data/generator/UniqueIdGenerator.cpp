
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Long.h"
        
#include <java/io/IOException.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/AbDataInputStream.h>

      
#include <org/allbinary/logic/io/AbDataOutputStream.h>

      
#include <org/allbinary/logic/io/AbFileInputStream.h>

      
#include <org/allbinary/logic/io/AbFileOutputStream.h>

      
#include <org/allbinary/logic/io/DataOutputStreamFactory.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "IdGeneratorInterface.h"

class UniqueIdGenerator
            : public Object
        : public IdGeneratorInterface {

    public: static const std::string EXT = ".unq";

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: AbFile newFile;

    private: int64_t id = 0;

public: UniqueIdGenerator(){
}


    public: void initialize(int32_t value){

        try {
            this->newFile.createNewFile();
    

    AbDataOutputStream idData = DataOutputStreamFactory::getInstance().getInstanceForAbFile(this->newFile);;
    
idData.writeLong(value);
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().IDLOGGING))
                        
                                    {
                                    
    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, "initialize", e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setFile(std::string filePathName, std::string name){
this->newFile= AbFile::createAbFile(filePathName);
    
}


                //@Throws(IOException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::string getNext(){

    AbDataInputStream idData = 
                null
            ;;
    

    AbDataOutputStream idOutData = 
                null
            ;;
    

        try {
            
    AbFileInputStream idFile = AbFileInputStream(this->newFile);;
    
idData= AbDataInputStream(idFile);
    
this->id= idData.readLong();
    

    AbFileOutputStream idOutFile = AbFileOutputStream::createFromAbFile(this->newFile);;
    
idOutData= AbDataOutputStream(idOutFile);
    
idOutData.writeLong(this->id +1);
    

    Long idLong = Long(this->id);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return idLong.toString();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().IDLOGGING))
                        
                                    {
                                    
    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, "getNext", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error";
    
}

         finally {
            StreamUtil::getInstance().close(idData);
    
StreamUtil::getInstance().close(idOutData);
    

         }
        
}


};

            

