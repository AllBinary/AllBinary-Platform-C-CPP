
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_STATICPAGES_STATICPAGESENTITY_H
        #define ORG_ALLBINARY_DATA_TABLES_STATICPAGES_STATICPAGESENTITY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;

class StoreFrontData;
class StaticPagesDbInitInfo;
class BasicItemData;
class StdUtil;
class LogUtil;
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>
class SearchData;
class StringMaker;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/staticpages/StaticPagesEntityInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StaticPagesEntity: public AbSqlBean, public virtual StaticPagesEntityInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: BasicItemData* basicItemData;

    private: const std::string TABLENAME = "staticpages";

public: StaticPagesEntity();

    public: void insert(BasicArrayList* values);

    public: std::string getFile(std::string store, std::string keywords);

    public: void delete_(std::string keywords);

    public: std::string dropTable();

    public: void update(HashMap<Object*, Object*>* updatedValues);

    public: std::string createTableStatement();

    public: std::string createTable();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_STATICPAGES_STATICPAGESENTITY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TABLES_STATICPAGES_STATICPAGESENTITY_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TABLES_STATICPAGES_STATICPAGESENTITY_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontData.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>
#endif
#if __has_include(<org/allbinary/business/init/db/StaticPagesDbInitInfo.h>)
#include <org/allbinary/business/init/db/StaticPagesDbInitInfo.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>)
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/sql/AbSqlBean.h>)
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>
#endif
#if __has_include(<org/allbinary/logic/control/search/SearchData.h>)
#include <org/allbinary/logic/control/search/SearchData.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include("org/allbinary/data/tables/staticpages/StaticPagesEntityInterface.h")
#include "org/allbinary/data/tables/staticpages/StaticPagesEntityInterface.h"
#endif

        #endif
    
