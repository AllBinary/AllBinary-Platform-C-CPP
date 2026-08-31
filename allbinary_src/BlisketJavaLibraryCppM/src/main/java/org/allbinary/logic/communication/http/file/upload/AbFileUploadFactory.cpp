
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <java/util/ArrayList.h>

      
#include <java/util/List.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/logic/communication/http/AbFileItemFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/apache/commons/fileupload/FileItemIterator.h>

      
#include <org/apache/commons/fileupload/FileItemStream.h>

      
#include <org/apache/commons/fileupload/FileItemUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbFileUpload.h"
#include "HttpFileUploadUtil.h"
#include "AbFileItem.h"

class AbFileUploadFactory
            : public Object
         {
        

    private: static const instance: AbFileUploadFactory = new AbFileUploadFactory();

    public static AbFileUploadFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbFileUploadFactory.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

private constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public List getFileItemStreamList(HttpServletRequest httpServletRequest){

        try {
            
    fileUpload: AbFileUpload = new AbFileUpload(new AbFileItemFactory());;
    

    iterator: FileItemIterator = fileUpload!.getItemIterator(httpServletRequest)!;;
    

    items: List = new ArrayList();;
    

        while(iterator.hasNext())
        {

    fileItemStream: FileItemStream = iterator.next()!;;
    
HttpFileUploadUtil.log(fileItemStream);
    

    fileItem: AbFileItem = new AbFileItem(fileItemStream!.getName(), fileItemStream!.getFieldName(), FileItemUtil.getInstance()!.getBytes(fileItemStream));;
    
items.add(fileItem);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return items;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPERROR))
                        
                                    {
                                    
    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, "get()", e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public List getFileItemList(HttpServletRequest httpServletRequest){

        try {
            
    abFileUpload: AbFileUpload = new AbFileUpload(new AbFileItemFactory());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return abFileUpload!.parseRequest(httpServletRequest);;
    

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPERROR))
                        
                                    {
                                    this.logUtil!.put(commonStrings!.EXCEPTION, this, "get()", e);
    

                                    }
                                



                            throw e;
                    
}

}


};

            

