
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
        



        #ifndef ADMIN_TAGHELPERS_ADMINCONFIGURATIONREQUESTHELPER_CPP
        #define ADMIN_TAGHELPERS_ADMINCONFIGURATIONREQUESTHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/taghelpers/AdminConfigurationRequestHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/user/modules/admin/configuration/AdminConfiguration.h>

      
#include <org/allbinary/business/user/modules/admin/configuration/AdminConfigurationInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/ModifyTable.h"


AdminConfigurationRequestHelper::AdminConfigurationRequestHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext) : logUtil(LogUtil::getInstance()){

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->CONSTRUCTOR, this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
this->request= dynamic_cast<HttpServletRequest*>(pageContext->getRequest());
    
}


    auto AdminConfigurationRequestHelper::insert() -> std::string{

        try {
            
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, "insert()");
    

                                    }
                                

    std::string success = "Successfully inserted AdminConfiguration";;
    

    AdminConfigurationInterface* adminConfigurationInterface = dynamic_cast<AdminConfigurationInterface*>(new AdminConfiguration(this->request));;
    
adminConfigurationInterface->write();
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "insert()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return success;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to created AdminConfiguration";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "insert()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}


    auto AdminConfigurationRequestHelper::delete_() -> std::string{

        try {
            
    std::string success = "Successfully deleted AdminConfiguration";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "delete()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return success;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to delete";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "delete()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}


    auto AdminConfigurationRequestHelper::update() -> std::string{

        try {
            
    std::string success = "Updated AdminConfiguration Successful";;
    

    AdminConfigurationInterface* adminConfigurationInterface = dynamic_cast<AdminConfigurationInterface*>(new AdminConfiguration(this->request));;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "update()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return success;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to update";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "update()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}




        #endif //ADMIN_TAGHELPERS_ADMINCONFIGURATIONREQUESTHELPER_CPP
