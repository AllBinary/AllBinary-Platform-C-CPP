
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_PERSISTANCE_PLATFORMRECORDIDUTIL_H
        #define ORG_ALLBINARY_PERSISTANCE_PLATFORMRECORDIDUTIL_H

            #include "../../../java/lang/Object.h"
        
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PlatformRecordIdUtil
            : public Object
         {

    private: static PlatformRecordIdUtil instance() { return PlatformRecordIdUtil(); }

    public: static PlatformRecordIdUtil getInstance();

    private: const std::string PLATFORM_SHORT_NAME = "AVN";

    public: std::string getRecordId(AbeClientInformationInterface abeClientInformation, std::string baseRecordId);

};

            


        #endif //ORG_ALLBINARY_PERSISTANCE_PLATFORMRECORDIDUTIL_H
