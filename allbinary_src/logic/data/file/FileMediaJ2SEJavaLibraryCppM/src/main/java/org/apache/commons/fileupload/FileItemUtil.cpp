
        /* Generated Code Do Not Modify */
        



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

class FileItemUtil
            : public Object
         {

    private: static FileItemUtil* instance() { static std::unique_ptr<FileItemUtil> value(new FileItemUtil()); return value.get(); }

    public: static FileItemUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FileItemUtil::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    public: const std::string DEFAULT_CHARSET = "ISO-8859-1";

                //@Throws(Exception.constructor)
            
    public: std::string getString(std::vector<int8_t> byteArray){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return byteArray;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string getString(FileItemStream* fileItem){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getBytes.toCharArray().slice(0, ).join('');
    
}


                //@Throws(Exception.constructor)
            
    public: std::vector<int8_t> getBytes(FileItemStream* fileItem){

    StreamUtil* streamUtil = StreamUtil::getInstance();;
    

    InputStream* inputStream = 
                null
            ;;
    

    ByteArrayOutputStream* outputStream = 
                null
            ;;
    

        try {
            inputStream= fileItem->openStream();
    
outputStream= new ByteArrayOutputStream();
    

                        if(fileItem->isFormField())
                        
                                    {
                                    this->logUtil->putF("FileItemStream FieldName: " +fileItem->getFieldName(), this, "write()");
    

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
    

         finally {
            streamUtil->close(outputStream);
    
streamUtil->close(inputStream);
    

         }
        
}


                //@Throws(Exception.constructor)
            
    public: void write(FileItem* fileItem, AbFile* file){
fileItem->write(AbFileNativeUtil::get(file));
    
}


};

            

