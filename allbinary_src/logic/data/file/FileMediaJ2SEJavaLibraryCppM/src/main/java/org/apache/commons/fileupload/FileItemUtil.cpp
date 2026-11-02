
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_APACHE_COMMONS_FILEUPLOAD_FILEITEMUTIL_CPP
        #define ORG_APACHE_COMMONS_FILEUPLOAD_FILEITEMUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/apache/commons/fileupload/FileItemUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/InputStream.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/AbFileNativeUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/apache/commons/fileupload/FileItemStream.h"
#include "org/apache/commons/fileupload/FileItem.h"


FileItemUtil::FileItemUtil() : logUtil(LogUtil::getInstance()) {
        }
        auto FileItemUtil::instance_owner() -> FileItemUtil* { static std::unique_ptr<FileItemUtil> value(new FileItemUtil()); return value.get(); }
FileItemUtil* FileItemUtil::instance = FileItemUtil::instance_owner();

    auto FileItemUtil::getInstance() -> FileItemUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FileItemUtil::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto FileItemUtil::getString(std::vector<int8_t> byteArray) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JavaString::fromChars(byteArray, this->DEFAULT_CHARSET);
    
}


                //@Throws(Exception.constructor)
            
    auto FileItemUtil::getString(FileItemStream* fileItem) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getBytes.toCharArray().slice(0, ).join('');
    
}


                //@Throws(Exception.constructor)
            
    auto FileItemUtil::getBytes(FileItemStream* fileItem) -> std::vector<int8_t>{

    StreamUtil* streamUtil = StreamUtil::getInstance();;
    

    InputStream* inputStream = 
                null
            ;;
    

    ByteArrayOutputStream* outputStream = 
                null
            ;;
    

        {
        
        auto finallyFunction_N66308 = [&]() {
            streamUtil->close(outputStream);
    
streamUtil->close(inputStream);
    

        };
        
        struct FinallyGuard_N66308 { decltype(finallyFunction_N66308)& function; ~FinallyGuard_N66308() { function(); } } finallyGuard_N66308{finallyFunction_N66308};
        
        {
            inputStream= fileItem->openStream();
    
outputStream= new ByteArrayOutputStream();
    

                        if(fileItem->isFormField())
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("FileItemStream FieldName: ") +JavaString::valueOf(fileItem->getFieldName()), this, "write()");
    

                                    }
                                
                        else {
                            
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Uploaded File FieldName: ");
    
stringBuffer->append(fileItem->getFieldName());
    
stringBuffer->append(" name = ");
    
stringBuffer->append(fileItem->getName());
    
this->logUtil->putF(stringBuffer->toString(), this, "write()");
    

                        }
                            
outputStream= dynamic_cast<ByteArrayOutputStream*>(streamUtil->get(inputStream, outputStream, std::vector<int8_t>(16384)));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return outputStream->toByteArray();;
    

        }

        }

}


                //@Throws(Exception.constructor)
            
    auto FileItemUtil::write(FileItem* fileItem, AbFile* file) -> void{
fileItem->write(AbFileNativeUtil::get(file));
    
}




        #endif //ORG_APACHE_COMMONS_FILEUPLOAD_FILEITEMUTIL_CPP
