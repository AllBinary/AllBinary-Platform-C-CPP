
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/analog/AnalogLocationInput.h"

class AnalogLocationInputFactory
            : public Object
         {

    private: static AnalogLocationInputFactory* instance() { static std::unique_ptr<AnalogLocationInputFactory> value(new AnalogLocationInputFactory()); return value.get(); }

    public: static AnalogLocationInputFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AnalogLocationInputFactory::instance();
    
}


    private: BasicArrayList* list = new BasicArrayListD();

private: AnalogLocationInputFactory(){
}


    public: void addPlayer(int32_t playerInputId){

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


    public: AnalogLocationInput* getInstanceForPlayer(int32_t playerInputId){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<AnalogLocationInput*>(this->list->get(playerInputId));
    
}


    public: BasicArrayList* getList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->list;
    
}


};

            

