
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
        



        #ifndef TAGS_GENERIC_INVENTORY_INVENTORYTAG_CPP
        #define TAGS_GENERIC_INVENTORY_INVENTORYTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "tags/generic/inventory/InventoryTag.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <taghelpers/InventoryHelperFactory.h>

      
#include <tags/StoreValidationTransformTag.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/globals/GLOBALS2.h>

#include <org/allbinary/globals/GLOBALS2.h>

#include <org/allbinary/globals/GLOBALS2.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

InventoryTag::InventoryTag() : StoreValidationTransformTag(), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(LicensingException.constructor)
            
    auto InventoryTag::search() -> void{

        try {
            
    Object* anyType = JavaBoxes::toObject((new InventoryHelperFactory())->getInstance(this->getPropertiesHashMap(), this->pageContext));;
    

    Class* addressHelperClass = anyType->getClass();;
    

    Method* method = addressHelperClass->getMethod("search", 
                            nullptr);;
    

    std::string result = JavaBoxes::unbox<std::string>(method->invoke(anyType, 
                            nullptr));;
    
pageContext.getOut()->print(result);
    

                //: 
} catch(LicensingException& e) 
            {



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

    std::string error = "Failed to search Inventory by keyword";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "search()", &e);
    

                                    }
                                

        try {
            pageContext.getOut()->print(JavaString::valueOf(error) +JavaString::valueOf("<br>"));
    
pageContext.getOut()->print(JavaString::valueOf(JavaString::valueOf("Exception: ") +JavaString::valueOf(e)) +JavaString::valueOf("<br>"));
    

                //: 
} catch(Exception& e2) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->LICENSINGERROR))
                        
                                    {
                                    this->logUtil->put("Exception in Exception Handling", this, "search()", &e);
    

                                    }
                                
}

}

}


                //@Throws(LicensingException.constructor)
            
    auto InventoryTag::viewSummary() -> void{

        try {
            
    Object* anyType = JavaBoxes::toObject((new InventoryHelperFactory())->getInstance(this->getPropertiesHashMap(), this->pageContext));;
    

    Class* helperClass = anyType->getClass();;
    

    Method* method = helperClass->getMethod("viewSummary", 
                            nullptr);;
    

    std::string result = JavaBoxes::unbox<std::string>(method->invoke(anyType, 
                            nullptr));;
    
pageContext.getOut()->print(result);
    

                //: 
} catch(LicensingException& e) 
            {



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

    std::string error = "Failed to View Summary";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "viewSummary()", &e);
    

                                    }
                                

        try {
            pageContext.getOut()->print(JavaString::valueOf(error) +JavaString::valueOf("<br>"));
    
pageContext.getOut()->print(JavaString::valueOf(JavaString::valueOf("Exception: ") +JavaString::valueOf(e)) +JavaString::valueOf("<br>"));
    

                //: 
} catch(Exception& e2) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->LICENSINGERROR))
                        
                                    {
                                    this->logUtil->put("Exception in Exception Handling", this, "viewSummary())", &e);
    

                                    }
                                
}

}

}


                //@Throws(JspTagException.constructor)
            
    auto InventoryTag::doStartTag() -> int32_t{

        try {
            
                        if(this->getCommand() != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(this->getCommand()->compareTo(GLOBALS2::SEARCH) == 0)
                        
                                    {
                                    this->setName("Basic Search Inventory View");
    
this->setObjectFile("views.generic.inventory.AutoSearchValidationInventoryView");
    
this->search();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return EVAL_BODY_INCLUDE;
    

                                    }
                                
                             else 
                        if(this->getCommand()->compareTo(GLOBALS2::VIEWSUMMARY) == 0)
                        
                                    {
                                    this->setName("Basic Inventory View");
    
this->setObjectFile("views.generic.inventory.AutoValidationInventoryView");
    
this->viewSummary();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return EVAL_BODY_INCLUDE;
    

                                    }
                                
                             else 
                        if(this->getCommand()->compareTo(GLOBALS2::VIEW) == 0)
                        
                                    {
                                    this->setName("Basic Inventory View");
    
this->setObjectFile("views.generic.inventory.AutoValidationInventoryView");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StoreValidationTransformTag::doStartTag();;
    

                                    }
                                
                        else {
                            


                            throw Exception(JavaString::valueOf("No Such View Command: ") +JavaString::valueOf(this->getCommand()));
                    

                        }
                            

                                    }
                                



                            throw Exception("Command Null");
                    

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




        #endif //TAGS_GENERIC_INVENTORY_INVENTORYTAG_CPP
