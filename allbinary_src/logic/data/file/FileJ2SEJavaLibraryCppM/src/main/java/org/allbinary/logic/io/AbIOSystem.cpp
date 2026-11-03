
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_ABIOSYSTEM_CPP
        #define ORG_ALLBINARY_LOGIC_IO_ABIOSYSTEM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/AbIOSystem.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

AbIOSystem::AbIOSystem() {
        }
        auto AbIOSystem::instance_owner() -> AbIOSystem* { static std::unique_ptr<AbIOSystem> value(new AbIOSystem()); return value.get(); }
AbIOSystem* AbIOSystem::instance = AbIOSystem::instance_owner();

    auto AbIOSystem::getInstance() -> AbIOSystem*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbIOSystem::instance;
    
}


    auto AbIOSystem::getType() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->type;
    
}


    auto AbIOSystem::isType(std::string type) -> bool{

                        if(this->type.compare(type) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_LOGIC_IO_ABIOSYSTEM_CPP
