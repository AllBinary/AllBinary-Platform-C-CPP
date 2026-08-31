
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

            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OperatingSystems
            : public Object
         {
        

    private: static const instance: OperatingSystems = new OperatingSystems();

    public static OperatingSystems getInstance();

    public const LINUX: string = "Linux";

    public const WINDOWS: string = "Windows";

    public const SOLARIS: string = "Solaris";

    public const WINDOWS2000: string = "Windows 2000";

    public const WINDOWS_NT: string = "Windows NT";

    public const WINDOWS_10: string = "Windows 10";

    public const WINDOWS_11: string = "Windows 11";

    public const WINDOWS_VISTA: string = "Windows Vista";

    public const WINDOWS_XP: string = "Windows XP";

    public const ANDROID: string = this.LINUX;

    public const HARMONY: string = "HarmonyOS";

private constructor ();

    private: unknownSpecificOSAllowed: bool = true;

    public bool isUnknownSpecificOSAllowed();

    public setUnknownSpecificOSAllowed(bool aUnknownSpecificOSAllowed);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_OS_OPERATINGSYSTEMS_H
