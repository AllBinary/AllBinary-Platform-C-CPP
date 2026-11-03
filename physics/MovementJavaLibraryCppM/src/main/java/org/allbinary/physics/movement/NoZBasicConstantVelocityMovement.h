
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
        



        #ifndef ORG_ALLBINARY_PHYSICS_MOVEMENT_NOZBASICCONSTANTVELOCITYMOVEMENT_H
        #define ORG_ALLBINARY_PHYSICS_MOVEMENT_NOZBASICCONSTANTVELOCITYMOVEMENT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class AllBinaryGameLayer;
class BasicVelocityProperties;
#include <org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h>
class AllBinaryLayer;
class BasicDecimal;
class AxisMathVectorUtil;
class AngleFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/physics/movement/Movement.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NoZBasicConstantVelocityMovement: public Movement, public virtual VelocityInterfaceCompositeInterface {

    private: BasicVelocityProperties* velocityProperties;

    private: BasicDecimal* speedBasicDecimal;

    private: AxisMathVectorUtil* axisMathVectorUtil;

public: NoZBasicConstantVelocityMovement(BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties);

    public: void init(BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle);

    public: void moveOutsideRadius(AllBinaryLayer* layer, int64_t radius, int32_t angle, int32_t otherAngle);

                //@Throws(Exception.constructor)
            
    public: void process(AllBinaryGameLayer* layer);

    public: std::string toString();

    public: void stop();

    public: BasicVelocityProperties* getVelocityProperties();

    public: void setVelocityProperties(BasicVelocityProperties* velocityProperties);

    /*protected*/ public: void setSpeedBasicDecimal(BasicDecimal* speedBasicDecimal);

    /*protected*/ public: BasicDecimal* getSpeedBasicDecimal();

};

            


        #endif //ORG_ALLBINARY_PHYSICS_MOVEMENT_NOZBASICCONSTANTVELOCITYMOVEMENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_PHYSICS_MOVEMENT_NOZBASICCONSTANTVELOCITYMOVEMENT_H_COMPLETE)
        #define ORG_ALLBINARY_PHYSICS_MOVEMENT_NOZBASICCONSTANTVELOCITYMOVEMENT_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/AllBinaryGameLayer.h>)
#include <org/allbinary/game/layer/AllBinaryGameLayer.h>
#endif
#if __has_include(<org/allbinary/game/physics/velocity/BasicVelocityProperties.h>)
#include <org/allbinary/game/physics/velocity/BasicVelocityProperties.h>
#endif
#if __has_include(<org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h>)
#include <org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/logic/math/BasicDecimal.h>)
#include <org/allbinary/logic/math/BasicDecimal.h>
#endif
#if __has_include(<org/allbinary/logic/math/vector/AxisMathVectorUtil.h>)
#include <org/allbinary/logic/math/vector/AxisMathVectorUtil.h>
#endif
#if __has_include(<org/allbinary/math/AngleFactory.h>)
#include <org/allbinary/math/AngleFactory.h>
#endif
#if __has_include("org/allbinary/physics/movement/Movement.h")
#include "org/allbinary/physics/movement/Movement.h"
#endif

        #endif
    
