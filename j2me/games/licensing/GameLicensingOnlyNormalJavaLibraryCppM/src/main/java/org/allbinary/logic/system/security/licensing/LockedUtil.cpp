
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/security/licensing/LockedUtilInterface.h"
#include "org/allbinary/logic/system/security/licensing/LockableFeature.h"

class LockedUtil
            : public Object
        , public LockedUtilInterface {

    private: static LockedUtil* instance() { static std::unique_ptr<LockedUtil> value(new LockedUtil()); return value.get(); }

    public: static LockedUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LockedUtil::instance();
    
}


    public: bool isLocked(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool isLockedFeature(LockableFeature* lockableFeatrue){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

