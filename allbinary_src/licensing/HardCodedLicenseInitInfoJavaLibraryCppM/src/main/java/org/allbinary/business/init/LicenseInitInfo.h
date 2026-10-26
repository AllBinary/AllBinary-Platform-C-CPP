
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

            #include "java/lang/Object.h"
        
#include <org/allbinary/debug/DebugFactory.h>

      
#include <org/allbinary/debug/NoDebug.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LicenseInitInfo
            : public Object
         {

    private: std::string id = StringUtil::getInstance().EMPTY_STRING;

    private: BasicArrayList serverList = BasicArrayListD();

: LicenseInitInfo();

    public: std::string getLicenseId();

    public: std::string getServer(int32_t index);

    public: int32_t getNumberOfServers();

    public: void setLicenseId(std::string value);

    public: void clearServers();

    public: void setServer(std::string value, int32_t index);

    public: void addServer(std::string value);

    public: BasicArrayList getServerList();

    public: void setServerList(BasicArrayList servers);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFO_H
