
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
        



        #ifndef ADMIN_TAGS_BASKETTAG_CPP
        #define ADMIN_TAGS_BASKETTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/tags/BasketTag.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
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

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

BasketTag::BasketTag() : logUtil(LogUtil::getInstance()){
}


    auto BasketTag::setCommand(std::string command) -> void{
this->command= command;
    
}


    auto BasketTag::setStoreName(std::string value) -> void{
this->storeName= value;
    
}


                //@Throws(LicensingException.constructor)
            
    auto BasketTag::isBasketEmpty() -> bool{

        try {
            
    Object* anyType = JavaBoxes::toObject((new BasketHelperFactory())->getInstance(this->propertiesHashMap, this->pageContext));;
    

    Method* method = anyType->getClass()->getMethod("isBasketEmpty", 
                            nullptr);;
    

    bool emptyBoolean = JavaBoxes::unbox<bool>(method->invoke(anyType, 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return emptyBoolean;;
    

                //: 
} catch(LicensingException& e) 
            {



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "isBasketEmpty()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto BasketTag::addItemToBasket() -> bool{

        try {
            
    Object* anyType = JavaBoxes::toObject((new BasketRequestHelperFactory())->getInstance(this->propertiesHashMap, this->pageContext));;
    

    Method* method = anyType->getClass()->getMethod("addItemToBasket", 
                            nullptr);;
    

    bool emptyBoolean = JavaBoxes::unbox<bool>(method->invoke(anyType, 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return emptyBoolean;;
    

                //: 
} catch(LicensingException& e) 
            {



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

    std::string error = "Failed to add item from Basket";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "addItemToBasket()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto BasketTag::removeItemFromBasket() -> bool{

        try {
            
    Object* anyType = JavaBoxes::toObject((new BasketRequestHelperFactory())->getInstance(this->propertiesHashMap, this->pageContext));;
    

    Method* method = anyType->getClass()->getMethod("removeItemFromBasket", 
                            nullptr);;
    

    bool emptyBoolean = JavaBoxes::unbox<bool>(method->invoke(anyType, 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return emptyBoolean;;
    

                //: 
} catch(LicensingException& e) 
            {



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

    std::string error = "Failed to remove item from Basket";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "removeItemFromBasket()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto BasketTag::adjustBasket() -> bool{

        try {
            
    Object* anyType = JavaBoxes::toObject((new BasketRequestHelperFactory())->getInstance(this->propertiesHashMap, this->pageContext));;
    

    Method* method = anyType->getClass()->getMethod("adjustBasket", 
                            nullptr);;
    

    bool emptyBoolean = JavaBoxes::unbox<bool>(method->invoke(anyType, 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return emptyBoolean;;
    

                //: 
} catch(LicensingException& e) 
            {



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

    std::string error = "Failed to Adjust Basket";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "adjustBasket()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}


                //@Throws(JspTagException.constructor)
            
    auto BasketTag::doStartTag() -> int32_t{

        try {
            
                        if(true)
                        
                                    {
                                    this->propertiesHashMap= StdUtil::getInstance()->createHashMap();
    
this->propertiesHashMap->put(StoreFrontData::getInstance()->NAME, this->storeName);
    

                        if(this->command.compare(BasketData::INSERT) == 0)
                        
                                    {
                                    
                        if(!this->addItemToBasket())
                        
                                    {
                                    this->pageContext->getOut()->println("Item is not currently being sold.<p/>");
    

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




        #endif //ADMIN_TAGS_BASKETTAG_CPP
