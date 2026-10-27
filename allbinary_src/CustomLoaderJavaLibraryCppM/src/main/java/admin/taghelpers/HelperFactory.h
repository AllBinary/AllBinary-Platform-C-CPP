
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
        



        #ifndef ADMIN_TAGHELPERS_HELPERFACTORY_H
        #define ADMIN_TAGHELPERS_HELPERFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class HttpServletRequest;
class PageContext;
class LogUtil;
class AbeFactory;
class AbeClientInformationInterface;
class LicensingException;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HelperFactory
            : public virtual Object
         {

                //@Throws(LicensingException.constructor)
            
    public: static Object* getInstance(AbeClientInformationInterface* abeClientInformation, std::string factoryName, std::string className, HashMap<Object*, Object*>* hashMap, HttpServletRequest* httpServletRequest);

                //@Throws(LicensingException.constructor)
            
    public: static Object* getInstance(AbeClientInformationInterface* abeClientInformation, std::string factoryName, std::string className, HashMap<Object*, Object*>* hashMap, PageContext* pageContext);

                //@Throws(LicensingException.constructor)
            
    public: static Object* getInstance(AbeClientInformationInterface* abeClientInformation, std::string factoryName, std::string className, HashMap<Object*, Object*>* hashMap, HashMap<Object*, Object*>* specialhashMap, PageContext* pageContext);

                //@Throws(LicensingException.constructor)
            
    public: static Object* getInstance(AbeClientInformationInterface* abeClientInformation, std::string factoryName, std::string className);

    /*protected*/ public: LogUtil* logUtil;

public: HelperFactory();

};

            


        #endif //ADMIN_TAGHELPERS_HELPERFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGHELPERS_HELPERFACTORY_H_COMPLETE)
        #define ADMIN_TAGHELPERS_HELPERFACTORY_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/loader/AbeFactory.h>)
#include <org/allbinary/logic/system/loader/AbeFactory.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/LicensingException.h>)
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
