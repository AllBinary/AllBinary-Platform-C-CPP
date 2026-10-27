
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

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/apache/commons/fileupload/FileItem.h>

      
#include <org/apache/commons/fileupload/FileItemHeaders.h>

      
#include <org/apache/commons/fileupload/FileItemUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AbFileItem
            : public Object
        , public FileItem {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

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
