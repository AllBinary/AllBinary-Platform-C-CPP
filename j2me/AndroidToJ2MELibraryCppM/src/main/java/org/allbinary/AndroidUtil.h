
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
        



        #ifndef ORG_ALLBINARY_ANDROIDUTIL_H
        #define ORG_ALLBINARY_ANDROIDUTIL_H

            #include "../../java/lang/Object.h"
        
            #include "../../java/lang/Integer.h"
        
#include <android/app/Activity.h>

      
#include <android/os/Build.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AndroidUtil
            : public Object
         {
        

    public static const NULL_ACTIVITY: Activity = new Activity();

    private: static const version: int32_t = Integer.parseInt(Build.VERSION.SDK)!;

    public static bool isMemoryRestrictive();

    public static bool isAndroid();

};

            


        #endif //ORG_ALLBINARY_ANDROIDUTIL_H
