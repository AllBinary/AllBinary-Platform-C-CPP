
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUTFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUTFACTORY_H

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

    public: static AnalogLocationInputFactory* getInstance();

    private: BasicArrayList* list = new BasicArrayListD();

private: AnalogLocationInputFactory();

    public: void addPlayer(int32_t playerInputId);

    public: AnalogLocationInput* getInstanceForPlayer(int32_t playerInputId);

    public: BasicArrayList* getList();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUTFACTORY_H
