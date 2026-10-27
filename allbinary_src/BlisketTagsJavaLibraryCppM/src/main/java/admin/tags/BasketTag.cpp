
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <admin/taghelpers/BasketHelperFactory.h>

      
#include <admin/taghelpers/BasketRequestHelperFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/user/commerce/inventory/basket/BasketData.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <tags/CustomTagSupport.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasketTag: public CustomTagSupport {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: std::string command;

    private: std::string storeName;

    private: HashMap<Object*, Object*>* propertiesHashMap;

public: BasketTag(){
}


    public: void setCommand(std::string command){
this->command= command;
    
}


    public: void setStoreName(std::string value){
this->storeName= value;
    
}


                //@Throws(LicensingException.constructor)
            
    private: bool isBasketEmpty(){

        try {
            
    Object* anyType = (new BasketHelperFactory())->getInstance(this->propertiesHashMap, this->pageContext);;
    

    Method* method = anyType->getClass()->getMethod("isBasketEmpty", 
                            nullptr);;
    

    bool emptyBoolean = method->invoke(anyType, 
                            nullptr);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return emptyBoolean.valueOf();;
    

                //: 
} catch(LicensingException& e) 
            {



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings.EXCEPTION, this, "isBasketEmpty()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}

}


                //@Throws(LicensingException.constructor)
            
    private: bool addItemToBasket(){

        try {
            
    Object* anyType = (new BasketRequestHelperFactory())->getInstance(this->propertiesHashMap, this->pageContext);;
    

    Method* method = anyType->getClass()->getMethod("addItemToBasket", 
                            nullptr);;
    

    bool emptyBoolean = method->invoke(anyType, 
                            nullptr);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return emptyBoolean.valueOf();;
    

                //: 
} catch(LicensingException& e) 
            {



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

    std::string error = "Failed to add item from Basket";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings.EXCEPTION, this, "addItemToBasket()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


                //@Throws(LicensingException.constructor)
            
    private: bool removeItemFromBasket(){

        try {
            
    Object* anyType = (new BasketRequestHelperFactory())->getInstance(this->propertiesHashMap, this->pageContext);;
    

    Method* method = anyType->getClass()->getMethod("removeItemFromBasket", 
                            nullptr);;
    

    bool emptyBoolean = method->invoke(anyType, 
                            nullptr);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return emptyBoolean.valueOf();;
    

                //: 
} catch(LicensingException& e) 
            {



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

    std::string error = "Failed to remove item from Basket";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings.EXCEPTION, this, "removeItemFromBasket()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


                //@Throws(LicensingException.constructor)
            
    private: bool adjustBasket(){

        try {
            
    Object* anyType = (new BasketRequestHelperFactory())->getInstance(this->propertiesHashMap, this->pageContext);;
    

    Method* method = anyType->getClass()->getMethod("adjustBasket", 
                            nullptr);;
    

    bool emptyBoolean = method->invoke(anyType, 
                            nullptr);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return emptyBoolean.valueOf();;
    

                //: 
} catch(LicensingException& e) 
            {



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

    std::string error = "Failed to Adjust Basket";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings.EXCEPTION, this, "adjustBasket()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag(){

        try {
            
                        if(true)
                        
                                    {
                                    this->propertiesHashMap= StdUtil::getInstance()->createHashMap();
    
this->propertiesHashMap->put(StoreFrontData::getInstance()->NAME, this->storeName);
    

                        if(this->command.compare(BasketData::INSERT) == 0)
                        
                                    {
                                    
                        if(!this->addItemToBasket())
                        
                                    {
                                    this->pageContext.getOut()->println("Item is not currently being sold.<p/>");
    

                                    }
                                

                                    }
                                
                             else 
                        if(this->command.compare(BasketData::DELETE) == 0)
                        
                                    {
                                    this->removeItemFromBasket();
    

                                    }
                                
                             else 
                        if(this->command.compare(BasketData::ADJUST) == 0)
                        
                                    {
                                    this->adjustBasket();
    

                                    }
                                
                             else 
                        if(this->command.compare(BasketData::ISEMPTY) == 0)
                        
                                    {
                                    
                        if(this->isBasketEmpty())
                        


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->EVAL_BODY_INCLUDE;
    
                             else 
                        if()
                        

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    

                //: 
} catch(LicensingException& e) 
            {
AbResponseHandler::sendJspTagLicensingRedirect(this->pageContext, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    
}

                //: 
 catch(Exception& e) 
            {
AbResponseHandler::sendJspTagRedirect(this->pageContext, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    
}

}


};

            

