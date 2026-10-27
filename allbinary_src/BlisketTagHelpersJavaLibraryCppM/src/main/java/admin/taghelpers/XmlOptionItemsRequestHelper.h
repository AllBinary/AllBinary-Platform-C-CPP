
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/Calendar.h>
#include <java/util/HashMap.h>
class BasicArrayList;
class BasicArrayListD;
class HttpServletRequest;
class PageContext;
class EntryData;
class BasicItemData;
class XmlOptionItemData;
class XmlOptionItemsEntityFactory;
class StdUtil;
class LogUtil;
class StringMaker;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/ModifyTable.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class XmlOptionItemsRequestHelper: public ModifyTable {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: BasicItemData* basicItemData;

    private: HttpServletRequest* request;

    private: std::string id;

    private: std::string xmlFileStatus;

    private: std::string optionXmlFile;

    private: std::string timeEntered;

    private: std::string lastModified;

public: XmlOptionItemsRequestHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext);

    public: void getFormData();

    private: HashMap<Object*, Object*>* getHashMap();

    public: std::string insert();

    public: std::string delete_();

    public: std::string update();

};

            


        #endif //ADMIN_TAGHELPERS_XMLOPTIONITEMSREQUESTHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGHELPERS_XMLOPTIONITEMSREQUESTHELPER_H_COMPLETE)
        #define ADMIN_TAGHELPERS_XMLOPTIONITEMSREQUESTHELPER_H_COMPLETE
        #if __has_include(<java/util/Calendar.h>)
#include <java/util/Calendar.h>
#endif
#if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/business/entry/EntryData.h>)
#include <org/allbinary/business/entry/EntryData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>)
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/item/option/XmlOptionItemData.h>)
#include <org/allbinary/business/user/commerce/inventory/item/option/XmlOptionItemData.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/inventory/item/options/XmlOptionItemsEntityFactory.h>)
#include <org/allbinary/data/tables/user/commerce/inventory/item/options/XmlOptionItemsEntityFactory.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include("admin/taghelpers/ModifyTable.h")
#include "admin/taghelpers/ModifyTable.h"
#endif

        #endif
    
