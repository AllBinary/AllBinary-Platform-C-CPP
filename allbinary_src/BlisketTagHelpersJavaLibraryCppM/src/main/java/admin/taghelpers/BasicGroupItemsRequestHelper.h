
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
        



        #ifndef ADMIN_TAGHELPERS_BASICGROUPITEMSREQUESTHELPER_H
        #define ADMIN_TAGHELPERS_BASICGROUPITEMSREQUESTHELPER_H

            #include "../../java/lang/Exception.h"
        
            #include "../../java/lang/Long.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/group/BasicGroupItemData.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/groups/BasicGroupItemsEntityFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ModifyTable.h"

class BasicGroupItemsRequestHelper: public ModifyTable {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: HttpServletRequest request;

    private: std::string id;

    private: std::string itemOne;

    private: std::string itemTwo;

    private: std::string itemThree;

    private: std::string itemFour;

    private: std::string itemFive;

    private: std::string itemSix;

    private: std::string itemSeven;

    private: std::string itemEight;

    private: std::string itemNine;

    private: std::string itemTen;

    private: std::string timeEntered;

    private: std::string lastModified;

public: BasicGroupItemsRequestHelper(HashMap<any, any> hashMap, PageContext pageContext);

    public: void getFormData();

    private: HashMap<any, any> getHashMap();

    public: std::string insert();

    public: std::string delete_();

    public: std::string update();

};

            


        #endif //ADMIN_TAGHELPERS_BASICGROUPITEMSREQUESTHELPER_H
