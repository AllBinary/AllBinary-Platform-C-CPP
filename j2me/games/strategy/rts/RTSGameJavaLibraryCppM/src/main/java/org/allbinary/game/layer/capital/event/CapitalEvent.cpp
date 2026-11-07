
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2002 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *    Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_CAPITAL_EVENT_CAPITALEVENT_CPP
        #define ORG_ALLBINARY_GAME_LAYER_CAPITAL_EVENT_CAPITALEVENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/capital/event/CapitalEvent.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

CapitalEvent::CapitalEvent(Object* anyType) : AllBinaryEventObject(anyType){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto CapitalEvent::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("CapitalEvent: Value: \n");
    
stringBuffer->appendint(this->getValue());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}


    auto CapitalEvent::getValue() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->value;
    
}


    auto CapitalEvent::setValue(int32_t value) -> void{
this->value= value;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_CAPITAL_EVENT_CAPITALEVENT_CPP
