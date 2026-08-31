
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

      
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <admin/taghelpers/BasketHelperFactory.h>

      
#include <admin/taghelpers/BasketRequestHelperFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/user/commerce/inventory/basket/BasketData.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <tags/CustomTagSupport.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasketTag: public CustomTagSupport {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: command: string;

    private: storeName: string;

    private: propertiesHashMap: HashMap<any, any>;

public constructor (){

            super();
        }


    public setCommand(string command){
this.command= command;
    
}


    public setStoreName(string value){
this.storeName= value;
    
}


                //@Throws(LicensingException.constructor)
            
    bool isBasketEmpty(){

        try {
            
    anyType: any = new BasketHelperFactory().getInstance(this.propertiesHashMap, this.pageContext)!;;
    

    method: Method = anyType!.constructor.name.getMethod("isBasketEmpty", 
                            nullptr)!;;
    

    emptyBoolean: Boolean = method.invoke(anyType, 
                            nullptr) as Boolean;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return emptyBoolean.valueOf();;
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

                //: 
/* catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "isBasketEmpty()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}
*/
}


                //@Throws(LicensingException.constructor)
            
    bool addItemToBasket(){

        try {
            
    anyType: any = new BasketRequestHelperFactory().getInstance(this.propertiesHashMap, this.pageContext)!;;
    

    method: Method = anyType!.constructor.name.getMethod("addItemToBasket", 
                            nullptr)!;;
    

    emptyBoolean: Boolean = method.invoke(anyType, 
                            nullptr) as Boolean;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return emptyBoolean.valueOf();;
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

                //: 
/* catch(e) 
            {

    error: string = "Failed to add item from Basket";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "addItemToBasket()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}
*/
}


                //@Throws(LicensingException.constructor)
            
    bool removeItemFromBasket(){

        try {
            
    anyType: any = new BasketRequestHelperFactory().getInstance(this.propertiesHashMap, this.pageContext)!;;
    

    method: Method = anyType!.constructor.name.getMethod("removeItemFromBasket", 
                            nullptr)!;;
    

    emptyBoolean: Boolean = method.invoke(anyType, 
                            nullptr) as Boolean;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return emptyBoolean.valueOf();;
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

                //: 
/* catch(e) 
            {

    error: string = "Failed to remove item from Basket";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "removeItemFromBasket()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}
*/
}


                //@Throws(LicensingException.constructor)
            
    bool adjustBasket(){

        try {
            
    anyType: any = new BasketRequestHelperFactory().getInstance(this.propertiesHashMap, this.pageContext)!;;
    

    method: Method = anyType!.constructor.name.getMethod("adjustBasket", 
                            nullptr)!;;
    

    emptyBoolean: Boolean = method.invoke(anyType, 
                            nullptr) as Boolean;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return emptyBoolean.valueOf();;
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

                //: 
/* catch(e) 
            {

    error: string = "Failed to Adjust Basket";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "adjustBasket()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}
*/
}


                //@Throws(JspTagException.constructor)
            
    public int32_t doStartTag(){

        try {
            
                        if(this.command != 
                                    null
                                )
                        
                                    {
                                    this.propertiesHashMap= new HashMap<any, any>();
    
this.propertiesHashMap!.put(StoreFrontData.getInstance()!.NAME, this.storeName);
    

                        if(this.command.compareTo(BasketData.INSERT) == 0)
                        
                                    {
                                    
                        if(!this.addItemToBasket())
                        
                                    {
                                    this.pageContext!.getOut()!.println("Item is not currently being sold.<p/>");
    

                                    }
                                

                                    }
                                
                             else 
                        if(this.command.compareTo(BasketData.DELETE) == 0)
                        
                                    {
                                    this.removeItemFromBasket();
    

                                    }
                                
                             else 
                        if(this.command.compareTo(BasketData.ADJUST) == 0)
                        
                                    {
                                    this.adjustBasket();
    

                                    }
                                
                             else 
                        if(this.command.compareTo(BasketData.ISEMPTY) == 0)
                        
                                    {
                                    
                        if(this.isBasketEmpty())
                        


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.EVAL_BODY_INCLUDE;
    
                             else 
                        if()
                        

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

            

