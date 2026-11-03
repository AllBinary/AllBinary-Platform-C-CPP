
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
        



        #ifndef ADMIN_TAGHELPERS_PERMISSIONITEMSREQUESTHELPER_CPP
        #define ADMIN_TAGHELPERS_PERMISSIONITEMSREQUESTHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/taghelpers/PermissionItemsRequestHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/permission/PermissionItemData.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/permissions/PermissionItemsEntityFactory.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/ModifyTable.h"


PermissionItemsRequestHelper::PermissionItemsRequestHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext) : logUtil(LogUtil::getInstance()), basicItemData(BasicItemData::getInstance()){
this->request= dynamic_cast<HttpServletRequest*>(pageContext->getRequest());
    
this->getFormData();
    
}


    auto PermissionItemsRequestHelper::getFormData() -> void{
this->id= this->request->getParameter(basicItemData->ID);
    
this->number= this->request->getParameter(basicItemData->NUMBER);
    
this->enabled= this->request->getParameter(EntryData::getInstance()->ENABLE);
    
this->who= this->request->getParameter(PermissionItemData::WHO);
    
this->what= this->request->getParameter(PermissionItemData::WHAT);
    
this->type= this->request->getParameter(PermissionItemData::TYPE);
    
this->remoteAddr= this->request->getParameter(PermissionItemData::REMOTE_ADDR);
    
this->startTime= this->request->getParameter(PermissionItemData::START_TIME);
    
this->endTime= this->request->getParameter(PermissionItemData::END_TIME);
    
this->price= this->request->getParameter(basicItemData->PRICE);
    
this->timeEntered= this->request->getParameter(EntryData::getInstance()->TIMECREATED);
    
this->lastModified= this->request->getParameter(EntryData::getInstance()->LASTMODIFIED);
    
}


    auto PermissionItemsRequestHelper::getHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* values = StdUtil::getInstance()->createHashMap();;
    
values->put(basicItemData->ID, this->id);
    
values->put(basicItemData->NUMBER, this->number);
    
values->put(EntryData::getInstance()->ENABLE, this->enabled);
    
values->put(PermissionItemData::WHO, this->who);
    
values->put(PermissionItemData::WHAT, this->what);
    
values->put(PermissionItemData::TYPE, this->type);
    
values->put(PermissionItemData::REMOTE_ADDR, this->remoteAddr);
    
values->put(PermissionItemData::START_TIME, this->startTime);
    
values->put(PermissionItemData::END_TIME, this->endTime);
    
values->put(basicItemData->PRICE, this->price);
    

    Calendar* calendar = Calendar::getInstance();;
    

    std::string time = (int64_t(calendar->getTimeInMillis())).toString();;
    
values->put(EntryData::getInstance()->LASTMODIFIED, time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return values;
    
}


    auto PermissionItemsRequestHelper::insert() -> std::string{

        try {
            
    Calendar* calendar = Calendar::getInstance();;
    

    std::string time = (int64_t(calendar->getTimeInMillis())).toString();;
    

    BasicArrayList* values = new BasicArrayListD();;
    
values->add(this->id);
    
values->add(this->number);
    
values->add(this->enabled);
    
values->add(this->who);
    
values->add(this->what);
    
values->add(this->type);
    
values->add(this->remoteAddr);
    
values->add(this->startTime);
    
values->add(this->endTime);
    
values->add(this->price);
    
values->add(time);
    
values->add(time);
    
PermissionItemsEntityFactory::getInstance()->getPermissionItemsEntityInstance()->insert(values);
    

    std::string success = JavaString::valueOf(JavaString::valueOf("Successfully inserted ") +JavaString::valueOf(this->id)) +JavaString::valueOf(" into items table");;
    

                        if(allbinary->logic->communication->log->config->type.LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type.LogConfigTypeFactory->getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "insert()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return success;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = JavaString::valueOf(JavaString::valueOf("Failed to insert ") +JavaString::valueOf(this->id)) +JavaString::valueOf(" into items table");;
    

                        if(allbinary->logic->communication->log->config->type.LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type.LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "inserts()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}


    auto PermissionItemsRequestHelper::delete_() -> std::string{

        try {
            PermissionItemsEntityFactory::getInstance()->getPermissionItemsEntityInstance()->delete_(this->id);
    

    std::string success = "Successfully deleted";;
    

                        if(allbinary->logic->communication->log->config->type.LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type.LogConfigTypeFactory->getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "delete()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return success;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to delete";;
    

                        if(allbinary->logic->communication->log->config->type.LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type.LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "delete()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}


    auto PermissionItemsRequestHelper::update() -> std::string{

        try {
            
    std::string success = "Update Pricing Successful";;
    

    HashMap<Object*, Object*>* values = this->getHashMap();;
    
PermissionItemsEntityFactory::getInstance()->getPermissionItemsEntityInstance()->update(values);
    

                        if(allbinary->logic->communication->log->config->type.LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type.LogConfigTypeFactory->getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF((new StringMaker())->append(this->id)->append(CommonSeps::getInstance()->SPACE)->append(success)->toString(), this, "update()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return success;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = JavaString::valueOf("Failed to update: ") +JavaString::valueOf(this->id);;
    

                        if(allbinary->logic->communication->log->config->type.LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type.LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "update()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}




        #endif //ADMIN_TAGHELPERS_PERMISSIONITEMSREQUESTHELPER_CPP
