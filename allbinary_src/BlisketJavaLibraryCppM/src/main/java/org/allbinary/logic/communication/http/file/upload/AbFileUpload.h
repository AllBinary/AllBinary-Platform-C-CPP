
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_ABFILEUPLOAD_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_ABFILEUPLOAD_H

#include <java/io/IOException.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/apache/commons/fileupload/FileItemFactory.h>

      
#include <org/apache/commons/fileupload/FileItemIterator.h>

      
#include <org/apache/commons/fileupload/FileUpload.h>

      
#include <org/apache/commons/fileupload/FileUploadException.h>

      
#include <org/apache/commons/fileupload/servlet/ServletRequestContext.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AbFileUpload: public FileUpload {
        

public constructor (FileItemFactory fileItemFactory);

                //@Throws(FileUploadException.constructor, IOException.constructor)
            
    public FileItemIterator getItemIterator(HttpServletRequest request);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_ABFILEUPLOAD_H
