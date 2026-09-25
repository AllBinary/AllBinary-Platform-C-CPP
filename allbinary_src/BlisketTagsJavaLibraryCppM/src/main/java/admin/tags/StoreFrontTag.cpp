
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

      
#include <admin/taghelpers/StoreFrontHelperFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <tags/CustomTagSupport.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class StoreFrontTag: public CustomTagSupport {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string command;

    private: std::string storeName;

    private: HashMap<any, any> propertiesHashMap;

public: StoreFrontTag(){
}


    public: void setCommand(std::string command){
this->command= command;
    
}


    public: void setStoreName(std::string value){
this->storeName= value;
    
}


                //@Throws(LicensingException.constructor)
            
    private: std::string getCurrentLocation(){

        try {
            
    Object* anyType = StoreFrontHelperFactory().getInstance(this->propertiesHashMap, this->pageContext);;
    

    Method method = anyType->constructor.name.getMethod("getCurrentLocation", 
                            nullptr);;
    

    std::string result = method.invoke(anyType, 
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

    std::string error = "Failed to retrieve current location";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "getCurrentLocation()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}
*/
}


                //@Throws(LicensingException.constructor)
            
    private: std::string getCurrentHomeLocation(){

        try {
            
    Object* anyType = StoreFrontHelperFactory().getInstance(this->propertiesHashMap, this->pageContext);;
    

    Method method = anyType->constructor.name.getMethod("getCurrentHomeLocation", 
                            nullptr);;
    

    std::string result = method.invoke(anyType, 
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

    std::string error = "Failed to retrieve current home location";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "getCurrentHomeLocation()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}
*/
}


                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag(){

        try {
            
                        if(true)
                        
                                    {
                                    this->propertiesHashMap= StdUtil::getInstance().createHashMap();
    
this->propertiesHashMap.put(StoreFrontData::getInstance().NAME, this->storeName);
    

                        if(this->command.compareTo(org.allbinary.globals.GLOBALS2.GETCURRENTLOCATION) == 0)
                        
                                    {
                                    pageContext.getOut().print(this->getCurrentLocation());
    

                                    }
                                
                             else 
                        if(this->command.compareTo(org.allbinary.globals.GLOBALS2.GETCURRENTHOMELOCATION) == 0)
                        
                                    {
                                    pageContext.getOut().print(this->getCurrentHomeLocation());
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    

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

            

