
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

            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../java/lang/RuntimeException.h"
        
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
        : public FileItem {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const name: string;

    private: fieldName: string;

    private: const byteArray: std::vector<int8_t>;

public constructor (string name, string fieldName, std::vector<int8_t> byteArray);

                //@Throws(IOException.constructor)
            
    public InputStream getInputStream();

    public string getContentType();

    public string getName();

    public bool isInMemory();

    public int64_t getSize();

    public std::vector<int8_t> get();

                //@Throws(UnsupportedEncodingException.constructor)
            
    public string getString(string encoding);

    public string getString();

                //@Throws(Exception.constructor)
            
    public write(File file);

                //@Throws(Exception.constructor)
            
    public write(AbFile file);

    public delete();

    public string getFieldName();

    public setFieldName(string name);

    public bool isFormField();

    public setFormField(bool state);

                //@Throws(IOException.constructor)
            
    public OutputStream getOutputStream();

    public FileItemHeaders getHeaders();

    public setHeaders(FileItemHeaders fih);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_ABFILEITEM_H
