
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
        



        #ifndef ADMIN_TAGHELPERS_STOREFRONTSHELPER_H
        #define ADMIN_TAGHELPERS_STOREFRONTSHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;

class PageContext;
class StoreFrontData;
class Portion;
class StoreFrontsEntityFactory;
class LogUtil;
class AbSqlTableUtil;
class StringUtil;
class HtmlSelect;
class CommonPhoneStrings;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/BasicTable.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StoreFrontsHelper: public BasicTable {

    private: static inline const std::string CLASS = "class";

    private: static inline const std::string TEXT = "text";

    /*protected*/ public: LogUtil* logUtil;

    private: Portion* portion;

public: StoreFrontsHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext);

    public: std::string drop();

    public: std::string create();

    public: std::string restore();

    public: std::string backup();

    private: CommonPhoneStrings* commonPhoneStrings;

    public: std::string generateSelect();

};

            


        #endif //ADMIN_TAGHELPERS_STOREFRONTSHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGHELPERS_STOREFRONTSHELPER_H_COMPLETE)
        #define ADMIN_TAGHELPERS_STOREFRONTSHELPER_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontData.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>
#endif
#if __has_include(<org/allbinary/business/installer/Portion.h>)
#include <org/allbinary/business/installer/Portion.h>
#endif
#if __has_include(<org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntityFactory.h>)
#include <org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntityFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/sql/AbSqlTableUtil.h>)
#include <org/allbinary/logic/communication/sql/AbSqlTableUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/visual/dhtml/html/select/HtmlSelect.h>)
#include <org/allbinary/logic/visual/dhtml/html/select/HtmlSelect.h>
#endif
#if __has_include(<org/allbinary/string/CommonPhoneStrings.h>)
#include <org/allbinary/string/CommonPhoneStrings.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include("admin/taghelpers/BasicTable.h")
#include "admin/taghelpers/BasicTable.h"
#endif

        #endif
    
