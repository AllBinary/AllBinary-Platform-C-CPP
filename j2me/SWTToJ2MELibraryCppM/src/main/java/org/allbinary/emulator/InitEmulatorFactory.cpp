
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
        



        #ifndef ORG_ALLBINARY_EMULATOR_INITEMULATORFACTORY_CPP
        #define ORG_ALLBINARY_EMULATOR_INITEMULATORFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/emulator/InitEmulatorFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

InitEmulatorFactory::InitEmulatorFactory() {
        }
        auto InitEmulatorFactory::instance_owner() -> InitEmulatorFactory* { static std::unique_ptr<InitEmulatorFactory> value(new InitEmulatorFactory()); return value.get(); }
InitEmulatorFactory* InitEmulatorFactory::instance = InitEmulatorFactory::instance_owner();

    auto InitEmulatorFactory::getInstance() -> InitEmulatorFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return InitEmulatorFactory::instance;
    
}


    auto InitEmulatorFactory::setInitEmulator(bool initEmulator) -> void{
this->initEmulator= initEmulator;
    
}


    auto InitEmulatorFactory::isInitEmulator() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->initEmulator;
    
}




        #endif //ORG_ALLBINARY_EMULATOR_INITEMULATORFACTORY_CPP
