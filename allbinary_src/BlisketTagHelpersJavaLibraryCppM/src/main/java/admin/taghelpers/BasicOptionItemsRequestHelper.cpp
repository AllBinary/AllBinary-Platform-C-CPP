
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
        



        #ifndef ADMIN_TAGHELPERS_BASICOPTIONITEMSREQUESTHELPER_CPP
        #define ADMIN_TAGHELPERS_BASICOPTIONITEMSREQUESTHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/taghelpers/BasicOptionItemsRequestHelper.h"
        

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

      
#include <org/allbinary/business/user/commerce/inventory/item/option/BasicOptionItemData.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/options/BasicOptionItemsEntityFactory.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/ModifyTable.h"


BasicOptionItemsRequestHelper::BasicOptionItemsRequestHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext) : logUtil(LogUtil::getInstance()), basicItemData(BasicItemData::getInstance()){
this->request= dynamic_cast<HttpServletRequest*>(pageContext->getRequest());
    
this->getFormData();
    
}


    auto BasicOptionItemsRequestHelper::getFormData() -> void{
this->optionItem= new BasicArrayListD();
    
this->optionValue= new BasicArrayListD();
    
this->id= this->request->getParameter(basicItemData->ID);
    
this->optionOneTitle= this->request->getParameter(BasicOptionItemData::OPTION_ONE_TITLE);
    
this->defaultOptionItem= this->request->getParameter(BasicOptionItemData::DEFAULT_OPTION_ITEM);
    
this->defaultOptionValue= this->request->getParameter(BasicOptionItemData::DEFAULT_OPTION_VALUE);
    
this->optionItem->add(this->request->getParameter(BasicOptionItemData::OPTION_ONE_ONE_ITEM));
    
this->optionValue->add(this->request->getParameter(BasicOptionItemData::OPTION_ONE_ONE_VALUE));
    
this->optionItem->add(this->request->getParameter(BasicOptionItemData::OPTION_ONE_TWO_ITEM));
    
this->optionValue->add(this->request->getParameter(BasicOptionItemData::OPTION_ONE_TWO_VALUE));
    
this->optionItem->add(this->request->getParameter(BasicOptionItemData::OPTION_ONE_THREE_ITEM));
    
this->optionValue->add(this->request->getParameter(BasicOptionItemData::OPTION_ONE_THREE_VALUE));
    
this->optionItem->add(this->request->getParameter(BasicOptionItemData::OPTION_ONE_FOUR_ITEM));
    
this->optionValue->add(this->request->getParameter(BasicOptionItemData::OPTION_ONE_FOUR_VALUE));
    
this->optionItem->add(this->request->getParameter(BasicOptionItemData::OPTION_ONE_FIVE_ITEM));
    
this->optionValue->add(this->request->getParameter(BasicOptionItemData::OPTION_ONE_FIVE_VALUE));
    
this->optionItem->add(this->request->getParameter(BasicOptionItemData::OPTION_ONE_SIX_ITEM));
    
this->optionValue->add(this->request->getParameter(BasicOptionItemData::OPTION_ONE_SIX_VALUE));
    
this->optionItem->add(this->request->getParameter(BasicOptionItemData::OPTION_ONE_SEVEN_ITEM));
    
this->optionValue->add(this->request->getParameter(BasicOptionItemData::OPTION_ONE_SEVEN_VALUE));
    
this->optionItem->add(this->request->getParameter(BasicOptionItemData::OPTION_ONE_EIGHT_ITEM));
    
this->optionValue->add(this->request->getParameter(BasicOptionItemData::OPTION_ONE_EIGHT_VALUE));
    
this->optionItem->add(this->request->getParameter(BasicOptionItemData::OPTION_ONE_NINE_ITEM));
    
this->optionValue->add(this->request->getParameter(BasicOptionItemData::OPTION_ONE_NINE_VALUE));
    
this->timeEntered= this->request->getParameter(EntryData::getInstance()->TIMECREATED);
    
this->lastModified= this->request->getParameter(EntryData::getInstance()->LASTMODIFIED);
    
}


    auto BasicOptionItemsRequestHelper::getHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* values = StdUtil::getInstance()->createHashMap();;
    
values->put(basicItemData->ID, id);
    
