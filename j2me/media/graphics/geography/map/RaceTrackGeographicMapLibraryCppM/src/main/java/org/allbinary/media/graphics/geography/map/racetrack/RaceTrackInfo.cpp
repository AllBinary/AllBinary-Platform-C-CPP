
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RaceTrackFrictionProperties.h"

class RaceTrackInfo
            : public Object
         {

    private: Integer id;

    private: std::string name;

    private: RaceTrackFrictionProperties raceTrackFrictionProperties;

    private: BasicColor foregroundBasicColor;

    private: BasicColor backgroundBasicColor;

    private: int32_t qualifyTime;

    private: int32_t worstContinuePosition;

    private: int32_t totalLaps;

public: RaceTrackInfo(Integer id, std::string name, RaceTrackFrictionProperties raceTrackFrictionProperties, BasicColor foregroundBasicColor, BasicColor backgroundBasicColor, int32_t qualifyTime, int32_t worstContinuePosition, int32_t totalLaps){
this->id= id;
    
this->name= name;
    
this->raceTrackFrictionProperties= raceTrackFrictionProperties;
    
this->backgroundBasicColor= backgroundBasicColor;
    
this->foregroundBasicColor= foregroundBasicColor;
    
this->qualifyTime= qualifyTime;
    
this->worstContinuePosition= worstContinuePosition;
    
this->totalLaps= totalLaps;
    
}


    public: Integer getId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->id;
    
}


    private: void setId(Integer id){
this->id= id;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: void setName(std::string name){
this->name= name;
    
}


    public: int32_t getQualifyTime(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->qualifyTime;
    
}


    public: void setQualifyTime(int32_t qualifyTime){
this->qualifyTime= qualifyTime;
    
}


    public: int32_t getWorstContinuePosition(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->worstContinuePosition;
    
}


    public: void setWorstContinuePosition(int32_t worstContinuePosition){
this->worstContinuePosition= worstContinuePosition;
    
}


    public: int32_t getTotalLaps(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->totalLaps;
    
}


    public: void setTotalLaps(int32_t totalLaps){
this->totalLaps= totalLaps;
    
}


    public: BasicColor getForegroundBasicColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->foregroundBasicColor;
    
}


    public: void setForegroundBasicColor(BasicColor foregroundBasicColor){
this->foregroundBasicColor= foregroundBasicColor;
    
}


    public: BasicColor getBackgroundBasicColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->backgroundBasicColor;
    
}


    public: void setBackgroundBasicColor(BasicColor backgroundBasicColor){
this->backgroundBasicColor= backgroundBasicColor;
    
}


    public: RaceTrackFrictionProperties getRaceTrackFrictionProperties(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->raceTrackFrictionProperties;
    
}


    public: void setRaceTrackFrictionProperties(RaceTrackFrictionProperties raceTrackFrictionProperties){
this->raceTrackFrictionProperties= raceTrackFrictionProperties;
    
}


};

            

