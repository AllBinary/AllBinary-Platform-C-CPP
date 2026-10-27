
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class StringMaker;
class AbeClientInformationInterface;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PlatformRecordIdUtil
            : public virtual Object
         {

    private: static PlatformRecordIdUtil* instance_owner();
    private: static PlatformRecordIdUtil* instance;

    public: static PlatformRecordIdUtil* getInstance();


            
    public: PlatformRecordIdUtil();
        
    private: const std::string PLATFORM_SHORT_NAME = "JSE";

    public: std::string getRecordId(AbeClientInformationInterface* abeClientInformation, std::string baseRecordId);

};

            


        #endif //ORG_ALLBINARY_PERSISTANCE_PLATFORMRECORDIDUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_PERSISTANCE_PLATFORMRECORDIDUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_PERSISTANCE_PLATFORMRECORDIDUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif

        #endif
    
