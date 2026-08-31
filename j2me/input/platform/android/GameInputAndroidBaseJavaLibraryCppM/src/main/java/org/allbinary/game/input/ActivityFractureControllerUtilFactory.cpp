
        /* Generated Code Do Not Modify */
        



            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/android/AndroidInfoFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AndroidAPI12KeyFactory.h"
#include "AndroidAPI9KeyFactory.h"
#include "AndroidAPI1KeyFactory.h"
#include "AndroidKeyFactory.h"

class ActivityFractureControllerUtilFactory
            : public Object
         {
        

    public static AndroidKeyFactory getInstance(){

    SDK_VERSION: int32_t = AndroidInfoFactory.getInstance()!.getVersion()!;;
    

                        if(SDK_VERSION <= 8)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AndroidAPI1KeyFactory.getInstance();;
    

                                    }
                                
                             else 
                        if(SDK_VERSION <= 11)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AndroidAPI9KeyFactory.getInstance();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AndroidAPI12KeyFactory.getAPI12Instance();;
    

                        }
                            
}


};

            

