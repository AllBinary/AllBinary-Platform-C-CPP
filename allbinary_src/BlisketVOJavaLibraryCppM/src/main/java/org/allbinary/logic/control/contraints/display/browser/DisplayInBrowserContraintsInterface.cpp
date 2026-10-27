
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

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DisplayInBrowserContraintsInterface {

    public: virtual bool isMountable() = 0;

    public: virtual bool isFrameable() = 0;

    public: virtual bool isQuickFrameable() = 0;

    public: virtual void setMountable(bool canBeMounted) = 0;

    public: virtual void setFrameable(bool canBeFramed) = 0;

    public: virtual void setQuickFrameable(bool canBeQuickFramed) = 0;

    public: virtual void setMountedLink(std::string mountedLink) = 0;

    public: virtual std::string getMountedLink() = 0;

};

            