values->put(BasicOptionItemData::OPTION_ONE_ONE_ITEM, this->optionItem->get(0));
    
values->put(BasicOptionItemData::OPTION_ONE_ONE_VALUE, this->optionValue->get(0));
    
values->put(BasicOptionItemData::OPTION_ONE_TWO_ITEM, this->optionItem->get(1));
    
values->put(BasicOptionItemData::OPTION_ONE_TWO_VALUE, this->optionValue->get(1));
    
values->put(BasicOptionItemData::OPTION_ONE_THREE_ITEM, this->optionItem->get(2));
    
values->put(BasicOptionItemData::OPTION_ONE_THREE_VALUE, this->optionValue->get(2));
    
values->put(BasicOptionItemData::OPTION_ONE_FOUR_ITEM, this->optionItem->get(3));
    
values->put(BasicOptionItemData::OPTION_ONE_FOUR_VALUE, this->optionValue->get(3));
    
values->put(BasicOptionItemData::OPTION_ONE_FIVE_ITEM, this->optionItem->get(4));
    
values->put(BasicOptionItemData::OPTION_ONE_FIVE_VALUE, this->optionValue->get(4));
    
values->put(BasicOptionItemData::OPTION_ONE_SIX_ITEM, this->optionItem->get(5));
    
values->put(BasicOptionItemData::OPTION_ONE_SIX_VALUE, this->optionValue->get(5));
    
values->put(BasicOptionItemData::OPTION_ONE_SEVEN_ITEM, this->optionItem->get(6));
    
values->put(BasicOptionItemData::OPTION_ONE_SEVEN_VALUE, this->optionValue->get(6));
    
values->put(BasicOptionItemData::OPTION_ONE_EIGHT_ITEM, this->optionItem->get(7));
    
values->put(BasicOptionItemData::OPTION_ONE_EIGHT_VALUE, this->optionValue->get(7));
    
values->put(BasicOptionItemData::OPTION_ONE_NINE_ITEM, this->optionItem->get(8));
    
values->put(BasicOptionItemData::OPTION_ONE_NINE_VALUE, this->optionValue->get(8));
    

    Calendar* calendar = Calendar::getInstance();;
    

    std::string time = (int64_t(calendar->getTimeInMillis())).toString();;
    
values->put(EntryData::getInstance()->LASTMODIFIED, time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return values;
    
}


    auto BasicOptionItemsRequestHelper::insert() -> std::string{

        try {
            
    Calendar* calendar = Calendar::getInstance();;
    

    std::string time = (int64_t(calendar->getTimeInMillis())).toString();;
    

    BasicArrayList* values = new BasicArrayListD();;
    
values->add(this->id);
    

    int32_t size = this->optionValue->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
values->add(this->optionValue->get(index));
    
values->add(this->optionItem->get(index));
    
}

values->add(time);
    
values->add(time);
    
BasicOptionItemsEntityFactory::getInstance()->getBasicOptionItemsEntityInstance()->insert(values);
    

    std::string success = JavaString::valueOf(JavaString::valueOf("Successfully inserted ") +JavaString::valueOf(this->id)) +JavaString::valueOf(" into items table");;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "insert()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = JavaString::valueOf(JavaString::valueOf("Failed to insert ") +JavaString::valueOf(this->id)) +JavaString::valueOf(" into items table");;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "inserts()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    auto BasicOptionItemsRequestHelper::delete_() -> std::string{

        try {
            BasicOptionItemsEntityFactory::getInstance()->getBasicOptionItemsEntityInstance()->delete_(this->id);
    

    std::string success = "Successfully deleted";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "delete()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to delete";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "delete()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    auto BasicOptionItemsRequestHelper::update() -> std::string{

        try {
            
    std::string success = "Update Pricing Successful";;
    

    HashMap<Object*, Object*>* values = this->getHashMap();;
    
BasicOptionItemsEntityFactory::getInstance()->getBasicOptionItemsEntityInstance()->update(values);
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF((new StringMaker())->append(this->id)->append(CommonSeps::getInstance()->SPACE)->append(success)->toString(), this, "update()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = JavaString::valueOf("Failed to update: ") +JavaString::valueOf(this->id);;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "update()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}




        #endif //ADMIN_TAGHELPERS_BASICOPTIONITEMSREQUESTHELPER_CPP
