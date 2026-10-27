
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_APACHE_COMMONS_FILEUPLOAD_FILEITEMUTIL_H
        #define ORG_APACHE_COMMONS_FILEUPLOAD_FILEITEMUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/InputStream.h>
class LogUtil;
class StreamUtil;
class AbFile;
class AbFileNativeUtil;
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class FileItemStream;
class FileItem;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class FileItemUtil
            : public virtual Object
         {

    private: static FileItemUtil* instance_owner();
    private: static FileItemUtil* instance;

    public: static FileItemUtil* getInstance();


            
    public: FileItemUtil();
        
    /*protected*/ public: LogUtil* logUtil;

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_APACHE_COMMONS_FILEUPLOAD_FILEITEMUTIL_H_COMPLETE)
        #define ORG_APACHE_COMMONS_FILEUPLOAD_FILEITEMUTIL_H_COMPLETE
        #if __has_include(<java/io/ByteArrayOutputStream.h>)
#include <java/io/ByteArrayOutputStream.h>
#endif
#if __has_include(<java/io/InputStream.h>)
#include <java/io/InputStream.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/StreamUtil.h>)
#include <org/allbinary/logic/io/StreamUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFileNativeUtil.h>)
#include <org/allbinary/logic/io/file/AbFileNativeUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include("org/apache/commons/fileupload/FileItemStream.h")
#include "org/apache/commons/fileupload/FileItemStream.h"
#endif
#if __has_include("org/apache/commons/fileupload/FileItem.h")
#include "org/apache/commons/fileupload/FileItem.h"
#endif

        #endif
    
