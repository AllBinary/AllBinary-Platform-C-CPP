
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_ACTIVITYFRACTURECONTROLLERUTILFACTORY_CPP
        #define ORG_ALLBINARY_GAME_INPUT_ACTIVITYFRACTURECONTROLLERUTILFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/ActivityFractureControllerUtilFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/android/AndroidInfoFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/AndroidAPI12KeyFactory.h"
#include "org/allbinary/game/input/AndroidAPI9KeyFactory.h"
#include "org/allbinary/game/input/AndroidAPI1KeyFactory.h"
#include "org/allbinary/game/input/AndroidKeyFactory.h"


ActivityFractureControllerUtilFactory::ActivityFractureControllerUtilFactory() {
        }
        
    auto ActivityFractureControllerUtilFactory::getInstance() -> AndroidKeyFactory*{

    int32_t SDK_VERSION = AndroidInfoFactory::getInstance()->getVersion();;
    

                        if(SDK_VERSION <= 8)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AndroidAPI1KeyFactory::getInstance();;
    

                                    }
                                
                             else 
                        if(SDK_VERSION <= 11)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AndroidAPI9KeyFactory::getInstance();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AndroidAPI12KeyFactory::getAPI12Instance();;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_GAME_INPUT_ACTIVITYFRACTURECONTROLLERUTILFACTORY_CPP
