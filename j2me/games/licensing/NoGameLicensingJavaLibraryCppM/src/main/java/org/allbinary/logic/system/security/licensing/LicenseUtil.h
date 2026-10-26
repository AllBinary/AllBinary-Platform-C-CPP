
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LICENSEUTIL_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LICENSEUTIL_H

            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/CommandListener.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LicenseUtil
            : public Object
         {

    private: static LicenseUtil instance() { return LicenseUtil(); }

    public: static LicenseUtil getInstance();

    public: void init();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isRunning();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setRunning(bool running);

    public: bool shouldWait(CommandListener commandListener);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LICENSEUTIL_H
