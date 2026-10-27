
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
        



        #ifndef ADMIN_TAGHELPERS_MULTIPARTREQUESTPARAMFORWARDHELPER_H
        #define ADMIN_TAGHELPERS_MULTIPARTREQUESTPARAMFORWARDHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;

class PageContext;
class GLOBALS2;
class RequestMapInterface;
class LogUtil;
class StringMaker;
class StringValidationUtil;
class CommonSeps;
class CommonStrings;
class HelperTag;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class InventoryItemViewParentTagHelper;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MultipartRequestParamForwardHelper
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    private: PageContext* pageContext;

    private: RequestMapInterface* requestMapInterface;

    private: std::string page;

    private: std::string command;

    private: BasicArrayList* paramVector;

public: MultipartRequestParamForwardHelper(HelperTag* parentHelperTag, std::string page, std::string command, BasicArrayList* paramVector, PageContext* pageContext);

                //@Throws(Exception.constructor)
            
    public: void forward();

    private: std::string getParams();

    private: bool shouldForward();

};

            


        #endif //ADMIN_TAGHELPERS_MULTIPARTREQUESTPARAMFORWARDHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGHELPERS_MULTIPARTREQUESTPARAMFORWARDHELPER_H_COMPLETE)
        #define ADMIN_TAGHELPERS_MULTIPARTREQUESTPARAMFORWARDHELPER_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/globals/GLOBALS2.h>)
#include <org/allbinary/globals/GLOBALS2.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/RequestMapInterface.h>)
#include <org/allbinary/logic/communication/http/request/RequestMapInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<tags/HelperTag.h>)
#include <tags/HelperTag.h>
#endif
#if __has_include("admin/taghelpers/InventoryItemViewParentTagHelper.h")
#include "admin/taghelpers/InventoryItemViewParentTagHelper.h"
#endif

        #endif
    
