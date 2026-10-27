
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RTSInterface {

    public: virtual bool isSelfUpgradeable() = 0;

    public: virtual bool isCompleted() = 0;

    public: virtual int32_t getPercentComplete() = 0;

    public: virtual int32_t getLevel() = 0;

    public: virtual int32_t getMaxLevel() = 0;

    public: virtual int32_t getCost() = 0;

    public: virtual void downgrade() = 0;

    public: virtual int32_t getDowngradeCost() = 0;

    public: virtual bool isDowngradeable() = 0;

    public: virtual int32_t getUpgradeCost() = 0;

    public: virtual bool isUpgradeable() = 0;

    public: virtual void upgrade() = 0;

};

            

