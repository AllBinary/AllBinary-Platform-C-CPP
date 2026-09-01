
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
        



            #include "../../java/lang/Object.h"
        
            #include "../../java/lang/Integer.h"
        
#include <android/app/Activity.h>

      
#include <android/os/Build.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AndroidUtil
            : public Object
         {

    public: static const Activity NULL_ACTIVITY = Activity();

    private: static const int32_t version = Integer::parseInt(Build::VERSION.SDK);

    public: static bool isMemoryRestrictive(){

                        if(AndroidUtil::version < 30)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: static bool isAndroid(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


};

            

