
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFO_H
        #define ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFO_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class DebugFactory;
class NoDebug;
class StringUtil;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LicenseInitInfo
            : public virtual Object
         {

    private: std::string id;

    private: BasicArrayList* serverList;

public: LicenseInitInfo();

    public: std::string getLicenseId();

    public: std::string getServer(int32_t index);

    public: int32_t getNumberOfServers();

    public: void setLicenseId(std::string value);

    public: void clearServers();

    public: void setServer(std::string value, int32_t index);

    public: void addServer(std::string value);

    public: BasicArrayList* getServerList();

    public: void setServerList(BasicArrayList* servers);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFO_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFO_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFO_H_COMPLETE
        #if __has_include(<org/allbinary/debug/DebugFactory.h>)
#include <org/allbinary/debug/DebugFactory.h>
#endif
#if __has_include(<org/allbinary/debug/NoDebug.h>)
#include <org/allbinary/debug/NoDebug.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif

        #endif
    
