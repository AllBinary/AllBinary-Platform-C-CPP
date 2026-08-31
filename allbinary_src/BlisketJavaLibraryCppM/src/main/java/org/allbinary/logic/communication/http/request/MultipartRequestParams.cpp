
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
        



            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/List.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/logic/communication/http/file/upload/AbFileUploadFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/apache/commons/fileupload/FileItem.h>

      
#include <org/apache/commons/fileupload/FileUploadBase/InvalidContentTypeException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RequestParams.h"

class MultipartRequestParams: public RequestParams {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: special: bool = false;

public constructor (HttpServletRequest request){
            super();
                    

                            //For kotlin this is before the body of the constructor.
                    
this.processMultipartRequest(request);
    
}


public constructor (PageContext pageContext){
            super();
                    

                            //For kotlin this is before the body of the constructor.
                    
this.processMultipartRequest(pageContext!.getRequest() as HttpServletRequest);
    
}


    setSpecial(){
this.special= true;
    
}


    processMultipartRequest(HttpServletRequest request){

        try {
            
    specialRequest: HashMap<any, any> = new HashMap<any, any>();;
    

    multipartRequestList: List = AbFileUploadFactory.getInstance()!.getFileItemStreamList(request)!;;
    

                        if(multipartRequestList != 
                                    null
                                )
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("FileItem List Size: " +multipartRequestList!.length, this, "processMultipartRequest()");
    

                                    }
                                

    fileItemArray: std::vector<any> = multipartRequestList!.toArray()!;;
    

    size: int32_t = fileItemArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    fileItem: FileItem = fileItemArray[index]! as FileItem;;
    

    name: string = fileItem!.getName()!;;
    

                        if(StringValidationUtil.getInstance()!.isEmpty(name))
                        
                                    {
                                    specialRequest!.put(fileItem!.getFieldName(), fileItem!.getString());
    

                                    }
                                
                        else {
                            specialRequest!.put(fileItem!.getFieldName(), fileItem);
    

                        }
                            
}


                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("Special Request Data: " +specialRequest!.toString(), this, "processMultipartRequest()");
    

                                    }
                                
this.setSpecial();
    
this.setMap(specialRequest);
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("Using Normal RequestParams", this, "processMultipartRequest()");
    

                                    }
                                
super.setMap(request.getParameterMap());
    
}

                //: 
/* catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUESTERROR))
                        
                                    {
                                    this.logUtil!.putF("Should Not Occur", this, "processMultipartRequest()");
    

                                    }
                                
super.setMap(request.getParameterMap());
    
}
*/
}


                //@Throws(Exception.constructor)
            
    public HashMap<any, any> toHashMap(){

                        if(this.special)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getMap() as HashMap<any, any>;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.toHashMap();;
    

                        }
                            
}


};

            

