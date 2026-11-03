
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_SCALEFACTORFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_MATH_SCALEFACTORFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/math/ScaleFactorFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ScaleFactorFactory::ScaleFactorFactory() {
        }
        auto ScaleFactorFactory::instance_owner() -> ScaleFactorFactory* { static std::unique_ptr<ScaleFactorFactory> value(new ScaleFactorFactory()); return value.get(); }
ScaleFactorFactory* ScaleFactorFactory::instance = ScaleFactorFactory::instance_owner();

    auto ScaleFactorFactory::getInstance() -> ScaleFactorFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ScaleFactorFactory::instance;
    
}




        #endif //ORG_ALLBINARY_LOGIC_MATH_SCALEFACTORFACTORY_CPP
