
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
        

    public static const EXT: string = ".unq";

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: newFile: AbFile;

    private: id: int64_t = 0;

public constructor (){

            super();
        }


    public initialize(int32_t value){

        try {
            this.newFile!.createNewFile();
    

    idData: AbDataOutputStream = DataOutputStreamFactory.getInstance()!.getInstanceForAbFile(this.newFile)!;;
    
idData!.writeLong(value);
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.IDLOGGING))
                        
                                    {
                                    
    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, "initialize", e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public setFile(string filePathName, string name){
this.newFile= AbFile.createAbFile(filePathName);
    
}


                //@Throws(IOException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public string getNext(){

    idData: AbDataInputStream = 
                null
            ;;
    

    idOutData: AbDataOutputStream = 
                null
            ;;
    

        try {
            
    idFile: AbFileInputStream = new AbFileInputStream(this.newFile);;
    
idData= new AbDataInputStream(idFile);
    
this.id= idData!.readLong();
    

    idOutFile: AbFileOutputStream = AbFileOutputStream.createFromAbFile(this.newFile)!;;
    
idOutData= new AbDataOutputStream(idOutFile);
    
idOutData!.writeLong(this.id +1);
    

    idLong: Long = new Long(this.id);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return idLong!.toString();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.IDLOGGING))
                        
                                    {
                                    
    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, "getNext", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error";
    
}

         finally {
            StreamUtil.getInstance()!.close(idData);
    
StreamUtil.getInstance()!.close(idOutData);
    

         }
        
}


};

            

