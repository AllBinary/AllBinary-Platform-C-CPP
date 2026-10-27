
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_ABEFACTORY_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_ABEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/ClassLoader.h"
        
            #include "java/lang/Exception.h"
        
#include <java/lang/reflect/Constructor.h>
class LogUtil;
class ConstructorUtil;
class StringMaker;
class AbKeys;
class AbeClientInformationInterface;
class LicensingException;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class WebappClassLoaderInfo;
class AbeClassLoader;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AbeFactory
            : public virtual Object
         {

    private: static AbeFactory* instance_owner();
    private: static AbeFactory* instance;

    public: static AbeFactory* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    private: bool useCustomLoader = false;

private: AbeFactory();

                //@Throws(LicensingException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: Object* getInstance(AbeClientInformationInterface* abeClientInformation, std::string className);

                //@Throws(LicensingException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: Object* getInstance(AbeClientInformationInterface* abeClientInformation, std::string className, std::vector<Class*> classes, std::vector<Object*> params);

                //@Throws(LicensingException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: Class* getClass()(AbeClientInformationInterface* abeClientInformation, std::string className);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_ABEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_ABEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_ABEFACTORY_H_COMPLETE
        #if __has_include(<java/lang/reflect/Constructor.h>)
#include <java/lang/reflect/Constructor.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/java/anyType/ConstructorUtil.h>)
#include <org/allbinary/logic/java/anyType/ConstructorUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/AbKeys.h>)
#include <org/allbinary/logic/system/security/AbKeys.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/LicensingException.h>)
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include("org/allbinary/logic/system/loader/WebappClassLoaderInfo.h")
#include "org/allbinary/logic/system/loader/WebappClassLoaderInfo.h"
#endif
#if __has_include("org/allbinary/logic/system/loader/AbeClassLoader.h")
#include "org/allbinary/logic/system/loader/AbeClassLoader.h"
#endif

        #endif
    
