
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUT_CPP
        #define ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/analog/AnalogLocationInput.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/CustomGPoint.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto AnalogLocationInput::NULL_ANALOG_LOCATION_INPUT_owner() -> AnalogLocationInput* { static std::unique_ptr<AnalogLocationInput> value(new AnalogLocationInput( -1)); return value.get(); }
AnalogLocationInput* AnalogLocationInput::NULL_ANALOG_LOCATION_INPUT = AnalogLocationInput::NULL_ANALOG_LOCATION_INPUT_owner();

AnalogLocationInput::AnalogLocationInput(int32_t playerId){
this->playerId= playerId;
    
this->customGPoint= new CustomGPoint(0, 0, 0);
    
}


    auto AnalogLocationInput::getPlayerId() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->playerId;
    
}


    auto AnalogLocationInput::getCustomGPoint() -> CustomGPoint*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->customGPoint;
    
}


    auto AnalogLocationInput::getRz() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rz;
    
}


    auto AnalogLocationInput::setRz(int32_t rz) -> void{
this->rz= rz;
    
}


    auto AnalogLocationInput::getRightTrigger() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rightTrigger;
    
}


    auto AnalogLocationInput::setRightTrigger(int32_t rightTrigger) -> void{
this->rightTrigger= rightTrigger;
    
}


    auto AnalogLocationInput::getLeftTrigger() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->leftTrigger;
    
}


    auto AnalogLocationInput::setLeftTrigger(int32_t leftTrigger) -> void{
this->leftTrigger= leftTrigger;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUT_CPP
