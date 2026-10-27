
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
        



        #ifndef ADMIN_TAGHELPERS_ORDERHELPERFACTORY_H
        #define ADMIN_TAGHELPERS_ORDERHELPERFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class PageContext;
class LogUtil;
class LicensingException;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/TagHelperFactory.h"
class OrderHelper;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OrderHelperFactory: public TagHelperFactory {

    /*protected*/ public: LogUtil* logUtil;

public: OrderHelperFactory();

                //@Throws(LicensingException.constructor)
            
    public: Object* getInstance(HashMap<Object*, Object*>* hashMap, PageContext* pageContext);

};

            


        #endif //ADMIN_TAGHELPERS_ORDERHELPERFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGHELPERS_ORDERHELPERFACTORY_H_COMPLETE)
        #define ADMIN_TAGHELPERS_ORDERHELPERFACTORY_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/LicensingException.h>)
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>
#endif
#if __has_include("admin/taghelpers/TagHelperFactory.h")
#include "admin/taghelpers/TagHelperFactory.h"
#endif
#if __has_include("admin/taghelpers/OrderHelper.h")
#include "admin/taghelpers/OrderHelper.h"
#endif

        #endif
    
