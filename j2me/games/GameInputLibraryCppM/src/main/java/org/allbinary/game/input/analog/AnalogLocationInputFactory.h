
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUTFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUTFACTORY_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AnalogLocationInput.h"

class AnalogLocationInputFactory
            : public Object
         {

    private: static AnalogLocationInputFactory instance() { return AnalogLocationInputFactory(); }

    public: static AnalogLocationInputFactory getInstance();

    private: const BasicArrayList list = BasicArrayListD();

private: AnalogLocationInputFactory();

    public: void addPlayer(int32_t playerInputId);

    public: AnalogLocationInput getInstanceForPlayer(int32_t playerInputId);

    public: BasicArrayList getList();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUTFACTORY_H
