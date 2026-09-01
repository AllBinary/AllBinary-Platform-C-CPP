
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

            #include <vector>
        
            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Class.h"
        
            #include "../../../../../java/lang/ClassLoader.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/lang/reflect/Constructor.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/anyType/ConstructorUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/AbKeys.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "WebappClassLoaderInfo.h"
#include "AbeClassLoader.h"

class AbeFactory
            : public Object
         {

    private: static AbeFactory instance() { return AbeFactory(); }

    public: static AbeFactory getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: bool useCustomLoader = false;

private: AbeFactory();

                //@Throws(LicensingException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: Object* getInstance(AbeClientInformationInterface abeClientInformation, std::string className);

                //@Throws(LicensingException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: Object* getInstance(AbeClientInformationInterface abeClientInformation, std::string className, std::vector<Function> classes, std::vector<Object*> params);

                //@Throws(LicensingException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: Function constructor(AbeClientInformationInterface abeClientInformation, std::string className);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_ABEFACTORY_H
