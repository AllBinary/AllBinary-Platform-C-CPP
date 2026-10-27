
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
        



        #ifndef ORG_ALLBINARY_PHYSICS_MOVEMENT_NOMOVEMENTFACTORY_CPP
        #define ORG_ALLBINARY_PHYSICS_MOVEMENT_NOMOVEMENTFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/physics/movement/NoMovementFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/physics/movement/Movement.h"


NoMovementFactory::NoMovementFactory() : movement(new Movement()) {
        }
        auto NoMovementFactory::instance_owner() -> NoMovementFactory* { static std::unique_ptr<NoMovementFactory> value(new NoMovementFactory()); return value.get(); }
NoMovementFactory* NoMovementFactory::instance = NoMovementFactory::instance_owner();

    auto NoMovementFactory::getInstance() -> NoMovementFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NoMovementFactory::instance;
    
}


    auto NoMovementFactory::getMovmentInstance() -> Movement*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->movement;
    
}




        #endif //ORG_ALLBINARY_PHYSICS_MOVEMENT_NOMOVEMENTFACTORY_CPP
