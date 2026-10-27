
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
        



        #ifndef ORG_ALLBINARY_DIRECTION_DIRECTIONALINTERFACE_H
        #define ORG_ALLBINARY_DIRECTION_DIRECTIONALINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Angle;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Direction;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DirectionalInterface
            : public virtual Object
         {

    public: virtual void setFrameByDirection(Direction* direction) = 0;

    public: virtual void setFrameToAngle(Angle* angle) = 0;

    public: virtual void adjustFrameToAngle(Angle* newAngle) = 0;

    public: virtual void adjustFrame(int16_t angle) = 0;

};

            


        #endif //ORG_ALLBINARY_DIRECTION_DIRECTIONALINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DIRECTION_DIRECTIONALINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_DIRECTION_DIRECTIONALINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/math/Angle.h>)
#include <org/allbinary/math/Angle.h>
#endif
#if __has_include("org/allbinary/direction/Direction.h")
#include "org/allbinary/direction/Direction.h"
#endif

        #endif
    
