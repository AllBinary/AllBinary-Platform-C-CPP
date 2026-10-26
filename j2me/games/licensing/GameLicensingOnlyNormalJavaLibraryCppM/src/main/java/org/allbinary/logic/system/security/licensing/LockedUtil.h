
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

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LockedUtilInterface.h"
#include "LockableFeature.h"

class LockedUtil
            : public Object
        : public LockedUtilInterface {

    private: static LockedUtil instance() { return LockedUtil(); }

    public: static LockedUtil getInstance();

    public: bool isLocked();

    public: bool isLockedFeature(LockableFeature lockableFeatrue);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKEDUTIL_H
