
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_OPERATINGSYSTEMS_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_OS_OPERATINGSYSTEMS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OperatingSystems
            : public virtual Object
         {

    private: static OperatingSystems* instance_owner();
    private: static OperatingSystems* instance;

    public: static OperatingSystems* getInstance();

    public: const std::string LINUX = "Linux";

    public: const std::string WINDOWS = "Windows";

    public: const std::string SOLARIS = "Solaris";

    public: const std::string WINDOWS2000 = "Windows 2000";

    public: const std::string WINDOWS_NT = "Windows NT";

    public: const std::string WINDOWS_10 = "Windows 10";

    public: const std::string WINDOWS_11 = "Windows 11";

    public: const std::string WINDOWS_VISTA = "Windows Vista";

    public: const std::string WINDOWS_XP = "Windows XP";

    public: const std::string ANDROID;

    public: const std::string HARMONY = "HarmonyOS";

private: OperatingSystems();

    private: bool unknownSpecificOSAllowed = true;

    public: bool isUnknownSpecificOSAllowed();

    public: void setUnknownSpecificOSAllowed(bool aUnknownSpecificOSAllowed);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_OS_OPERATINGSYSTEMS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_OS_OPERATINGSYSTEMS_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_OS_OPERATINGSYSTEMS_H_COMPLETE
        
        #endif
    
