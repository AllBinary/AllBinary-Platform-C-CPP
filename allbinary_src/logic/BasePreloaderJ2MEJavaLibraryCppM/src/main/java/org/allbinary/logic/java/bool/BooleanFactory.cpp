
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_BOOL_BOOLEANFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_JAVA_BOOL_BOOLEANFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/java/bool/BooleanFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

BooleanFactory::BooleanFactory() : TRUE(true), FALSE(false), TRUE_STRING(JavaString::valueOf(this->TRUE)), FALSE_STRING(JavaString::valueOf(this->FALSE)) {
        }
        auto BooleanFactory::instance_owner() -> BooleanFactory* { static std::unique_ptr<BooleanFactory> value(new BooleanFactory()); return value.get(); }
BooleanFactory* BooleanFactory::instance = BooleanFactory::instance_owner();

    auto BooleanFactory::getInstance() -> BooleanFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BooleanFactory::instance;
    
}


    auto BooleanFactory::toStringb(bool bool_) -> std::string{

                        if(bool_)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->TRUE_STRING;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->FALSE_STRING;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_LOGIC_JAVA_BOOL_BOOLEANFACTORY_CPP
