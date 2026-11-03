
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_ABFILEITEM_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_ABFILEITEM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/http/file/upload/AbFileItem.h"
        

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
        

AbFileItem::AbFileItem(std::string name, std::string fieldName, std::vector<int8_t> byteArray) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->name= name;
    
this->fieldName= fieldName;
    
this->byteArray= byteArray;
    
}


                //@Throws(IOException.constructor)
            
    auto AbFileItem::getInputStream() -> InputStream*{



                            throw IOException(this->commonStrings->NOT_IMPLEMENTED);
                    
}


    auto AbFileItem::getContentType() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto AbFileItem::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->name;
    
}


    auto AbFileItem::isInMemory() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}


    auto AbFileItem::getSize() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->byteArray.size();
    
}


    auto AbFileItem::get() -> std::vector<int8_t>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->byteArray;
    
}


                //@Throws(UnsupportedEncodingException.constructor)
            
    auto AbFileItem::getString(std::string encoding) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::fromChars(this->byteArray, encoding);
    
}


    auto AbFileItem::getString() -> std::string{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return FileItemUtil::getInstance()->getString(this->byteArray);;
    

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->HTTPERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "getString", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StringUtil::getInstance()->EMPTY_STRING;
    
}

}


                //@Throws(Exception.constructor)
            
    auto AbFileItem::write(File* file) -> void{



                            throw Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    auto AbFileItem::write(AbFile* file) -> void{



                            throw Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


    auto AbFileItem::delete_() -> void{
ForcedLogUtil::log(this->commonStrings->NOT_IMPLEMENTED, "delete()");
    
}


    auto AbFileItem::getFieldName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->fieldName;
    
}


    auto AbFileItem::setFieldName(std::string name) -> void{
this->fieldName= name;
    
}


    auto AbFileItem::isFormField() -> bool{

                        if(StringValidationUtil::getInstance()->isEmpty(this->fieldName))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                        }
                            
}


    auto AbFileItem::setFormField(bool state) -> void{
}


                //@Throws(IOException.constructor)
            
    auto AbFileItem::getOutputStream() -> OutputStream*{



                            throw IOException(this->commonStrings->NOT_IMPLEMENTED);
                    
}


    auto AbFileItem::getHeaders() -> FileItemHeaders*{



                            throw RuntimeException(this->commonStrings->NOT_IMPLEMENTED);
                    
}


    auto AbFileItem::setHeaders(FileItemHeaders* fih) -> void{



                            throw RuntimeException(this->commonStrings->NOT_IMPLEMENTED);
                    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_ABFILEITEM_CPP
