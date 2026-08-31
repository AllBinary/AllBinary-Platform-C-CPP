
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <java/io/InputStream.h>

      
#include <java/io/OutputStream.h>

      
#include <org/allbinary/business/init/LicenseInitInfoUtil.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/FileStreamFactory.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/file/FileFactory.h>

      
#include <org/allbinary/logic/io/file/SimpleFileUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LicenseServerInitFileUtil
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const NULL_OUTPUT_STREAM: OutputStream = SimpleFileUtil.nullOutputStream()!;

    public init(){

        try {
            
    filePath: string = LicenseInitInfoUtil.getInstance()!.INITFILENAME;;
    
LicenseInitInfoUtil.getInstance()!.setFilePath(StringUtil.getInstance()!.EMPTY_STRING);
    

                        if(FileFactory.getInstance()!.isFile(filePath))
                        
                                    {
                                    this.logUtil!.putF("Using Existing License File", this, this.commonStrings!.INIT);
    

                                    }
                                
                        else {
                            this.write();
    

                        }
                            

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.INIT, e);
    
}

}


    write(){

    fileOutputStream: OutputStream = this.NULL_OUTPUT_STREAM;;
    

        try {
            
    resourceUtil: ResourceUtil = ResourceUtil.getInstance()!;;
    

    filePath: string = LicenseInitInfoUtil.getInstance()!.INITFILENAME;;
    

    inputStream: InputStream = resourceUtil!.getResourceAsStream(filePath)!;;
    
this.logUtil!.putF("Writing Default License File", this, this.commonStrings!.INIT);
    

    fileStreamFactory: FileStreamFactory = FileStreamFactory.getInstance()!;;
    
fileOutputStream= fileStreamFactory!.getFileOutputStreamInstance(StringUtil.getInstance()!.EMPTY_STRING, filePath);
    

    b: int32_t= 0;;
    

    index: int32_t = 0;;
    

        while(true)
        {
b= inputStream!.read();
    

                        if(b ==  -1)
                        
                                    {
                                    break;

                    

                                    }
                                
fileOutputStream!.write(b);
    
index++;
    
}

this.logUtil!.putF("Wrote Bytes: " +index, this, this.commonStrings!.INIT);
    
fileOutputStream!.flush();
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.INIT, e);
    
}

         finally {
            StreamUtil.getInstance()!.close(fileOutputStream);
    

         }
        
}


};

            

