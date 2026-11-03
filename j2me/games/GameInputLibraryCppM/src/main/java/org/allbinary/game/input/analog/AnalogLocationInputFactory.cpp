
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUTFACTORY_CPP
        #define ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUTFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/analog/AnalogLocationInputFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/analog/AnalogLocationInput.h"

auto AnalogLocationInputFactory::instance_owner() -> AnalogLocationInputFactory* { static std::unique_ptr<AnalogLocationInputFactory> value(new AnalogLocationInputFactory()); return value.get(); }
AnalogLocationInputFactory* AnalogLocationInputFactory::instance = AnalogLocationInputFactory::instance_owner();

    auto AnalogLocationInputFactory::getInstance() -> AnalogLocationInputFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AnalogLocationInputFactory::instance;
    
}


AnalogLocationInputFactory::AnalogLocationInputFactory() : list(new BasicArrayListD()){
}


    auto AnalogLocationInputFactory::addPlayer(int32_t playerInputId) -> void{

    AnalogLocationInput* analogLocationInput = AnalogLocationInput::NULL_ANALOG_LOCATION_INPUT;;
    

                        if(playerInputId < this->list->size())
                        
                                    {
                                    analogLocationInput= dynamic_cast<AnalogLocationInput*>(this->list->get(playerInputId));
    

                                    }
                                

                        if(analogLocationInput == AnalogLocationInput::NULL_ANALOG_LOCATION_INPUT)
                        
                                    {
                                    analogLocationInput= new AnalogLocationInput(playerInputId);
    
this->list->add(analogLocationInput);
    

                                    }
                                
}


    auto AnalogLocationInputFactory::getInstanceForPlayer(int32_t playerInputId) -> AnalogLocationInput*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<AnalogLocationInput*>(this->list->get(playerInputId));
    
}


    auto AnalogLocationInputFactory::getList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->list;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUTFACTORY_CPP
