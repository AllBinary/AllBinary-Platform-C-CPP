
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKEDRESOURCES_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKEDRESOURCES_H

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LockedResources
            : public Object
         {

    private: static LockedResources instance() { return LockedResources(); }

    public: static LockedResources getInstance();

    public: const std::string LOCKED_DEMO_GAME_FEATURE_RESOURCE = "/locked_demo_game_feature_64_by_64.png";

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKEDRESOURCES_H
