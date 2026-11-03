
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_STREAMUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_IO_STREAMUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/StreamUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/Closeable.h>

      
#include <java/io/InputStream.h>

      
#include <java/io/OutputStream.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto StreamUtil::instance_owner() -> StreamUtil* { static std::unique_ptr<StreamUtil> value(new StreamUtil()); return value.get(); }
StreamUtil* StreamUtil::instance = StreamUtil::instance_owner();

    auto StreamUtil::getInstance() -> StreamUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StreamUtil::instance;
    
}


StreamUtil::StreamUtil() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto StreamUtil::get(InputStream* inputStream, OutputStream* outputStream, std::vector<int8_t> buffer) -> OutputStream*{

    int32_t len = 0;;
    

        while(true)
        {
len= inputStream->read(buffer, 0, buffer.size());
    

                        if(len !=  -1)
                        
                                    {
                                    
                                    }
                                
                        else {
                            break;

                    

                        }
                            
outputStream->write(buffer, 0, len);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return outputStream;
    
}


                //@Throws(Exception.constructor)
            
    auto StreamUtil::getByteArray(InputStream* inputStream, ByteArrayOutputStream* outputStream2, std::vector<int8_t> byteArray) -> std::vector<int8_t>{

    ByteArrayOutputStream* outputStream = outputStream2;;
    

        {
        
        auto finallyFunction_N66271 = [&]() {
            this->close(outputStream);
    

        };
        
        struct FinallyGuard_N66271 { decltype(finallyFunction_N66271)& function; ~FinallyGuard_N66271() { function(); } } finallyGuard_N66271{finallyFunction_N66271};
        
        try {
            this->get(inputStream, outputStream, byteArray);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return outputStream->toByteArray();;
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

        }

}


    auto StreamUtil::close(Closeable* closeable) -> bool{

        try {
            
                        if(closeable != 
                                    nullptr
                                )
                        
                                    {
                                    closeable->close();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->CLOSE, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}




        #endif //ORG_ALLBINARY_LOGIC_IO_STREAMUTIL_CPP
