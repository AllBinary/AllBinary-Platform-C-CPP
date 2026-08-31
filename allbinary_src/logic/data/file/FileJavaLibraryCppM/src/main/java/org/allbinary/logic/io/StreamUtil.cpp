
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
        
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/Closeable.h>

      
#include <java/io/InputStream.h>

      
#include <java/io/OutputStream.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class StreamUtil
            : public Object
         {
        

    private: static const instance: StreamUtil = new StreamUtil();

    public static StreamUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StreamUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

private constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public OutputStream get(InputStream inputStream, OutputStream outputStream, std::vector<int8_t> buffer){

    len: int32_t = 0;;
    

        while(true)
        {
len= inputStream!.read(buffer, 0, buffer.length);
    

                        if(len !=  -1)
                        
                                    {
                                    
                                    }
                                
                        else {
                            break;

                    

                        }
                            
outputStream!.write(buffer, 0, len);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return outputStream;
    
}


                //@Throws(Exception.constructor)
            
    public std::vector<int8_t> getByteArray(InputStream inputStream, ByteArrayOutputStream outputStream2, std::vector<int8_t> byteArray){

    outputStream: ByteArrayOutputStream = outputStream2;;
    

        try {
            this.get(inputStream, outputStream, byteArray);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return outputStream!.toByteArray();;
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

         finally {
            this.close(outputStream);
    

         }
        
}


    public bool close(Closeable closeable){

        try {
            
                        if(closeable != 
                                    null
                                )
                        
                                    {
                                    closeable.close();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.CLOSE, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


};

            

