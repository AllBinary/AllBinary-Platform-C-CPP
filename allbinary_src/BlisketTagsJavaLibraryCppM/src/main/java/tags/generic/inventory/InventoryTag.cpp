
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
        



            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <taghelpers/InventoryHelperFactory.h>

      
#include <tags/StoreValidationTransformTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InventoryTag: public StoreValidationTransformTag {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: InventoryTag() : StoreValidationTransformTag(){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(LicensingException.constructor)
            
    private: void search(){

        try {
            
    Object* anyType = InventoryHelperFactory().getInstance(this->getPropertiesHashMap(), this->pageContext);;
    

    Class* addressHelperClass = anyType->getClass();;
    

    Method method = addressHelperClass.getMethod("search", 
                            nullptr);;
    

    std::string result = method.invoke(anyType, 
                            nullptr);;
    
pageContext.getOut().print(result);
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

                //: 
/* catch(e) 
            {

    std::string error = "Failed to search Inventory by keyword";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "search()", e);
    

                                    }
                                

        try {
            pageContext.getOut().print(error +"<br>");
    
pageContext.getOut().print("Exception: " +e +"<br>");
    

                //: 
} catch(e2) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().LICENSINGERROR))
                        
                                    {
                                    this->logUtil.put("Exception in Exception Handling", this, "search()", e);
    

                                    }
                                
}

}
*/
}


                //@Throws(LicensingException.constructor)
            
    private: void viewSummary(){

        try {
            
    Object* anyType = InventoryHelperFactory().getInstance(this->getPropertiesHashMap(), this->pageContext);;
    

    Class* helperClass = anyType->getClass();;
    

    Method method = helperClass.getMethod("viewSummary", 
                            nullptr);;
    

    std::string result = method.invoke(anyType, 
                            nullptr);;
    
pageContext.getOut().print(result);
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

                //: 
/* catch(e) 
            {

    std::string error = "Failed to View Summary";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "viewSummary()", e);
    

                                    }
                                

        try {
            pageContext.getOut().print(error +"<br>");
    
pageContext.getOut().print("Exception: " +e +"<br>");
    

                //: 
} catch(e2) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().LICENSINGERROR))
                        
                                    {
                                    this->logUtil.put("Exception in Exception Handling", this, "viewSummary())", e);
    

                                    }
                                
}

}
*/
}


                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag(){

        try {
            
                        if(this->getCommand() != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(this->getCommand().compareTo(org.allbinary.globals.GLOBALS2.SEARCH) == 0)
                        
                                    {
                                    this->setName("Basic Search Inventory View");
    
this->setObjectFile("views.generic.inventory.AutoSearchValidationInventoryView");
    
this->search();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return EVAL_BODY_INCLUDE;
    

                                    }
                                
                             else 
                        if(this->getCommand().compareTo(org.allbinary.globals.GLOBALS2.VIEWSUMMARY) == 0)
                        
                                    {
                                    this->setName("Basic Inventory View");
    
this->setObjectFile("views.generic.inventory.AutoValidationInventoryView");
    
this->viewSummary();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return EVAL_BODY_INCLUDE;
    

                                    }
                                
                             else 
                        if(this->getCommand().compareTo(org.allbinary.globals.GLOBALS2.VIEW) == 0)
                        
                                    {
                                    this->setName("Basic Inventory View");
    
this->setObjectFile("views.generic.inventory.AutoValidationInventoryView");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.doStartTag();;
    

                                    }
                                
                        else {
                            


                            throw Exception("No Such View Command: " +this->getCommand());
                    

                        }
                            

                                    }
                                



                            throw Exception("Command Null");
                    

                //: 
} catch(e) 
            {
AbResponseHandler::sendJspTagLicensingRedirect(this->pageContext, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    
}

                //: 
/* catch(e) 
            {
AbResponseHandler::sendJspTagRedirect(this->pageContext, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    
}
*/
}


};

            

