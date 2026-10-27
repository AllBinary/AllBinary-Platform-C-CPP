
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
        



        #ifndef ORG_ALLBINARY_VIEW_STATICVIEWPOSITION_CPP
        #define ORG_ALLBINARY_VIEW_STATICVIEWPOSITION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/view/StaticViewPosition.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/view/ViewPosition.h"


StaticViewPosition::StaticViewPosition(int32_t x, int32_t y, int32_t z) : ViewPosition(x, y, z){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto StaticViewPosition::getX() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getRawX();;
    
}


    auto StaticViewPosition::getY() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getRawY();;
    
}


    auto StaticViewPosition::getZ() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getRawZ();;
    
}




        #endif //ORG_ALLBINARY_VIEW_STATICVIEWPOSITION_CPP
