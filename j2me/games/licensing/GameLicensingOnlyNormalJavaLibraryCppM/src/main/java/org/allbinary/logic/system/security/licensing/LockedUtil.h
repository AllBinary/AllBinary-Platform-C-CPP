
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKEDUTIL_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKEDUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/security/licensing/LockedUtilInterface.h"
class LockableFeature;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LockedUtil
            : public virtual Object
        , public virtual LockedUtilInterface {

    private: static LockedUtil* instance_owner();
    private: static LockedUtil* instance;

    public: static LockedUtil* getInstance();


            
    public: LockedUtil();
        
    public: bool isLocked();

    public: bool isLockedFeature(LockableFeature* lockableFeatrue);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKEDUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKEDUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKEDUTIL_H_COMPLETE
        #if __has_include("org/allbinary/logic/system/security/licensing/LockedUtilInterface.h")
#include "org/allbinary/logic/system/security/licensing/LockedUtilInterface.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/LockableFeature.h")
#include "org/allbinary/logic/system/security/licensing/LockableFeature.h"
#endif

        #endif
    
