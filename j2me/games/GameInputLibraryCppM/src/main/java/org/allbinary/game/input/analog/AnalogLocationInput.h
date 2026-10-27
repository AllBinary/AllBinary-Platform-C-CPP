
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUT_H
        #define ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUT_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/CustomGPoint.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AnalogLocationInput
            : public Object
         {

    public: static AnalogLocationInput* NULL_ANALOG_LOCATION_INPUT() { static std::unique_ptr<AnalogLocationInput> value(new AnalogLocationInput( -1)); return value.get(); }

    private: int32_t playerId;

    private: CustomGPoint* customGPoint;

    private: int32_t rz= 0;

    private: int32_t rightTrigger= 0;

    private: int32_t leftTrigger= 0;

: AnalogLocationInput(int32_t playerId);

    public: int32_t getPlayerId();

    public: CustomGPoint* getCustomGPoint();

    public: int32_t getRz();

    public: void setRz(int32_t rz);

    public: int32_t getRightTrigger();

    public: void setRightTrigger(int32_t rightTrigger);

    public: int32_t getLeftTrigger();

    public: void setLeftTrigger(int32_t leftTrigger);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUT_H
