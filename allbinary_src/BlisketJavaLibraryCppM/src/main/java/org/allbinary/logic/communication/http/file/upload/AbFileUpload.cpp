
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
        



#include <java/io/IOException.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/apache/commons/fileupload/FileItemFactory.h>

      
#include <org/apache/commons/fileupload/FileItemIterator.h>

      
#include <org/apache/commons/fileupload/FileUpload.h>

      
#include <org/apache/commons/fileupload/FileUploadException.h>

      
#include <org/apache/commons/fileupload/servlet/ServletRequestContext.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AbFileUpload: public FileUpload {

public: AbFileUpload(FileItemFactory fileItemFactory) : FileUpload(fileItemFactory){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(FileUploadException.constructor, IOException.constructor)
            
    public: FileItemIterator getItemIterator(HttpServletRequest request){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.getItemIterator(ServletRequestContext(request));;
    
}


};

            

