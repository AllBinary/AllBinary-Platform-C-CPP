
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
        



        #ifndef ORG_ALLBINARY_PHYSICS_MOVEMENT_MOVEMENT_H
        #define ORG_ALLBINARY_PHYSICS_MOVEMENT_MOVEMENT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class AllBinaryGameLayer;
class BasicDecimal;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/physics/movement/MovementInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Movement
            : public virtual Object
        , public MovementInterface {

public: Movement();

    public: void init(BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle);

                //@Throws(Exception.constructor)
            
    public: void process(AllBinaryGameLayer* layer);

    public: void stop();

};

            


        #endif //ORG_ALLBINARY_PHYSICS_MOVEMENT_MOVEMENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_PHYSICS_MOVEMENT_MOVEMENT_H_COMPLETE)
        #define ORG_ALLBINARY_PHYSICS_MOVEMENT_MOVEMENT_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/AllBinaryGameLayer.h>)
#include <org/allbinary/game/layer/AllBinaryGameLayer.h>
#endif
#if __has_include(<org/allbinary/logic/math/BasicDecimal.h>)
#include <org/allbinary/logic/math/BasicDecimal.h>
#endif
#if __has_include("org/allbinary/physics/movement/MovementInterface.h")
#include "org/allbinary/physics/movement/MovementInterface.h"
#endif

        #endif
    
