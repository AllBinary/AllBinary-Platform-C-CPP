
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
        



        #ifndef ORG_ALLBINARY_ANDROID_ANDROIDINFOFACTORY_H
        #define ORG_ALLBINARY_ANDROID_ANDROIDINFOFACTORY_H

            #include <hilog/log.h>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <android/os/Build.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AndroidInfoFactory
            : public Object
         {

    private: static AndroidInfoFactory* instance() { static std::unique_ptr<AndroidInfoFactory> value(new AndroidInfoFactory()); return value.get(); }

    public: static AndroidInfoFactory* getInstance();

    private: const int32_t version = Integer.parseInt(Build::VERSION.SDK);

    public: int32_t getVersion();

};

            


        #endif //ORG_ALLBINARY_ANDROID_ANDROIDINFOFACTORY_H
