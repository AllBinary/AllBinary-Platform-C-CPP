
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
        



        #ifndef ORG_ALLBINARY_EMULATOR_INITEMULATORFACTORY_H
        #define ORG_ALLBINARY_EMULATOR_INITEMULATORFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InitEmulatorFactory
            : public Object
         {

    private: static InitEmulatorFactory* instance() { static std::unique_ptr<InitEmulatorFactory> value(new InitEmulatorFactory()); return value.get(); }

    public: static InitEmulatorFactory* getInstance();

    public: void setInitEmulator(bool initEmulator);

    public: bool isInitEmulator();

    private: bool initEmulator = false;

};

            


        #endif //ORG_ALLBINARY_EMULATOR_INITEMULATORFACTORY_H
