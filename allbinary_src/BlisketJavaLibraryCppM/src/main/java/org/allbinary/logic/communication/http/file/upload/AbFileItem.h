
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_ABFILEITEM_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_ABFILEITEM_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/UnsupportedEncodingException.h>
class ForcedLogUtil;
class LogUtil;
class AbFile;
class StringUtil;
class StringValidationUtil;
class CommonStrings;
#include <org/apache/commons/fileupload/FileItem.h>
class FileItemHeaders;
class FileItemUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AbFileItem
            : public virtual Object
        , public virtual FileItem {

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: std::string name;

    private: std::string fieldName;

    private: std::vector<int8_t> byteArray;

public: AbFileItem(std::string name, std::string fieldName, std::vector<int8_t> byteArray);

                //@Throws(IOException.constructor)
            
    public: InputStream* getInputStream();

    public: std::string getContentType();

    public: std::string getName();

    public: bool isInMemory();

    public: int64_t getSize();

    public: std::vector<int8_t> get();

                //@Throws(UnsupportedEncodingException.constructor)
            
    public: std::string getString(std::string encoding);

    public: std::string getString();

                //@Throws(Exception.constructor)
            
    public: void write(File* file);

                //@Throws(Exception.constructor)
            
    public: void write(AbFile* file);

    public: void delete_();

    public: std::string getFieldName();

    public: void setFieldName(std::string name);

    public: bool isFormField();

    public: void setFormField(bool state);

                //@Throws(IOException.constructor)
            
    public: OutputStream* getOutputStream();

    public: FileItemHeaders* getHeaders();

    public: void setHeaders(FileItemHeaders* fih);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_ABFILEITEM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_ABFILEITEM_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_ABFILEITEM_H_COMPLETE
        #if __has_include(<java/io/File.h>)
#include <java/io/File.h>
#endif
#if __has_include(<java/io/IOException.h>)
#include <java/io/IOException.h>
#endif
#if __has_include(<java/io/InputStream.h>)
#include <java/io/InputStream.h>
#endif
#if __has_include(<java/io/OutputStream.h>)
#include <java/io/OutputStream.h>
#endif
#if __has_include(<java/io/UnsupportedEncodingException.h>)
#include <java/io/UnsupportedEncodingException.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/apache/commons/fileupload/FileItem.h>)
#include <org/apache/commons/fileupload/FileItem.h>
#endif
#if __has_include(<org/apache/commons/fileupload/FileItemHeaders.h>)
#include <org/apache/commons/fileupload/FileItemHeaders.h>
#endif
#if __has_include(<org/apache/commons/fileupload/FileItemUtil.h>)
#include <org/apache/commons/fileupload/FileItemUtil.h>
#endif

        #endif
    
