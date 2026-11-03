
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
        



        #ifndef ORG_ALLBINARY_ANDROIDUTIL_CPP
        #define ORG_ALLBINARY_ANDROIDUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/AndroidUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <android/app/Activity.h>

      
#include <android/os/Build.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

AndroidUtil::AndroidUtil() {
        }
        auto AndroidUtil::NULL_ACTIVITY_owner() -> Activity* { static std::unique_ptr<Activity> value(new Activity()); return value.get(); }
Activity* AndroidUtil::NULL_ACTIVITY = AndroidUtil::NULL_ACTIVITY_owner();

    auto AndroidUtil::isMemoryRestrictive() -> bool{

                        if(AndroidUtil::version < 30)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto AndroidUtil::isAndroid() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}




        #endif //ORG_ALLBINARY_ANDROIDUTIL_CPP
