
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUT_H
        #define ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class CustomGPoint;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AnalogLocationInput
            : public virtual Object
         {

    private: static AnalogLocationInput* NULL_ANALOG_LOCATION_INPUT_owner();
    public: static AnalogLocationInput* NULL_ANALOG_LOCATION_INPUT;

    private: int32_t playerId;

    private: CustomGPoint* customGPoint;

    private: int32_t rz= 0;

    private: int32_t rightTrigger= 0;

    private: int32_t leftTrigger= 0;

public: AnalogLocationInput(int32_t playerId);

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUT_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUT_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/CustomGPoint.h>)
#include <org/allbinary/graphics/CustomGPoint.h>
#endif

        #endif
    
