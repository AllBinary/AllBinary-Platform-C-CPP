
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/io/ByteArrayInputStream.h>

      
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/InputStream.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CryptInterface.h"

class BasicCryptUtil
            : public Object
         {
        

    private: static const instance: BasicCryptUtil = new BasicCryptUtil();

    public static BasicCryptUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicCryptUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const tsUtil: TsUtil = TsUtil.getInstance()!;

    private: const XML_START: string = "<?xml";

                //@Throws(Exception.constructor)
            
    public InputStream getDecryptedInputStream(InputStream inputStream, CryptInterface cryptInterface){

    buffer: ByteArrayOutputStream = new ByteArrayOutputStream();;
    

    ch: int32_t= 0;;
    

        while(true)
        {
ch= inputStream!.read();
    

                        if(ch ==  -1)
                        
                                    {
                                    break;

                    

                                    }
                                
buffer.write(ch);
    
}


    decrypted: std::vector<int8_t> = cryptInterface!.decrypt(buffer.toByteArray())!;;
    

    decryptedString: string = String.fromCharCode(...decrypted);;
    

    index: int32_t = decryptedString!.indexOf(this.XML_START)!;;
    

                        if(index > 0)
                        
                                    {
                                    decryptedString= decryptedString!.substring(index);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new ByteArrayInputStream(this.tsUtil!.getByteArray(decryptedString));
    
}


};

            

