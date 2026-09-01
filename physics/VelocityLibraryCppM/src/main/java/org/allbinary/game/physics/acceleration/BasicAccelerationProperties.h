
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
        



        #ifndef ORG_ALLBINARY_GAME_PHYSICS_ACCELERATION_BASICACCELERATIONPROPERTIES_H
        #define ORG_ALLBINARY_GAME_PHYSICS_ACCELERATION_BASICACCELERATIONPROPERTIES_H

            #include "../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicAccelerationProperties
            : public Object
         {

    private: int32_t forward= 0;

    private: int32_t reverse= 0;

public: BasicAccelerationProperties(int32_t forward, int32_t reverse);

    public: void setReverse(int32_t reverse);

    public: int32_t getReverse();

    public: void setForward(int32_t forward);

    public: int32_t getForward();

};

            


        #endif //ORG_ALLBINARY_GAME_PHYSICS_ACCELERATION_BASICACCELERATIONPROPERTIES_H
