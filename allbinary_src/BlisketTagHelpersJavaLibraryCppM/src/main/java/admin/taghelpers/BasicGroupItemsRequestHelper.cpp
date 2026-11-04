
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
        



        #ifndef ADMIN_TAGHELPERS_BASICGROUPITEMSREQUESTHELPER_CPP
        #define ADMIN_TAGHELPERS_BASICGROUPITEMSREQUESTHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/taghelpers/BasicGroupItemsRequestHelper.h"
        

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

      
#include <org/allbinary/business/user/commerce/inventory/item/group/BasicGroupItemData.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/groups/BasicGroupItemsEntityFactory.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      

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


BasicGroupItemsRequestHelper::BasicGroupItemsRequestHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext) : logUtil(LogUtil::getInstance()), basicItemData(BasicItemData::getInstance()){
this->request= dynamic_cast<HttpServletRequest*>(pageContext->getRequest());
    
this->getFormData();
    
}


    auto BasicGroupItemsRequestHelper::getFormData() -> void{
this->id= this->request->getParameter(basicItemData->ID);
    
this->itemOne= this->request->getParameter(BasicGroupItemData::ITEM_ONE);
    
this->itemTwo= this->request->getParameter(BasicGroupItemData::ITEM_TWO);
    
this->itemThree= this->request->getParameter(BasicGroupItemData::ITEM_THREE);
    
this->itemFour= this->request->getParameter(BasicGroupItemData::ITEM_FOUR);
    
this->itemFive= this->request->getParameter(BasicGroupItemData::ITEM_FIVE);
    
this->itemSix= this->request->getParameter(BasicGroupItemData::ITEM_SIX);
    
this->itemSeven= this->request->getParameter(BasicGroupItemData::ITEM_SEVEN);
    
this->itemEight= this->request->getParameter(BasicGroupItemData::ITEM_EIGHT);
    
this->itemNine= this->request->getParameter(BasicGroupItemData::ITEM_NINE);
    
this->itemTen= this->request->getParameter(BasicGroupItemData::ITEM_TEN);
    
this->timeEntered= this->request->getParameter(EntryData::getInstance()->TIMECREATED);
    
this->lastModified= this->request->getParameter(EntryData::getInstance()->LASTMODIFIED);
    
}


    auto BasicGroupItemsRequestHelper::getHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* values = StdUtil::getInstance()->createHashMap();;
    
values->put(basicItemData->ID, id);
    
values->put(BasicGroupItemData::ITEM_ONE, this->itemOne);
    
values->put(BasicGroupItemData::ITEM_TWO, this->itemTwo);
    
values->put(BasicGroupItemData::ITEM_THREE, this->itemThree);
    
values->put(BasicGroupItemData::ITEM_FOUR, this->itemFour);
    
values->put(BasicGroupItemData::ITEM_FIVE, this->itemFive);
    
values->put(BasicGroupItemData::ITEM_SIX, this->itemSix);
    
values->put(BasicGroupItemData::ITEM_SEVEN, this->itemSeven);
    
values->put(BasicGroupItemData::ITEM_EIGHT, this->itemEight);
    
values->put(BasicGroupItemData::ITEM_NINE, this->itemNine);
    
values->put(BasicGroupItemData::ITEM_TEN, this->itemTen);
    

    Calendar* calendar = Calendar::getInstance();;
    

    std::string time = JavaString::valueOf((int64_t(calendar->getTimeInMillis())));;
    
values->put(EntryData::getInstance()->LASTMODIFIED, time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return values;
    
}


    auto BasicGroupItemsRequestHelper::insert() -> std::string{

        try {
            
    Calendar* calendar = Calendar::getInstance();;
    

    std::string time = JavaString::valueOf((int64_t(calendar->getTimeInMillis())));;
    

    BasicArrayList* values = new BasicArrayListD();;
    
values->add(this->id);
    
values->add(this->itemOne);
    
values->add(this->itemTwo);
    
values->add(this->itemThree);
    
values->add(this->itemFour);
    
values->add(this->itemFive);
    
values->add(this->itemSix);
    
values->add(this->itemSeven);
    
values->add(this->itemEight);
    
values->add(this->itemNine);
    
values->add(this->itemTen);
    
values->add(time);
    
values->add(time);
    
BasicGroupItemsEntityFactory::getInstance()->getBasicGroupItemsEntityInstance()->insert(values);
    

    std::string success = JavaString::valueOf(JavaString::valueOf("Successfully inserted ") +JavaString::valueOf(this->id)) +JavaString::valueOf(" into items table");;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "insert()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return success;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = JavaString::valueOf(JavaString::valueOf("Failed to insert ") +JavaString::valueOf(this->id)) +JavaString::valueOf(" into items table");;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "inserts()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}


    auto BasicGroupItemsRequestHelper::delete_() -> std::string{

        try {
            BasicGroupItemsEntityFactory::getInstance()->getBasicGroupItemsEntityInstance()->delete_(this->id);
    

    std::string success = "Successfully deleted";;
    

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


    auto BasicGroupItemsRequestHelper::update() -> std::string{

        try {
            
    std::string success = "Update Pricing Successful";;
    

    HashMap<Object*, Object*>* values = this->getHashMap();;
    
BasicGroupItemsEntityFactory::getInstance()->getBasicGroupItemsEntityInstance()->update(values);
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF((new StringMaker())->append(this->id)->append(CommonSeps::getInstance()->SPACE)->append(success)->toString(), this, "update()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return success;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = JavaString::valueOf("Failed to update: ") +JavaString::valueOf(this->id);;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "update()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}




        #endif //ADMIN_TAGHELPERS_BASICGROUPITEMSREQUESTHELPER_CPP
