
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
        



        #ifndef ADMIN_TAGHELPERS_XMLOPTIONITEMSREQUESTHELPER_H
        #define ADMIN_TAGHELPERS_XMLOPTIONITEMSREQUESTHELPER_H

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

      
#include <org/allbinary/business/user/commerce/inventory/item/option/XmlOptionItemData.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/options/XmlOptionItemsEntityFactory.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ModifyTable.h"

class XmlOptionItemsRequestHelper: public ModifyTable {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const BasicItemData basicItemData = BasicItemData::getInstance();

    private: HttpServletRequest request;

    private: std::string id;

    private: std::string xmlFileStatus;

    private: std::string optionXmlFile;

    private: std::string timeEntered;

    private: std::string lastModified;

public: XmlOptionItemsRequestHelper(HashMap<Object*, Object*> hashMap, PageContext pageContext);

    public: void getFormData();

    private: HashMap<Object*, Object*> getHashMap();

    public: std::string insert();

    public: std::string delete_();

    public: std::string update();

};

            


        #endif //ADMIN_TAGHELPERS_XMLOPTIONITEMSREQUESTHELPER_H
