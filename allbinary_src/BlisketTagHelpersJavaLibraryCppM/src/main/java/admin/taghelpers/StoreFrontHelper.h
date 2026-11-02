
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
        



        #ifndef ADMIN_TAGHELPERS_STOREFRONTHELPER_H
        #define ADMIN_TAGHELPERS_STOREFRONTHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/util/HashMap.h>
class PageContext;
class StoreFront;
class StoreFrontData;
class StoreFrontFactory;
class StoreFrontInterface;
class StringUtil;
class Replace;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/TagHelper.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StoreFrontHelper: public TagHelper {

    private: StoreFrontInterface* storeFrontInterface;

    private: std::string currentLocation;

    private: std::string currentHomeLocation;

public: StoreFrontHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext);

    public: std::string getCurrentLocation();

    public: std::string getCurrentHomeLocation();

};

            


        #endif //ADMIN_TAGHELPERS_STOREFRONTHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGHELPERS_STOREFRONTHELPER_H_COMPLETE)
        #define ADMIN_TAGHELPERS_STOREFRONTHELPER_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFront.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFront.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontData.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/regex/replace/Replace.h>)
#include <org/allbinary/logic/string/regex/replace/Replace.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include("admin/taghelpers/TagHelper.h")
#include "admin/taghelpers/TagHelper.h"
#endif

        #endif
    
