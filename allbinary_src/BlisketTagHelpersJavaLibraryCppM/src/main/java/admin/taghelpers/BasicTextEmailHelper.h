
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
        



        #ifndef ADMIN_TAGHELPERS_BASICTEXTEMAILHELPER_H
        #define ADMIN_TAGHELPERS_BASICTEXTEMAILHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class PageContext;
class UserEmailEventNameData;
class UserEmailEventHandler;
class AdminUserEmailEventHandlerSingletons;
class AdminEmailInfo;
class BasicEmailInfo;
class EmailInfo;
class AbeClientInformationInterface;
class ServiceClientInformationInterfaceFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/TagHelper.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicTextEmailHelper: public TagHelper {

    private: AbeClientInformationInterface* abeClientInformation;

    private: HashMap<Object*, Object*>* hashMap;

    private: PageContext* pageContext;

public: BasicTextEmailHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext);

                //@Throws(Exception.constructor)
            
    public: void send();

};

            


        #endif //ADMIN_TAGHELPERS_BASICTEXTEMAILHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGHELPERS_BASICTEXTEMAILHELPER_H_COMPLETE)
        #define ADMIN_TAGHELPERS_BASICTEXTEMAILHELPER_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>)
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/event/handler/UserEmailEventHandler.h>)
#include <org/allbinary/logic/communication/smtp/event/handler/UserEmailEventHandler.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/event/handler/factory/AdminUserEmailEventHandlerSingletons.h>)
#include <org/allbinary/logic/communication/smtp/event/handler/factory/AdminUserEmailEventHandlerSingletons.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/info/AdminEmailInfo.h>)
#include <org/allbinary/logic/communication/smtp/info/AdminEmailInfo.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h>)
#include <org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/info/EmailInfo.h>)
#include <org/allbinary/logic/communication/smtp/info/EmailInfo.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>)
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>
#endif
#if __has_include("admin/taghelpers/TagHelper.h")
#include "admin/taghelpers/TagHelper.h"
#endif

        #endif
    
