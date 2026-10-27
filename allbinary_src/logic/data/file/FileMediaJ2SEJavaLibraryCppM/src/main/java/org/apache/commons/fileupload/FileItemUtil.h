
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_APACHE_COMMONS_FILEUPLOAD_FILEITEMUTIL_H
        #define ORG_APACHE_COMMONS_FILEUPLOAD_FILEITEMUTIL_H

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

    public: static FileItemUtil* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

    public: const std::string DEFAULT_CHARSET = "ISO-8859-1";

                //@Throws(Exception.constructor)
            
    public: std::string getString(std::vector<int8_t> byteArray);

                //@Throws(Exception.constructor)
            
    public: std::string getString(FileItemStream* fileItem);

                //@Throws(Exception.constructor)
            
    public: std::vector<int8_t> getBytes(FileItemStream* fileItem);

                //@Throws(Exception.constructor)
            
    public: void write(FileItem* fileItem, AbFile* file);

};

            


        #endif //ORG_APACHE_COMMONS_FILEUPLOAD_FILEITEMUTIL_H
