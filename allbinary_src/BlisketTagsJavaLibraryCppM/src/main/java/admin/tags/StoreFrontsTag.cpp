
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
        



            #include "../../java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <javax/servlet/jsp/tagext/TagSupport.h>

      
#include <admin/taghelpers/StoreFrontsHelperFactory.h>

      
#include <admin/taghelpers/StoreFrontsRequestHelperFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TableTag.h"

class StoreFrontsTag: public TableTag {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

public constructor (){

            super();
        this.setTagHelperFactory(new StoreFrontsHelperFactory());
    
this.setTagRequestHelperFactory(new StoreFrontsRequestHelperFactory());
    
}


                //@Throws(LicensingException.constructor)
            
    string generateSelect(){

        try {
            
    anyType: any = this.getTagHelperFactoryInterface()!.getInstance(this.getPropertiesHashMap(), pageContext)!;;
    

    method: Method = anyType!.constructor.name.getMethod("generateSelect", 
                            nullptr)!;;
    

    result: string = method.invoke(anyType, 
                            nullptr) as string;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

                //: 
/* catch(e) 
            {

    error: string = "Failed to generate storefronts select";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "generateSelect()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}
*/
}


                //@Throws(LicensingException.constructor)
            
    string install(){

        try {
            
    anyType: any = this.getTagRequestHelperFactoryInterface()!.getInstance(this.getPropertiesHashMap(), pageContext)!;;
    

    method: Method = anyType!.constructor.name.getMethod("install", 
                            nullptr)!;;
    

    result: string = method.invoke(anyType, 
                            nullptr) as string;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

                //: 
/* catch(e) 
            {

    error: string = "Failed to generate storefronts select";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "generateSelect()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}
*/
}


                //@Throws(LicensingException.constructor)
            
    string sendStoreCreatedEmails(){

        try {
            
    anyType: any = this.getTagRequestHelperFactoryInterface()!.getInstance(this.getPropertiesHashMap(), pageContext)!;;
    

    method: Method = anyType!.constructor.name.getMethod("sendStoreCreatedEmails", 
                            nullptr)!;;
    

    result: string = method.invoke(anyType, 
                            nullptr) as string;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

                //: 
/* catch(e) 
            {

    error: string = "Failed to send email";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "sendStoreCreatedEmails()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}
*/
}


                //@Throws(JspTagException.constructor)
            
    public int32_t doStartTag(){

        try {
            
                        if(this.isEnabled())
                        
                                    {
                                    
                        if(this.getCommand() != 
                                    null
                                )
                        
                                    {
                                    
    storeFrontData: StoreFrontData = StoreFrontData.getInstance()!;;
    

                        if(this.getCommand()!.compareTo(storeFrontData!.SELECT) == 0)
                        
                                    {
                                    this.pageContext!.getOut()!.print(this.generateSelect());
    

                                    }
                                
                             else 
                        if(this.getCommand()!.compareTo(storeFrontData!.INSTALL) == 0)
                        
                                    {
                                    this.getPropertiesHashMap()!.put("current", this.getCurrent());
    
this.getPropertiesHashMap()!.put("total", this.getTotal());
    

                        if(this.getCurrent()!.intValue() == this.getTotal()!.intValue())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TagSupport.EVAL_BODY_INCLUDE;
    

                                    }
                                
this.install();
    

                                    }
                                
                             else 
                        if(this.getCommand()!.compareTo(storeFrontData!.INSTALL_COMPLETE) == 0)
                        
                                    {
                                    this.sendStoreCreatedEmails();
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.doStartTag();;
    

                        }
                            

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

            

