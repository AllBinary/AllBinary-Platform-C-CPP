
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_APACHE_COMMONS_FILEUPLOAD_FILEITEMUTIL_H
        #define ORG_APACHE_COMMONS_FILEUPLOAD_FILEITEMUTIL_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/InputStream.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/AbFileNativeUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "FileItemStream.h"
#include "FileItem.h"

class FileItemUtil
            : public Object
         {
        

    private: static const instance: FileItemUtil = new FileItemUtil();

    public static FileItemUtil getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    public const DEFAULT_CHARSET: string = "ISO-8859-1";

                //@Throws(Exception.constructor)
            
    public string getString(std::vector<int8_t> byteArray);

                //@Throws(Exception.constructor)
            
    public string getString(FileItemStream fileItem);

                //@Throws(Exception.constructor)
            
    public std::vector<int8_t> getBytes(FileItemStream fileItem);

                //@Throws(Exception.constructor)
            
    public write(FileItem fileItem, AbFile file);

};

            


        #endif //ORG_APACHE_COMMONS_FILEUPLOAD_FILEITEMUTIL_H
