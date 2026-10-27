
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUTFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUTFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AnalogLocationInput;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AnalogLocationInputFactory
            : public virtual Object
         {

    private: static AnalogLocationInputFactory* instance_owner();
    private: static AnalogLocationInputFactory* instance;

    public: static AnalogLocationInputFactory* getInstance();

    private: BasicArrayList* list;

private: AnalogLocationInputFactory();

    public: void addPlayer(int32_t playerInputId);

    public: AnalogLocationInput* getInstanceForPlayer(int32_t playerInputId);

    public: BasicArrayList* getList();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUTFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUTFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUTFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/game/input/analog/AnalogLocationInput.h")
#include "org/allbinary/game/input/analog/AnalogLocationInput.h"
#endif

        #endif
    
