
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

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OperatingSystems
            : public Object
         {

    private: static OperatingSystems instance() { return OperatingSystems(); }

    public: static OperatingSystems getInstance();

    public: const std::string LINUX = "Linux";

    public: const std::string WINDOWS = "Windows";

    public: const std::string SOLARIS = "Solaris";

    public: const std::string WINDOWS2000 = "Windows 2000";

    public: const std::string WINDOWS_NT = "Windows NT";

    public: const std::string WINDOWS_10 = "Windows 10";

    public: const std::string WINDOWS_11 = "Windows 11";

    public: const std::string WINDOWS_VISTA = "Windows Vista";

    public: const std::string WINDOWS_XP = "Windows XP";

    public: const std::string ANDROID = this->LINUX;

    public: const std::string HARMONY = "HarmonyOS";

private: OperatingSystems();

    private: bool unknownSpecificOSAllowed = true;

    public: bool isUnknownSpecificOSAllowed();

    public: void setUnknownSpecificOSAllowed(bool aUnknownSpecificOSAllowed);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_OS_OPERATINGSYSTEMS_H
