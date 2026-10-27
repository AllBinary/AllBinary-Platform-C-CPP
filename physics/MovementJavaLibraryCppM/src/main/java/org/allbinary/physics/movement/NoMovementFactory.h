
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
        



        #ifndef ORG_ALLBINARY_PHYSICS_MOVEMENT_NOMOVEMENTFACTORY_H
        #define ORG_ALLBINARY_PHYSICS_MOVEMENT_NOMOVEMENTFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/physics/movement/Movement.h"

class NoMovementFactory
            : public Object
         {

    private: static NoMovementFactory* instance() { static std::unique_ptr<NoMovementFactory> value(new NoMovementFactory()); return value.get(); }

    public: static NoMovementFactory* getInstance();

    private: Movement* movement = new Movement();

    public: Movement* getMovmentInstance();

};

            


        #endif //ORG_ALLBINARY_PHYSICS_MOVEMENT_NOMOVEMENTFACTORY_H
