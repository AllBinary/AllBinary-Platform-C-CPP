
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
        



        #ifndef ORG_ALLBINARY_DIRECTION_DIRECTIONUTIL_H
        #define ORG_ALLBINARY_DIRECTION_DIRECTIONUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Angle;
class AngleFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class DirectionFactory;
class Direction;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DirectionUtil
            : public virtual Object
         {

    private: static DirectionUtil* instance_owner();
    private: static DirectionUtil* instance;

    public: static DirectionUtil* getInstance();

    private: std::vector<Angle*> directionArray;

    private: std::vector<Angle*> directionArray2;

private: DirectionUtil();

    public: Angle* getAngle(Direction* direction);

    public: Angle* getFrameAngle(Direction* direction);

};

            


        #endif //ORG_ALLBINARY_DIRECTION_DIRECTIONUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DIRECTION_DIRECTIONUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_DIRECTION_DIRECTIONUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/math/Angle.h>)
#include <org/allbinary/math/Angle.h>
#endif
#if __has_include(<org/allbinary/math/AngleFactory.h>)
#include <org/allbinary/math/AngleFactory.h>
#endif
#if __has_include("org/allbinary/direction/DirectionFactory.h")
#include "org/allbinary/direction/DirectionFactory.h"
#endif
#if __has_include("org/allbinary/direction/Direction.h")
#include "org/allbinary/direction/Direction.h"
#endif

        #endif
    
