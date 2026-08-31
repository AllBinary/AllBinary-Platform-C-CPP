
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
        



            #include "../../java/lang/Class.h"
        
            #include "../../java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <admin/taghelpers/CustomLoaderHelperFactory.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <tags/CustomTagSupport.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CustomLoaderTag: public CustomTagSupport {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: command: string;

    private: webappPath: string;

    private: propertiesHashMap: HashMap<any, any>;

public constructor (){

            super();
        }


    public setCommand(string command){
this.command= command;
    
}


    public setWebappPath(string value){
this.webappPath= value;
    
}


                //@Throws(LicensingException.constructor)
            
    setCustomLoaderWebappPath(){

        try {
            
    anyType: any = new CustomLoaderHelperFactory().getInstance(this.propertiesHashMap, pageContext)!;;
    

    helperClass: Function = anyType!.constructor!;;
    

    methodParams: std::vector<Function> = 
                                                        [
                                                            this.webappPath!.constructor
                                                        ];;
    

    methodArgs: std::vector<any> = 
                                                        [
                                                            this.webappPath
                                                        ];;
    

    setMethod: Method = helperClass!.getMethod("setWebappPath", methodParams)!;;
    
setMethod!.invoke(anyType, methodArgs);
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

                //: 
/* catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.JSPTAGERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "setCustomLoaderWebappPath()", e);
    

                                    }
                                
}
*/
}


                //@Throws(JspTagException.constructor)
            
    public int32_t doStartTag(){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.JSPTAG))
                        
                                    {
                                    this.logUtil!.putF(this.commonStrings!.START, this, tagStrings!.DO_START_TAG);
    

                                    }
                                

                        if(this.command != 
                                    null
                                )
                        
                                    {
                                    this.propertiesHashMap= new HashMap<any, any>();
    

                        if(this.command.compareTo(org.allbinary.globals.GLOBALS2.SET) == 0)
                        
                                    {
                                    this.setCustomLoaderWebappPath();
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    

                //: 
} catch(e) 
            {
AbResponseHandler.sendJspTagLicensingRedirect(this.pageContext, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    
}

                //: 
/* catch(e) 
            {
AbResponseHandler.sendJspTagRedirect(this.pageContext, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    
}
*/
}


};

            

