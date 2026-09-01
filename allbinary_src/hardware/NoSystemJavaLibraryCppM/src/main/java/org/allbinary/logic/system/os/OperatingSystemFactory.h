
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_OPERATINGSYSTEMFACTORY_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_OS_OPERATINGSYSTEMFACTORY_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/System.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NoOperatingSystem.h"
#include "GenericOperatingSystem.h"

class OperatingSystemFactory
            : public Object
         {

    private: static OperatingSystemFactory instance() { return OperatingSystemFactory(); }

    public: static OperatingSystemFactory getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: GenericOperatingSystem genericOperatingSystem = NoOperatingSystem::NO_OPERATING_SYSTEM;

private: OperatingSystemFactory();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: GenericOperatingSystem getOperatingSystemInstance();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_OS_OPERATINGSYSTEMFACTORY_H
